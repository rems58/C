#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

#define N 16
#define MINE_COUNT 20


typedef struct {
    bool isMine;
    bool isRevealed;
    bool isFlagged;
    int adjacentMines;
} Tile;

typedef struct {
    Tile tiles[N][N];
    int size;
} Grid;

void initializeGrid(Grid* grid) {

    grid->size = N;
    
    for (int i = 0; i < grid->size; i++) {
        for (int j = 0; j < grid->size; j++) {
            grid->tiles[i][j].isMine = false;
            grid->tiles[i][j].isRevealed = false;
            grid->tiles[i][j].isFlagged = false;
            grid->tiles[i][j].adjacentMines = 0;
        }
    }
}

void placeMines(Grid* grid) {
    int minesPlaced = 0;
    while (minesPlaced < MINE_COUNT) {
        int x = rand() % N;
        int y = rand() % N;

        if (!grid->tiles[x][y].isMine) {
            grid->tiles[x][y].isMine = true;
            minesPlaced++;
            for (int a = -1; a <= 1; a++) {
                for (int b = -1; b <= 1; b++) {
                    int nx = x + a, ny = y + b;
                    if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                        grid->tiles[nx][ny].adjacentMines++;
                    }
                }
            }
        }
    }
}

void displayGrid(const Grid* grid) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int count = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            SetConsoleTextAttribute(hConsole, 7);
            if (grid->tiles[i][j].isRevealed) {
                SetConsoleTextAttribute(hConsole, 14);
                printf("||%3d|| ", grid->tiles[i][j].adjacentMines);
            }
            else if (grid->tiles[i][j].isFlagged) {
                SetConsoleTextAttribute(hConsole, 10);
                printf("|| F || ");
            }
            else {
                printf("||%3d|| ", count);
            }
            count++;
        }
        printf("\n");
    }
    SetConsoleTextAttribute(hConsole, 15);
}

void getUserInput(int* x, int* y, bool* flag) {
    int choice;
    printf("Choisissez un numéro de case : ");
    scanf_s("%d", &choice);
    choice--; 
    *x = choice / N; 
    *y = choice % N; 

    char flagInput;
    printf("Placer un drapeau ? (o/n) : ");
    scanf_s(" %c", &flagInput, 1);
    *flag = (flagInput == 'o' || flagInput == 'O');
}

void updateTile(Grid* grid, int x, int y, bool flag) {
    if (flag) {
        grid->tiles[x][y].isFlagged = !grid->tiles[x][y].isFlagged;
    }
    else if (!grid->tiles[x][y].isFlagged) {
        grid->tiles[x][y].isRevealed = true;
    }
}

void revealTiles(Grid* grid, int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= N || grid->tiles[x][y].isRevealed || grid->tiles[x][y].isFlagged) {
        return;
    }
    grid->tiles[x][y].isRevealed = true;

    if (grid->tiles[x][y].adjacentMines == 0 && !grid->tiles[x][y].isMine) {
        for (int a = -1; a <= 1; a++) {
            for (int b = -1; b <= 1; b++) {
                if (a != 0 || b != 0) {
                    revealTiles(grid, x + a, y + b);
                }
            }
        }
    }


}

bool checkWin(const Grid* grid) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!grid->tiles[i][j].isMine && !grid->tiles[i][j].isRevealed) {
                return false;
            }
        }
    }
    return true;
}

void playGame() {
    Grid grid;
    initializeGrid(&grid);
    placeMines(&grid);
    while (true) {
        displayGrid(&grid);
        int x, y;
        bool flag;
        getUserInput(&x, &y, &flag);
        if (flag) {
            updateTile(&grid, x, y, true);
        }
        else {
            if (!grid.tiles[x][y].isRevealed && !grid.tiles[x][y].isMine) {
                revealTiles(&grid, x, y);
            }
            else if (grid.tiles[x][y].isMine) {
                printf("Perdu, tu as touche une mine.\n");
                break;
            }
        }

        if (checkWin(&grid)) {
            printf("GG, tu as gagné !\n");
            break;
        }
    }
}

int main() {
    srand(time(NULL));
    playGame();
    return 0;
}

