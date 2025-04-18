//quick sort
#include<stdio.h>

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i=low+1;
    int j=high;

    while(i <= j){
        while(i <= high && arr[i] <= pivot){
            i++;
        }

        while(j >= low && arr[j] > pivot){
            j--;
        }

        if(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;

}
//
void quicksort(int arr[], int low, int high){
    if(low < high){
        int pivotindex = partition(arr, low, high);
        quicksort(arr,low, pivotindex-1);
        quicksort(arr,pivotindex+1,high);
    }
}

int main (){

    int n;
    printf("Enter array size : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array element :\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    quicksort(arr,0,n-1);

    printf("Sorted array : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
