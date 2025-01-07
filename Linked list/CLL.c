#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next ;
}*start = NULL ;

void insertatbeg()
{
    struct node *newnode, *tmp ;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR FIRST NODE\t");
    scanf("%d",&newnode->data);

    if(start == NULL)
    {
        start = newnode ;
        newnode -> next = start ;
    }
    else
    {
      tmp = start ;
      while(tmp->next != start)
      {
        tmp = tmp->next ;
      }
      //tmp->next = newnode; // this also can work by terminating forth line
      newnode->next = start ;
      start = newnode ;
      tmp -> next = start ; 
    }
}

void insertatend()
{
     struct node *newnode, *tmp ;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("ENTER DATA FOR LAST NODE\t");
    scanf("%d",&newnode->data);

    if(start == NULL)
    {
        start = newnode ;
        newnode -> next = start ;
    }
    else
    {
      tmp = start ;
      while(tmp->next != start)
      {
        tmp = tmp->next ;
      }
     tmp->next = newnode ;
     newnode->next = start ;
     }  
 }
 void display()
{
    struct node *tmp ;
    tmp = start ;
    while(tmp ->next != start)
    {
        printf("%d\t",tmp->data);
        tmp = tmp->next;
    }
    printf("%d",tmp->data);
}

void reverse()
{
    struct node *ptr , *prev , *newnode ;
    struct node* lastnode = start ;
    ptr = start;

    do
    {
        newnode = ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=newnode;
    } while (ptr != start);
    

   lastnode->next = prev;
   start = prev ;
    
    
}


void main()
{
    int c ;
    char s[1];  
    do{
    printf("\tclick 1 = insertatbeg, click 2 = insertatend, click 3 = display , click 4 = reverse \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1 : insertatbeg();
                 break ;
        case 2 : insertatend();
                 break ;
        case 3 : display();
                 break ;
        case 4 : reverse();
                 break;

        default : printf("Wrong input\n");
    }
    printf("\nENTER Y FOR CONTINUE N FOR EXIT\n");
    scanf("%s",&s);
    }while((strcmp(s,"y")==0) || (strcmp(s,"Y")==0)); 
    
}