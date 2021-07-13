/* C for Everyone: Programming Fundamentals
	Week 5: merge code-example 1 */

# include <stdio.h>

void print_array(int how_many, int data[], char* str)
{
	int i;
	printf("%s", str);

	for (i = 0; i < how_many; i++)
		printf("%d\t", data[i]);

}

void merge(int a[], int b[], int c[], int how_many) /* a and b same size */
{
	int i = 0, j = 0, k = 0;

	while (i < how_many && j < how_many)
		if (a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	while (i < how_many)  // Only one of them will be executed. To add the remaining number of one of the pile.
		c[k++] = a[i++];
	while (j < how_many)
		c[k++] = b[j++];

}

int main(void)
{
	const int SIZE = 5;
	int a[] = { 67,82,83,88,99 };
	int b[] = { 58,69,72,81,88 };
	int c[2*5];
	print_array(SIZE, a, "My grades\n");
	printf("\n\n");
	print_array(SIZE, b, "More grades\n");
	printf("\n\n");
	merge(a, b, c, SIZE);
	print_array(2 * SIZE, c, "My sorted grades\n");
	printf("\n\n");

	return 0;


}
