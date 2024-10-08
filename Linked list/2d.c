#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data ;
          struct node *prev, *next ;
         }*start = NULL;

void insert()
{
   
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("enter data \t");
        scanf("\t %d",&newnode->data);

        newnode->prev=newnode->next =NULL;

        if(start==NULL)
        {
            start=newnode;
        }
        else
        newnode->next=start;
        start->prev=newnode;
        start=newnode;
    
}

void insertarend()
{
     
  
        struct node *newnode  , *temp;
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("enter data \t");
        scanf("\t %d",&newnode->data);

        newnode->prev=newnode->next =NULL;

        if(start==NULL)
        {
            start=newnode;
        }
        else 
        {
            temp = start;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
        }
        
}
void delete()
{
    struct node *ptr , *temp ;
    int c;
    printf("\n Enter data you want to delete \t");
    scanf("%d",&c);

    
  if(start->data==c)
  {
   temp = start;
   start =start->next;
   temp->next=NULL;

   printf("Deleted = %d", temp->data);
   free(temp);
   
  }
  else
  {
     ptr =start;
     temp=start->next;
     while(temp->data!=c)
     {
        ptr =temp;
        temp =temp->next;
     }

     ptr->next =temp->next;
     temp->next=NULL;
     free(temp);
  }
}
void display()
{
    struct node *temp;
    temp = start;
    while (temp!=NULL)
    {
        printf("%d \t",temp->data);
        temp = temp->next;
    }
    
}
void main()
{
    
    int a;
    char c[1];  // this will  behave like a string not an array

    do{
            printf(" press 1 for insert at begining , press 2 to insert at end & press 3 for display  , press 4 to delete\n");
            scanf("%d" , &a);

            switch(a)
               {
                 case 1 :
                       insert();
                         break ;
                 case 2 :
                    insertarend();
                    break;
                 case 3:
                    display() ;
                    break ;
                 case 4:
                    delete();
                    break;
                    
                 default :
                    printf("invalid input \n");
            }

            printf(" enter y to continue & anything  to exit \n");
            scanf("%s",c);
    }while((strcmp(c ,"y")==0)||strcmp(c ,"Y")==0);
}


