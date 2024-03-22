#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>

typedef struct Intarray
{
	int* pContent;

	int iSize;
	int iCapacity;

}IntArray;

void Init(IntArray* pIntArray)
{
	pIntArray->pContent = (int*)malloc(sizeof(int));
}

//[]

//[5, 12]

void Add(IntArray* pIntArray, int iValue)
{
	int* a = (int*)realloc(pIntArray->pContent, sizeof(int) * 2);

	if (pIntArray->iSize > pIntArray->iCapacity) {
		pIntArray->iCapacity = a;
	}

}

void Insert(IntArray* pIntArray, int iValue, int iIndex)
{
	

}

void Remove(IntArray* pIntArray, int iIndex)
{
	
}

void Print(IntArray* pIntArray)
{
	//
}

void Destroy(IntArray* pIntArray)
{
	//
}

int main() {

	Init();
	Add();
	Insert();

	return 0;
}