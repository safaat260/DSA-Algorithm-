#include<stdio.h>

int main() {
    int arr[10], s, s2, p, e, i;
//
    printf("Enter array size: ");
    scanf("%d", &s);

    printf("Enter elements: ");
    for(i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element for search: ");
    scanf("%d", &s2);

    for(i = 0; i < s; i++) {
        if(arr[i] == s2) {
            printf("The index of %d is %d", s2, i);  
            break;
        }
    }

    return 0;
}
