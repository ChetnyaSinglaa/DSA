#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* createNode(int value){
    struct node* n=malloc(sizeof(struct node));
    n->data=value;
    n->next=NULL;
    return n;
}

struct node* insertEnd(struct node* head, int value){
    struct node* newNode=createNode(value);
    if(head==NULL){
        head=newNode;
        return newNode;
    }
    struct node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return head;
}

struct node* merge(struct node* head1,struct node* head2){
    struct node* result=NULL;
    
    while(head1!=NULL && head2!=NULL){
        if(head1->data < head2->data){
            result=insertEnd(result,head1->data);
            head1=head1->next;
        }
        else{
            result=insertEnd(result,head2->data);
            head2=head2->next;
        }
    }
    while(head1!=NULL){
        result=insertEnd(result,head1->data);
        head1=head1->next;
    }
    while(head2!=NULL){
        result=insertEnd(result,head2->data);
        head2=head2->next;
    }
    return result;
}

void Display(struct node* head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}

int main() {
    struct node* head1=NULL;
    struct node* head2=NULL;
    struct node* merged=NULL;
    int n,m,value;
    printf("Enter the size of first list: ");
    scanf("%d",&n);
    printf("Enter the list: ");
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        head1=insertEnd(head1,value);
    }
    printf("Enter the size of second list: ");
    scanf("%d",&m);
    printf("Enter the list: ");
    for(int i=0;i<m;i++){
        scanf("%d",&value);
        head2=insertEnd(head2,value);
    }
    
    merged=merge(head1,head2);
    Display(merged);

    return 0;
}
