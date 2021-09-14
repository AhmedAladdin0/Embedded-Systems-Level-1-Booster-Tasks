#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "typedef.h"
#define arrayLimit 255

/***
(Additional Function)
to disable the function delete line (53)  >>         loadingBar();
function to draw a loading bar
***/
void loadingBar()
{
    system("color 0A");

    char a = 177, b = 219;

    printf(""
            "Sorting...");
    printf("\n");


    for (int i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("");


    for (int i = 0; i < 26; i++) {
        printf("%c", b);

        Sleep(15);
    }
}

/***
function to check if array is sorted or not before sorting it
inputs [ array
         array size ]
output [ message = array is sorted in ascending order
         message = array is not sorted in ascending order]
***/

int32_t checkIfAscendingSorted(int32_t *arr, int32_t size)
{
    for(int32_t index=0; index<size-1 ; index++)
        {
            if(arr[index]>arr[index+1])
        {

            printf("\nArray is not sorted in assenting order\n\n");
            loadingBar();
            return;
        }
    }
    printf("\nArray is sorted in assenting order\n\n");
    return ;
}

/***
function to Sort the array in ascend order
inputs [ array
         array size ]
output [ array in ascending order]
***/
void insertionSort(int32_t arr[] , int32_t arraySize )
{
int32_t index , indexValue , previousIndex;
    for (index = 1; index < arraySize; index++)
    {
        indexValue = arr[index];
        previousIndex = index - 1;


        while(previousIndex >= 0 && arr[previousIndex] > indexValue)
        {
            arr[previousIndex+1] = arr[previousIndex];
            previousIndex = previousIndex - 1;
        }
        arr[previousIndex + 1] = indexValue;
    }
}

/***
function to search for the target number
inputs [ array
         array size
         target ]
output [ the index of the target in the array]
***/
uint8_t binarySearch(int32_t *arr, int32_t size, int32_t target)
{
    int32_t startOfArr = 0;
    int32_t endOfArr = size - 1;
    if (size > arrayLimit)
    {
        printf ("Abort searching array size > 255");
        exit(0);
    }
    while(startOfArr <= endOfArr)
    {
    int32_t mid = (startOfArr + endOfArr)/2;
    if (arr[mid] == target)
         {
            return mid;
         }
    else if (arr[mid] > target)
         {
            endOfArr = mid -1;
	     }
    else
         {
            startOfArr = mid + 1;
         }
    }
        return -1;
}



int32_t main()
{
    system("color 0A");
    int32_t arr[] = { 1, 9, 3, 4, 5 };
    int32_t size = sizeof(arr) / sizeof(arr[0]);
    int32_t target;
    printf ("Enter the target number : ");
    scanf ("%d", &target);


    checkIfAscendingSorted(arr, size);
    insertionSort(arr, size);


    int32_t result = binarySearch(arr, size, target);
	if(result == arrayLimit)
    {
        printf("\n\nTarget is not found in array\n");
    }
    else
    {
        printf("\n\nTarget is found at index : %d\n",result);
    }
	return 0;

}
