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

//========================================insert position================================================
void insertpos(){
  int i=1 ;
  int pos;

  printf("Enter your position : ");
  scanf("%d",&pos);

  if(pos==1){
    newnode = (struct node*)malloc(sizeof(struct node));
        //get users input
 printf("Enter position node : ");
 scanf("%d",&newnode->data);

  newnode->next = 0 ;
  newnode->prev = 0 ;

  newnode->next = head;
  head->prev = newnode;
  head = newnode;


  }

  else{

struct node *temp;

temp = head;

   newnode = (struct node*)malloc(sizeof(struct node));
        //get users input
 printf("Enter else position node : ");
 scanf("%d",&newnode->data);

 while(i<pos-1){
    temp = temp->next;
    i++;
  }

    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->next->prev = newnode;


  }
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

printf("\nList created\n");

insertpos();

printf("\nposition data entered");

newdisplay();

}
