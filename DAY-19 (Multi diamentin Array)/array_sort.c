#include <stdio.h>

int main()
{
    // Array Sorting in ascending or descending order

    int arr[] = {89, 90, 56, 20, 10, 38}; //unsorted array {89, 56, 20, 10, 38, 90}
    int temp;
    for(int i=0; i<6; i++){ // 
        for(int j=0; j<6; j++){ //j=0, j=1 , j=2, j=3
            if(arr[j] > arr[j+1]){ // 89>90=f, 90>56=t, 56>20=t
                temp = arr[j]; // 90, 56
                arr[j] = arr[j+1]; // 56, 20
                arr[j+1] = temp; // 90, 56
            }
        }
    }

    printf("Sorted Array in Ascending Order: ");
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}