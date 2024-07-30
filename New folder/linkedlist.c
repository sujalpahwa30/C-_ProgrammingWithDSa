#include<stdio.h>
#define MAX 5
typedef struct Node{
    int data;
    int next;
} Node;
Node list[MAX];
int head = -1;
int currentIndex = 0;
void initializeList(){
    for(int i = 0; i < MAX; i++){
        list[i].next = -1;
    }
}
void insertNodeEnd(int data){
    if(currentIndex >= MAX){
        printf("List is full , Cannot insert more nodes");
        return;
    }
    list[currentIndex].data = data;
    if(head == -1){
        head = currentIndex;
    }
    else{
        int temp = head;
        while(list[temp].next != -1){
            temp = list[temp].next;
        }
        list[temp].next = currentIndex;
    }
    currentIndex++;
}
void printList(){
    
}