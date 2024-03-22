#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	/*
	//Exrecice1:
	float f1 = 5;
	float f2 = 0;

	float* pi = &f1;
	*pi = 10;

	pi = &f2;
	*pi = 20;



	printf("f1 = %f\n", f1);
	printf("f2 = %f", f2);

	return 0;
	*/

	/*
	//Exercice2:
	float pf1 = 5;
	float pf2 = 1;
	float pf0 = 0;

	float* pi = &pf1;
	*pi = 5;

	float* pi2 = &pf2;
	*pi2 = 1;

	float* pi0 = &pf0;
	*pi0 = 0;

	pf0 = pf1;
	pf1 = pf2;
	pf2 = pf0;


	printf("pf1 = %f\n", pf1);
	printf("pf2 = %f", pf2);


	return 0;
	*/

	/*
	//Exercice3:
	float tab[10];
	for (int i = 0; i < 10; i++) {
		tab[i] = 5;
		printf("%f \n", tab[i]);
	}
		return 0;

	*/

	/*
	//Exercice4:
	float tab[10];
	for (int i = 0; i < 10; i++) {
		tab[i] = 5;
		printf("%f \n", tab[i]);
	}
		return 0;

	*/

	/*
	//Exercice5:
	
		int size = 0;
		printf("rentre la taille du tableau: \n");
		scanf_s("%d", &size);
		int* tab = (int*)malloc(sizeof(int) * size);
		int b = 0;


		for (int i = 0; i < size; i++) {
			printf("entre la valeur: \n");

			scanf_s("%d", &b);
			tab[i] = b;

			printf("[%d] => %d\n : ", i, tab[i]);
		}
	*/

	//Exercice6:

	int size = 0;
	printf("rentre la taille du tableau: \n");
	scanf_s("%d", &size);
	int* tab = (int*)malloc(sizeof(int) * size);
	int b = 0;


	for (int i = 0; i < size; i++) {
		printf("entre une valeur positif : \n");

		scanf_s("%d", &b);
		tab[i] = b;

		printf("[%d] => %d\n  ", i, tab[i]);
		if (b <= 0) {
			return 0;
		}
	}

		


	
	



	return 0;
	
}
