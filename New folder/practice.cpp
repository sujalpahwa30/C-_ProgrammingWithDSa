#include<iostream>
#include<stdlib.h>
#define SIZE 5

int push(int);
int pop(void);

int S[SIZE] , TOP = SIZE , x , choice;
int main(){

    while(1)
    {
        printf("1.push\n & 2.pop\n & 3.exit\n");
        printf("enter choice"); scanf("%d", &choice);

        switch(choice)
        {
            case1:
               printf("enter element");
               scanf("%d",&x);
               push(x);
               break;

            case2:
              x = pop();
              printf("%d",x);
              break;

            default:exit(0);
        }
    }
}
    int push(int x){
        if(TOP == 0){
            printf("Stack is full");
            return 0;
        }
        TOP--;
        S[TOP] = x;
        return 0;
    }
    int pop(){
        if(TOP == SIZE){
            printf("Stack is empty");
            return 0;
        }
        x = S[TOP];
        TOP++;
        return 0;
    }