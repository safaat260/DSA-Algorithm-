//Insert
#include<stdio.h>
int main(){

int arr[10],s,p,e,e1,i;

printf("Enter array size: ");
scanf("%d", &s);

printf("Enter elements: ");
for(i=0;i<s;i++){
scanf("%d", &arr[i]);
}
//
printf("Enter position for insert: ");
scanf("%d", &p);

printf("Enter element: ");
scanf("%d", &e1);

for(i=s;i>p;i--){
     arr[i]= arr[i-1];
}

arr[p]=e1;
s++;

for(i=0;i<s;i++){
    printf("%d ", arr[i]);
}

}
