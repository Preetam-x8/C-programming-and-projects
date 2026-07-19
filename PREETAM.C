#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int a[] = {5, 3, 1, 6, 0, 2, 4};
    int n = 7;
    int i, j, temp;

    // Bubble Sort
    for(i = 0; i < n - 1; i++)
    {
	for(j = 0; j < n - i - 1; j++)
	{
	    if(a[j] > a[j + 1])
	    {
		temp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = temp;
	    }
	}
    }

    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++)
    {
	printf("%d ", a[i]);
    }

    return 0;
}