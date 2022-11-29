#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int arr[] = {23, 49, 62, 3, 1, 90, 72};
	int n = sizeof(arr)/sizeof(arr[0]);
	int min = 0;

	for (int i=0; i<n-1; i++)
	{
		min = i;
		for (int j=i+1; j<n; j++)
		{
			if (arr[j]<arr[min])
			{
				min = j;
			}
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}

	for (int k=0; k<n; k++)
	{
		printf("%d\n", arr[k]);
	}

	return 0;
}
