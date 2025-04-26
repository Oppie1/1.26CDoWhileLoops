#include <stdio.h>
#include<stdlib.h>

int main()
{
	float grade = 0;
	float scoreEntered = 0;
	float numberOfTests = 0;
	float average = 0;

	printf("press 0 when complete. \n\n");
	

	do {
		printf ("Tests:  %.0f   Average  %.2f  \n", numberOfTests, average);
		printf(" \nEnter test score: ");
		scanf_s("%f", &scoreEntered);
		grade += scoreEntered;
		numberOfTests++;
		average = grade / numberOfTests;
	} while(scoreEntered != 0);


	return 0;
}