#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int value){
    struct node* n=malloc(sizeof(struct node));
    n->data=value;
    n->next=NULL;
    return n;
}

int countNode(struct node* head,int val){
    struct node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data==val){
            count++;
        }
        temp=temp->next;
    }
    return count;
}

int main() {
    
    struct node* head=NULL;
    struct node* tail=NULL;
    
    int m,value;
    printf("Enter the size of linked list: ");
    scanf("%d",&m);
    printf("Enter elements: ");
    for(int i=0;i<m;i++){
        scanf("%d",&value);
        if(head==NULL){
            head=createNode(value);
            tail=head;
        }
        else{
            tail->next=createNode(value);
            tail=tail->next;
        }
    }
    int val;
    printf("Enter an element: ");
    scanf("%d",&val);
    int result=countNode(head,val);
    printf("%d",result);

    return 0;
}
