/********************************/
/* Programmer: Michael Zingale */
/* Project: BubbleUp #010 */
/* Purpose: Reads a text file containing fifty integers and sorts them in an ascending order using bubblesort algorithm */
/*****************************/

#define _CRT_SECURE_NO_WARNINGS
#define MAX 50

#include <stdio.h>

FILE* fpIn;

// Function Prototypes
void bubbleSort(int num[]);
void swap(int *firstElement, int *secondElement);

int main()
{
	int num[MAX];
	int index = 0;

	fopen_s(&fpIn, "fiftyrandom.txt", "r");
	if (fpIn == NULL)
	{
		printf("fiftyrandom.txt could not be opened for input.");
		exit(1);
	}

	while (!feof(fpIn)) 
	{
		fscanf_s(fpIn, "%d", &num[index++]);
	}

	bubbleSort(num);									// Sorts from least to greatest using bubblesort algorithm
	printf("Michael - After the bubble up sort\n");
	printf("----------------------------------\n");
	
	// Prints out the sorted array
	for (int i = 0; i < MAX; i++)
	{
		printf("The value is: %d\n", num[i]);
	}

	return 0;
}

void bubbleSort(int num[])
{
	int isSorted = 0;									// False
	int lastUnsorted = MAX - 1;
	
	while (!isSorted)
	{
		isSorted = 1;									// Assumption that array is already sorted

		for (int i = 0; i < lastUnsorted; i++)			// After each iteration of loop, element is properly sorted
		{
			if (num[i] > num[i + 1])
			{
				swap(&num[i], &num[i + 1]);
				isSorted = 0;							// Had to call swap, meaning array was not sorted
			}
		}
	}
}

void swap(int *firstElement, int *secondElement)
{
	int temp = *firstElement;
	*firstElement = *secondElement;
	*secondElement = temp;
}