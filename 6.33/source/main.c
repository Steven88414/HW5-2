#include<stdio.h>
#include<stdlib.h>
#define size 15
int x = 0;
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

int main(void)
{
	int a[size];
	size_t i;
	int key;
	size_t result;

	for (i = 0; i < size; ++i) {
		a[i] = 2 * i;
	}

	printf("%s", "Enter a number between 0 and 28: ");
	scanf_s("%d", &key);

	printHeader();

	result = binarySearch(a, key, 0, size - 1);

	if (result != -1)printf("\n%d found in array element %d\n", key, result);
	else printf("\n%d not found\n", key);

	system("pause");
}
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
	int middle;

	if (x == 4) { x = x+1; return -1; }
	x = x + 1;

	middle = (low + high) / 2;
	printRow(b, low, middle, high);

	if (searchKey == b[middle])return middle;
	else 
	{
		if(searchKey < b[middle])high = middle - 1;
		if (searchKey > b[middle])low = middle + 1;
		binarySearch(b, searchKey, low, high);
	}

}

void printHeader(void)
{
	unsigned int i;
	puts("\nSubscripts");

	for (i = 0; i < size; ++i)printf("%4u", i);
	puts("");
	for (i = 1; i <= 4 * size; ++i)printf("%s", "-");
	puts("");
}

void printRow(const int b[], size_t low, size_t mid, size_t high)
{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		if (i<low || i>high)printf("%s", "    ");
		else if (i == mid)printf("%3d*", b[i]);
		else printf("%4d", b[i]);
	}
	puts("");
}
