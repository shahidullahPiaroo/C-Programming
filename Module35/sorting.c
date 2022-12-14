#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void ascendingSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++) {

		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

void descendingSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n - 1; i++) {

		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] > arr[min_idx])
				min_idx = j;

		swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
	int arr[n];
	int arr2[n];
	int newArr[n];
	for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr2[i]);
    }
	ascendingSort(arr, n);
	descendingSort(arr2, n);
	printArray(arr, n);
	printArray(arr2, n);

    for(int i=0;i<n;i++)
    {
        newArr[i] = arr[i] - arr2[i];
    }
    printArray(newArr, n);

	return 0;
}

