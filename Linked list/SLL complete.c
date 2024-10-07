#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{

    int data ;
    struct node *next ;
}*start = NULL;

void insertatbeg()
{

    struct node *newnode ;
    newnode = (struct node*) malloc(sizeof(struct node));

    printf("\n enter the data before \t");
    scanf("%d",&newnode->data);

    newnode->next = NULL ;

    if(start == NULL)
    {
        start = newnode ;
    }
    else
    {
        newnode->next=start;
        start = newnode ;
    }
}

void insertatend()
{

    struct node *newnode ,*temp ;
    newnode = (struct node*) malloc(sizeof(struct node));

    printf("\n enter data  after \t");
    scanf("%d",&newnode->data);

    newnode-> next =NULL ;
     if(start== NULL)
     {

        start = newnode ;
     }
      else
      {
          temp = start ;
          while(temp->next=NULL)
          {
              temp=temp->next;
          }
          temp->next=newnode ;
      }
}

void insertbefore()
{
    struct node *newnode , *temp , *prev ;
    int c ;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("\n ENTER  DATA YOU WANt TO ADD \t");
    scanf("%d" , &newnode->data);
    printf("  \n enter data before you wnat to add a new node \t");
    scanf("%d" ,&c);

    if(start->data==c)
    {
        newnode ->next =start;
        start = newnode ;
    }
    else
    {
      temp = start ;
      while(temp->data!=c)
      {
          prev =temp ;
          temp =temp->next;
      }
      prev->next = newnode;
      newnode->next =temp ;
    }
}
void insertafter()
{
    struct node *newnode , *temp ,*prev ;
    int c;

    newnode = (struct node*) malloc(sizeof(struct node));
    printf("\n what is data you want to add in this linked list \t");
    scanf("%d", &newnode->data);
    printf("\n Enter data after which you want to add a new node \t");
    scanf("%d",&c);

    if(start->data==c)
    {
        newnode->next =start->next ;
        start->next=newnode ;
    }
    else
    {
        temp =start;
        while(temp->data!=c)
        {
            temp=temp->next;
        }
        newnode->next==temp->next; // assigning adress of temp means data after you want to add to new node to connect list
        temp->next =newnode ;
    }
}

void delete()
{
    struct node *tmp  ,*prev;
    int c ;

    printf("\n Enter the data you wanna delete \t");
    scanf("%d",&c);

    if(start->data ==c)
    {

        tmp =start;
        start=start->next ;
        tmp->next = NULL;
        printf(" DELETED = %d" , tmp->data);
        free(tmp);
    }
    else
    {
        tmp = start;
        while(tmp->data!=c)
        {
            prev =tmp ;
        tmp=tmp->next;
        }
        prev ->next =tmp->next ;
        tmp->next =NULL ;
        printf("DELETEd  = %d ", tmp->data);
        free(tmp);
    }

}
void show()
{

    struct node *tmp ;
    tmp =start ;
    while(tmp!=NULL)
    {
        printf("% d",tmp->data);
        tmp =tmp->next ;
    }
}

void main()
{
    int a;
    char c[1] ;
    do{
            printf("\n press  1 : insertatbeg ::  2 : insertatend :: 3 : show ::  4 : insertbefore ::  5 : insertafter :: 6 : delete\t");
         scanf("%d",&a);
         switch(a)
         {
            case 1 : insertatbeg() ;
                      break ;


            case 2 :  insertatend();
                       break ;


             case 3 : show() ;
                       break ;


              case 4 : insertbefore();
                          break ;

                case 5: insertafter();
                         break ;


                   case 6 :delete();
                            break ;

             default :
                 printf(" invalid input \n");
         }

    printf("\n press y to continue & else to exit \t");
    scanf("%s",&c);

 }   while((strcmp(c ,"y") ==0)||(strcmp(c, "Y")==0));



}
