/**********************************/
/* Programmer: Michael Zingale   */
/* Project: Oh My Strings! #011 */
/* Purpose: Creates a string Palomar College, and another string, Community, and creates the new single string Palomar Community College */
/*****************************/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char collegeName[16];
	char collegeType[10];
	char fullCollegeName[26];
	char* token;

	printf("Enter Palomar College: ");
	gets(collegeName);
	
	printf("Enter string to insert: ");
	gets(collegeType);
	
	printf("string is: %s\n", collegeName);
	printf("string to insert is: %s\n", collegeType);
	
	// Grabs first eight characters from collegeName and places in fullCollegeName & null terminate
	strncpy(fullCollegeName, collegeName, 8);
	fullCollegeName[8] = '\0';

	// Concatenates collegeType to fullCollegeName, adds space & null terminate
	strcat(fullCollegeName, collegeType);
	fullCollegeName[17] = ' ';
	fullCollegeName[18] = '\0';

	// Splits collegeName into two tokens, throws away first & concatenates second token to fullCollegeName
	token = strtok(collegeName, " ");
	token = strtok(NULL, " ");
	strcat(fullCollegeName, token);

	printf("The whole thing is: %s\n", fullCollegeName);

	return 0;
}