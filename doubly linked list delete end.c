
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;

}*head,*newnode;


void create()
{
    struct node *temp;
    int choice = 1 ;

    while(choice)
    {

        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter node data : ");
        scanf("%d",&newnode->data);

        newnode->next = 0 ;
        newnode->prev = 0 ;

        if(head==0)
        {
            head = temp=newnode;
        }

        else
        {
            newnode->prev = temp;
            temp->next = newnode;
            temp=newnode;
        }

        printf("Do you want enter data : ");
        scanf("%d",&choice);

    }

}


void display()
{
    struct node *temp;

    temp = head;

    while(temp!=0)
    {
        printf("\n%d",temp->data);
        temp= temp->next;
    }


}

//===================================================delete end position===========================================
void delfromendpos()
{

    struct node *temp;

    temp=head;

    while(temp->next!=0){
        temp = temp->next;

    }

    temp->next = 0;
    temp->prev = 0;
    free(temp);



}


void newdisplay()
{
    struct node *temp;

    temp = head;

    while(temp!=0)
    {

        printf("\n%d",temp->data);
        temp= temp->next;
    }


}



void main()
{

    create();
    display();

   delfromendpos();
      printf("\n==============================================================================\n");
    newdisplay();


}
