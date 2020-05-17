/********************************/
/* Programmer: Michael Zingale */
/* Project: TrainMaker #013 */
/* Purpose: Program that reads from a file into an array of structures and uses functions to process the array of structures to determine various value */
/*****************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

FILE* fpIn;

struct Train
{
	char cars[9];
	char cargoType;
	int weightFull;
	int length;
	int requiredHorsepower;
	int numberOfCars;
};

// Function Prototypes
void loadTrainData(struct Train train1[]);

int main()
{

	struct Train train1[7];

	loadTrainData(train1);

	return 0;
}

void loadTrainData(struct Train train1[])
{
	fopen_s(&fpIn, "traindata.txt", "r");
	if (fpIn == NULL)
	{
		printf("traindata.txt could not be opened for input.");
		exit(1);
	}











	printf("Entered Load Train Function");

}
