#include <iostream>
#include<bits/stdc++.h>
#include <malloc.h>

void app(int);
void display();

struct node{
    int data;
    struct node* next;
};

struct node *p,*temp;

int main() {
    int item,flag = 1;
    while(flag == 1){
        std::cout << "Enter the Element you want to append: (To exit press 0 and to display 2) "; 
        std::cin >> item;
        if(item == 0)
        flag = 0;
        else if(item == 2){
            flag = 0;
            display();
        }
    }
    return 0;
}

void append(int da){
    if(p == NULL){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = da;
        temp->next = NULL;
        p = temp;
    }
    
    else{
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = da;
        temp->next = p;
        p = temp;
    }
}

void display(){
    while(p->next != NULL){
        std::cout << "Elements are " << p->data;
        p = p->next;
    }
    
}
