#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

}*head,*newnode;

void create()
{
    struct node *temp;
    int choice = 1;

    head = 0 ;
while(choice){

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter node values : ");
    scanf("%d",&newnode->data);

    newnode->next = 0 ;

    if(head==0)
    {
        head=temp=newnode;
    }

    else
    {
        temp->next = newnode;
        temp=newnode;
    }

    printf("Do you want enter any node value : ");
    scanf("%d",&choice);

}

}

void display(){
 struct node *temp;

 temp = head;

 while(temp!=0){
    printf("\n%d",temp->data);
    temp = temp->next;
 }


}

// ================================================= insert data given position ============================================
void insertpos(){
 int pos;
 struct node *temp;
 int i = 1 ;

 printf("Enter data insert position : ");
 scanf("%d",&pos);


 newnode = (struct node*)malloc(sizeof(struct node));

 printf("Enter new node values : ");
 scanf("%d",&newnode->data);

 temp = head;

 while(i<pos-1){
    temp = temp->next;
    i++;
 }

 newnode->next = temp->next;
 temp->next = newnode;
 temp = newnode;

}

void newdisplay(){
 struct node *temp;

 temp = head;

 while(temp!=0){
    printf("\n%d",temp->data);
    temp = temp->next;
 }


}


void main(){

create();
display();

insertpos();
printf("\n=============================================================\n");

newdisplay();



}


