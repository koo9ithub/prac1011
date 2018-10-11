#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("input the month: ");
	scanf("%i", &i);
	
	if (i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
	{
		printf("The number of days: 31");
	}
	else if (i==2)
	{
		printf("The number of days: 28");
	}
	else if (i==4 || i==6 || i==9 || i==11)
	{
		printf("The number of days: 30");
	}
	else 
	{
		printf("the month you entered is not found.");
	}
	
	return 0;
}
