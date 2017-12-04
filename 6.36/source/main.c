#include<stdio.h>
#include<stdlib.h>
#define size 10

char stringReverse(char str[], int x);
char chg[size];

int main(void)
{
	char str[size] = {'v','x','6','l','G','0','b','8','l','B'};
	int i;

	stringReverse(str,0);

	for (i = 0; i < size; i++)printf("%c",str[i]);
	
	printf("\n");
	system("pause");
	return 0;
}

char stringReverse(char str[], int x)
{
	int i;
	if (x == 0)for (i = 0; i < size; i++)chg[i] = str[i];
	str[size - x - 1] = chg[x];
	if (str[x] != '\0')stringReverse(str, x + 1);
}


/*
char stringReverse(char str[], int x)
{
	const int mid = size / 2 ;
	int i;
	if (x == (size - 1))for (i = 0; i < size; i++)chg[i] = str[i];
	str[size - x - 1] = chg[x];
	if (x > 0)stringReverse(str, x - 1);
}
*/

