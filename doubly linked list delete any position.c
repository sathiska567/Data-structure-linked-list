
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

//===================================================delete any position===========================================
void delfromAnypos()
{

    struct node *temp;
    int pos;
    int i = 1;

    printf("Enter position : ");
    scanf("%d",&pos);

    temp=head;

    while(i<pos){
        temp = temp->next;
        i++;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
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

   delfromAnypos();
      printf("\n==============================================================================\n");
    newdisplay();


}

