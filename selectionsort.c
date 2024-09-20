// Question 22 - Write a program in bubble sort and selection sort
// Selection Sort

#include <stdio.h>

void selectionSort(int arr[], int n);

int main() {
    int arr[] = {17, 34, 25, 49, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array is : \n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("The sorted array is : \n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}
void selectionSort(int arr[], int n) {
    int i, j;
    int minIndex;
    int temp;

    for(int i = 0; i < n - 1; i++) {
        minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}