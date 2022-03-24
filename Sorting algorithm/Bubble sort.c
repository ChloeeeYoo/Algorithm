#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define STRLEN 100

void shuffleArray(int arr[], int size)
{
	srand(time(NULL)); 
	int temp; 
	int ridx; 

	for (int i = 0; i <= size - 1; i++)
	{
		ridx = rand() % (size - i) + i;
		temp = arr[i]; 
		arr[i] = arr[ridx];
		arr[ridx] = temp; 
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	puts("");
}

void ascendingSort(int arr[], int size)
{
	int pass, i, temp, swapped = 1; 

	for (pass = size - 1; pass >= 0 && swapped; pass--)
	{
		swapped = 0;  

		for (i = 0; i <= pass - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i]; 
				arr[i] = arr[i + 1];
				arr[i + 1] = temp; 

				swapped = 1; 
			}
		}
	}
}

void descendingSort(int arr[], int size)
{
	int pass, i, temp, swapped = 1;

	for (pass = size - 1; pass >= 0 && swapped; pass--)
	{
		swapped = 0; 

		for (i = 0; i <= pass - 1; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;

				swapped = 1;
			}
		}
	}
}

int main()
{
	const char* string1 = "ascending";
	const char* string2 = "descending";
	const char* string3 = "exit";

	int n;
	void(*pf)(int[], int);

	clock_t start, end;
	char buffer_clear;

	while (1)
	{
		printf("ascending / descending / exit\n");
		
		char option[STRLEN];
		printf("Input the option: ");
		
		scanf("%s", option);
		printf("Your input: %s\n\n", option);


		if (!strcmp(option, string1) || !strcmp(option, string2))
		{
			printf("Input n value:");
			scanf("%d", &n);

			if (n > 2000000 || n < 1)
			{
				printf("n value is not valid\n");
				printf("error: Please re input n value\n\n");

				buffer_clear = getchar();
				continue;
			}

			if (!strcmp(option, string1))
			{
				printf("ascending sort\n");
				pf = ascendingSort;
			}
			else if (!strcmp(option, string2))
			{
				printf("descending sort\n");
				pf = descendingSort;
			}

			int size = n / 2;
			int *arr = (int*)malloc(sizeof(int) * size);

			for (int i = 0; i < size; i++)
				arr[i] = 2 * (i + 1);
			

			shuffleArray(arr, size);

			if (n <= 20)
			{
				printf("Before Sorting: ");
				printArray(arr, size);
			
				start = clock();				
				(*pf)(arr, size);				
				end = clock(); 
	
				printf("After Sorting: ");
				printArray(arr, size);
			}
			else
			{
				start = clock();
				(*pf)(arr, size);
				end = clock(); 
			}


			double duration = (double)(end - start);
			printf("%lfsec\n\n", duration / CLOCKS_PER_SEC);

			duration = (end - start); 
			printf("%fmsec\n\n", duration * 1000 / CLOCKS_PER_SEC);

			free(arr);
			buffer_clear = getchar();
			
		}
		else if (!strcmp(option, string3))
		{
			printf("exit the program\n\n");
			break;
		}
		else
		{
			printf("Check the value of option: %s\n", option);
			printf("error: wrong input. please try again\n\n");

			continue;
		}
	}	
	return 0; 
}
