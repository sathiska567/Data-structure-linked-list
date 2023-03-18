#include<stdio.h>
#include<stdlib.h>

struct node{

 int data;
 struct node *next;

}*head,*newnode,*tail;

void create(){
    struct node *temp;
    head = 0 ;
    int choice = 1 ;
 while(choice){

  newnode =  (struct node*)malloc(sizeof(struct node));

  printf("Enter node values : ");
  scanf("%d",&newnode->data);

  newnode->next = 0;

  if(head==0){
    head=temp=newnode;
  }

  else{
    temp->next = newnode;
    temp = newnode;
  }

  printf("Do you want enter another node value : ");
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


//=================================================== insert node value end ==============================================================
void insertend(){
  struct node *temp;

  newnode =  (struct node*)malloc(sizeof(struct node));

  printf("Enter node values : ");
  scanf("%d",&newnode->data);

  newnode->next = 0;

  temp = head;

  while(temp->next != 0){
    temp = temp->next;
  }

  temp->next = newnode;
  temp=newnode;

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

insertend();
newdisplay();

}


