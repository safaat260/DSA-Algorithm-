//bubble sort
#include<stdio.h>
int main(){

int arr[10],s,s2,p,e,i,j;

printf("Enter array size: ");
scanf("%d", &s);
//
printf("Enter elements: ");
for(i=0;i<s;i++){
scanf("%d", &arr[i]);
}

for(i=0;i<s-1;i++)
{
    for(j=0;j<s-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
        }
    }

}

printf("array sort in acending order: ");
for(i=0;i<s;i++){
    printf("%d ", arr[i]);
}


}
