//Insertion Sort
#include<stdio.h>
int main(){

int arr[10], s, i, j, temp;

printf("Enter array size: ");
scanf("%d", &s);
//
printf("Enter elements: ");
for(i = 0; i < s; i++){
    scanf("%d", &arr[i]);
}

for(i = 1; i < s; i++){
    temp = arr[i];
    j = i - 1;
    while(j >= 0 && arr[j] > temp){
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
}

printf("array sorted in ascending order: ");
for(i = 0; i < s; i++){
    printf("%d ", arr[i]);
}

}
