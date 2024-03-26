#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>
#include <math.h>

typedef struct Point

int main() {

	/*//Exercice 15:
	int n;
	printf("entre un chiffre: ");
	scanf_s("%d", &n);

	for (int i = 0; i < 6; i++) {
		n = n + 1;
		if (n % 2 != 0) {
			printf("%d \n", n);
		}
	}
	*/

	/*
	//Exercice 1(Conditions):
	int n;
	printf("entre un chiffre: ");
	scanf_s("%d", &n);

		if (n % 2 != 0) {
			printf("nombre impair");
		}
		else {
			printf("nombre pair");

		}
	*/

	/*//Exercice 2(Conditions):
	int a;
	int b;
	printf("entre un nombre a: ");
	scanf_s("%d", &a);
	printf("entre un nombre b: ");
	scanf_s("%d", &b);

	if (a < b) {
		printf("a<b");
	}
	else if (a > b) {
		printf("a>b");
	}
	else {
		printf("a=b");
	}
	*/


	/*//Exercice 3(Conditions):
	int a = 10;
	int b = 5;
	int c = 15;
	*/

	/*//Exercice 4(Conditions):
	int a = 0;
	int n;

	printf("entrez un nombre: ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			a = a + 1;
		}
	}
	if (a == 2) {
		printf("%d est  premier", n);
	}
	else {
		printf("%d n'est pas premier", n);
	}
	*/

	/*//Exercice 5(Conditions):
	int size = 0;
	printf("rentre la taille du tableau: \n");
	scanf_s("%d", &size);
	int* tab = (int*)malloc(sizeof(int) * size);
	int b = 0;
	int temp;


	for (int i = 0; i < size; i++) {

		scanf_s("%d", &b);
		tab[i] = b;

		if (tab[i] < tab[i+1]) {
			temp = tab[i+1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
		}

		printf("[%d] => %d\n  ", i, tab[i]);



	}

	return 0;
	*/

	/*//Exercice 8 (Boucles):
	int n = 1;
	int a = 1;
	int temp;
	int result;
	for (int i = 2; i < 11; i++) {

		temp = n * 9;
		result = temp + i;
		printf("%d.9 + %d = %d\n",n, i, result);

		n = n * 10 + i;



	}
	*/

	/*//Exercice 1(tableaux):
	int tab[100];
	int nbgen;
	int nb1=0, nb2 = 0, nb3 = 0, nb4 = 0, nb5 = 0, nb6 = 0, nb7 = 0, nb8 = 0, nb9 = 0;

	for (int i = 0; i < 100; i++) {
		nbgen = rand() % 9 + 1;
		tab[i] = nbgen;
		if(tab[i]==1){
			nb1 = nb1 + 1;
		}
		else if (tab[i] == 2) {
			nb2 = nb2 + 1;
		}
		else if (tab[i] == 3) {
			nb3 = nb3 + 1;
		}
		else if (tab[i] == 4) {
			nb4 = nb4 + 1;
		}
		else if (tab[i] == 5) {
			nb5 = nb5 + 1;
		}
		else if (tab[i] == 6) {
			nb6 = nb6 + 1;
		}
		else if (tab[i] == 7) {
			nb7 = nb7 + 1;
		}
		else if (tab[i] == 8) {
			nb8 = nb8 + 1;
		}
		else if (tab[i] == 9) {
			nb9 = nb9 + 1;
		}

		//printf("%d, ", tab[i]);

	}

	printf("1 est repete %d fois.\n", nb1);
	printf("2 est repete %d fois.\n", nb2);
	printf("3 est repete %d fois.\n", nb3);
	printf("4 est repete %d fois.\n", nb4);
	printf("5 est repete %d fois.\n", nb5);
	printf("6 est repete %d fois.\n", nb6);
	printf("7 est repete %d fois.\n", nb7);
	printf("8 est repete %d fois.\n", nb8);
	printf("9 est repete %d fois.\n", nb9);

	*/

	/*//Exercice (Tableaux)
	int tab[] = {1,5,5,2,8,1,4,7};
	int a = 0;


		for (int j = 0; j < 7; j++) {
			if (tab[j] > tab[j + 1]) {
				a = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = a;

			}
			else if (tab[j] == tab[j + 1]) {
				tab[j] = tab[j + 1];
			}

		
		printf("%d, ", tab[j]);

	}
	*/

	//Exercice Structures
	



}