#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int* allocateMemory(int *arr2, int nr)
{
	if (nr == 0)
		arr2 = (int*)calloc(1, sizeof(int));
	else
		arr2 = (int*)realloc(arr2, (nr + 1) * sizeof(int));
	return arr2;
}
int main(void)
{
	int *arr = NULL;
	int nrOfElements = 0, input, i;
	do {
		printf("Enter number: ");
		scanf("%d", &input);
		if (input != 0)
		{
			arr = allocateMemory(arr, nrOfElements);
			*(arr + nrOfElements) = input;
			nrOfElements++;
		}
	} while (input != 0);

	for (i = 0; i < nrOfElements; i++)
		printf("%d\n", *(arr + i));

	system("pause");
		return 0;
}