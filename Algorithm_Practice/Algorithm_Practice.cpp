// Algorithm_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Algorithm_Practice.h"
#include "PointerFun.h"

using namespace std;



int main()
{

	//BubbleSort();

	//SelectionSort();

	//InsertSort();


	
	//AllocatingDeletingDynamicMemory();

	//ShowingDifferenceBetweenPassByValueAndPassByReference();


}

void InsertSort()
{

	int in_array[] = { 6,3,10,5,0,1,5,8,6,3 };
	int arr_len = sizeof(in_array) / sizeof(int);

	int arr_index = 0;
	int temp = 0;
	int i = 0, j = 1;

	for (i = 1; i < arr_len; i++)
	{
		temp = in_array[i];
		arr_index = i - 1;
		int hole = -1;
		while (arr_index >= 0 && in_array[arr_index] > temp)
		{
			in_array[arr_index + 1] = in_array[arr_index];
			hole = arr_index;
			arr_index--;
		}
		if (hole > -1)
		{
			in_array[hole] = temp;
		}

	}

	//check if value at in_array[ToTheLeftOfi] > temp
//yes, move in_array[ToTheLeftOfi] value to the right
//do this until at beining of array or value is not > temp
//then move save element into new gap created by shifting the other elements.

	printf("\n");
	for (i = 0; i < arr_len; i++)
	{
		printf("%d\n", in_array[i]);
	}
	printf("\n");

}

void SelectionSort()
{
	int start_val = 0;
	int* lowest = NULL;

	int arr[] = { 6,3,10,5,0,1,5,8,6,3 };
	//int arr[] = { 0,1,2,3 };

	int i = 0;
	int arr_len = sizeof(arr) / sizeof(int);

	lowest = arr;
	int swap_count = 0;
	while (start_val < arr_len)
	{
		for (i = start_val + 1; i < arr_len; i++)
		{
			if (arr[i] < *lowest)
			{
				lowest = &(arr[i]);
			}
		}
		if (lowest != &(arr[start_val]))
		{
			int temp = arr[start_val];
			arr[start_val] = *lowest;
			*lowest = temp;
			swap_count++;
		}
		start_val++;
		lowest = &(arr[start_val]);
	}

	for (i = 0; i < arr_len; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n");

	printf("swap count:%d", swap_count);
}

void BubbleSort()
{
	int i = 0, j = 0;
	int arr[] = { 7,2,10,0,1 };
	int arr_len = sizeof(arr) / sizeof(int);
	int swap = 0;



	int result = 1;
	while (result == 1)
	{
		result = 0;
		for (j = 0; j < arr_len - 1; j++)
		{


			if (*(arr + j) > *(arr + j + 1))
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				result = 1;
			}


		}

		//result = 1;
		arr_len--;
	}

	arr_len = sizeof(arr) / sizeof(int);
	for (i = 0; i < arr_len; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");

	do
	{
		swap = 0;
		for (i = 0; i < arr_len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swap = 1;

			}
		}
		arr_len--;
	} while (swap != 0);

	arr_len = sizeof(arr) / sizeof(int);
	for (i = 0; i < arr_len; i++)
	{
		printf("%d\n", arr[i]);
	}

	printf("\n");

}
