#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data ;
          struct node *next ;
         }*start = NULL;

struct node* create(int new)
{
   struct node *newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data=new;
   newnode->next=NULL;
   return newnode;
}
int insertatbeg()
{
   struct node *newnode ;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data of first node \t");
    scanf("%d",&newnode->data);

    newnode->next=NULL;

    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
         newnode->next=start;
         start=newnode;
    }
    printf("%d \t",newnode->data);
} 



int main()
{
    struct node *head = create(2);
    head->next=create(3);
    head->next->next=create(5);
    head->next->next->next=create(7);
    
   insertatbeg();
  
    while(head!=NULL)
    {
        printf("%d \t",head->data);
        head =head->next;
    }
   
}