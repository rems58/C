#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>


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

	//Exercice 4(Conditions):
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
}