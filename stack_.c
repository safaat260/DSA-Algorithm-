//stack
#include<stdio.h>
#include<stdlib.h>
int main(){
int stack [10], top=-1, choice, value, i;
while(1){
    printf("\nStack menu: \n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. display\n");
    printf("4. exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            if(top==10-1){
                printf("stack is overflow \n");
            }
            else{
                printf("Enter value to push: ");
                scanf("%d", &value);
                top++;
                stack[top]=value;
                printf("\n%d is pushed into the stack\n", value);
            }break;
        case 2:
            if(top==-1){
                printf("\nstack is underflow \n");
            }
            else{
                printf("%d is popped", stack[top]);
                top--;
            }break;
        case 3:
            if(top==-1){
                printf("\nstack is empty \n");
            }
            else{
                printf("current stack: ");
                for(i=top; i>=0; i--){
                    printf(" %d", stack[i]);
                }
                printf("\n");
            }break;
        case 4:
            exit(0);


    }
//
    }
return 0;
}
//commit push check vscode