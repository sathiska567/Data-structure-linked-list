#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *prev;
  struct node *next;

}*head,*newnode;

void create(){

    struct node *temp;
    head = 0 ;
    int choice = 1 ;
 while(choice){

  newnode = (struct node*)malloc(sizeof(struct node));

  //get users input
 printf("Enter first node : ");
 scanf("%d",&newnode->data);

  newnode->next = 0 ;
  newnode->prev = 0 ;

  if(head==0){
    head=temp=newnode;
  }

  else{
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode;
  }

  printf("Do you want enter another node : ");
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


void main(){

create();
display();

}
