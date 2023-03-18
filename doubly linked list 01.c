#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *prev;
  struct node *next;

}*head,*tail;

void create(){

    struct node *newnode;
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
    head=tail=newnode;
  }

  else{
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
  }

  printf("Do you want enter another node : ");
  scanf("%d",&choice);

 }
}


void display(){
 // struct node *temp;

  tail = head;

  while(tail!=0){
    printf("\n%d",tail->data);
    tail = tail->next;
  }

}


//===============================================insert front==========================================

/* void insertfront(){
 struct node *temp;

 newnode = (struct node*)malloc(sizeof(struct node));

   printf("\nEnter insert data : ");
   scanf("%d",&newnode->data);

 newnode->next = 0 ;
 newnode->prev = 0 ;

   head->prev = newnode;
   newnode->next = head;
   head = newnode;


}

void insertdisplay(){
 struct node *temp;

 temp = head;

 while(temp!=0){
    printf("\n%d",temp->data);
    temp = temp->next;
 }


} */

//============================================insert end================================================

void insertend(){
    struct node *newnode;

 newnode = (struct node*)malloc(sizeof(struct node));

   printf("\nEnter end insert node data : ");
   scanf("%d",&newnode->data);

   newnode->next = 0 ;
   newnode->prev = 0 ;

   tail->next = newnode;
   newnode->prev = tail;
   tail = newnode;

}

void enddisplay(){

  tail = head;

  while(tail!=0){
    printf("%d",tail->data);
    tail = tail->next;
  }


}



void main(){

create();
display();

// insertfront();
// insertdisplay();

insertend();
enddisplay();

}
