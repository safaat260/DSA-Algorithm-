//Delete
#include<stdio.h>
int main(){

int arr[10],s,p,e,i;

printf("Enter array size: ");
scanf("%d", &s);

printf("Enter elements: ");
for(i=0;i<s;i++){
scanf("%d", &arr[i]);
}
//
printf("Enter position for delete: ");
scanf("%d", &p);


for(i=p;i<s;i++){
     arr[i]= arr[i+1];
}

for(i=0;i<s-1;i++){
    printf("%d ", arr[i]);
}

//check
}
