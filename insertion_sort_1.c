#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int arr[] = {23, 49, 62, 3, 1, 90, 72};
	int n = sizeof(arr)/sizeof(arr[0]);

	for (int i=0; i<n; i++)
	{
		int k = arr[i];
		int j = i-1;

		while (k<arr[j] && j>=0)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = k;
	}

	for (int a=0; a<n; a++)
	{
		printf("%d ", arr[a]);
    printf("\n");
	}

	return 0;
}
