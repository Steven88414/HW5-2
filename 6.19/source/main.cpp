#include<stdio.h>
#include<stdlib.h>
#include <ctime>

int main(void)
{
	int num1, num2, i, j, sum,total=0;
	float max;
	int count[20] = { 0 };
	srand(time(NULL));

	for (i = 0; i < 36000; i++)
	{
		num1 = rand() % 6 + 1;
		num2 = rand() % 6 + 1;
		sum = num1 + num2;
		switch (sum)
		{
		case 2:
			count[2] = count[2] + 1;
			break;
		case 3:
			count[3] = count[3] + 1;
			break;
		case 4:
			count[4] = count[4] + 1;
			break;
		case 5:
			count[5] = count[5] + 1;
			break;
		case 6:
			count[6] = count[6] + 1;
			break;
		case 7:
			count[7] = count[7] + 1;
			break;
		case 8:
			count[8] = count[8] + 1;
			break;
		case 9:
			count[9] = count[9] + 1;
			break;
		case 10:
			count[10] = count[10] + 1;
			break;
		case 11:
			count[11] = count[11] + 1;
			break;
		case 12:
			count[12] = count[12] + 1;
			break;
		default:
			break;
		}
	}
	printf("%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d\n", 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	for (j = 2; j <= 12; j++)
	{
		printf("%-5d", count[j]);
	}
	max = count[7];
	printf("\n出現7的機率%.5f\n",max/36000);

	system("pause");
	return 0;
}