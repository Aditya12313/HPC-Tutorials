#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 18250
void swapIndex(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n)
{
	int swapped=0;
    for (int i = 0; i < n - 1; i++)
    {
	swapped=0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                {swapIndex(arr, j, j + 1);
		  swapped=1;
		}
        }
	if(!swapped) break;
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {

    // Initialize pivot to be the first element
    int p = arr[low];
    int i = low;
    int j = high;

    while (i < j) {

        // Find the first element greater than
        // the pivot (from starting)
        while (arr[i] <= p && i <= high - 1) {
            i++;
        }

        // Find the first element smaller than
        // the pivot (from last)
        while (arr[j] > p && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {

        // call partition function to find Partition Index
        int pi = partition(arr, low, high);

        // Recursively call quickSort() for left and right
        // half based on Partition Index
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(void) {
	printf("Program started");
	fflush(stdout);	
    int temp[size];
    int copy[size];
	printf("Array size = %d\n", size);
    srand(42);

    for(int i=0;i<size;i++)
    {
        temp[i]=rand()%101;
    }
    for(int i=0;i<size;i++)
        copy[i]=temp[i];
	clock_t start,end;
	double bubbleTime, quickTime;
	start=clock();
    bubbleSort(temp,size);
	end=clock();
	bubbleTime=(double)(end-start)/CLOCKS_PER_SEC;
	start=clock();
    quickSort(copy,0,size-1);
	end=clock();
	quickTime=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Bubble sort: %.19f seconds \n",bubbleTime);
	printf("Quick sort: %.19f seconds  \n",quickTime);

	
}
