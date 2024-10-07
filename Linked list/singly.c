#include<stdio.h>
#include<math.h>
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
}

void insertatend()
{
    struct node *newnode , *tmp ;
    newnode = (struct node*)malloc(sizeof(struct node));  /* allocating memory before creating a node at run time*/
    printf( "Enter data at end  \t" );
    scanf("%d" , &newnode->data);
    
    newnode->next = NULL ;

    if(start == NULL)
       start=newnode;
    else
       tmp=start;

       while (tmp->next!= NULL)
       {
         tmp = tmp->next;
       }
       tmp->next=newnode;
       

}


void insertbefore()
{
  struct node *newnode ,*temp , *prev ;
  int c;
  newnode = (struct node*)malloc(sizeof(struct node));
  printf("\n ENter data you wanna add");
  scanf("%d",&newnode->data);//5
  printf("\n Enter data before you wanna add");//7,8,9
  scanf("%d",&c);//8

  if(start->data==c) //7==7
  {
    newnode->next=start; //5
    start=newnode;
  }
  else{
    temp =start;
    while(temp->data!=c) //8
    {
      prev=temp;  //temp   prev =8
      temp=temp->next;
    }
     prev->next=newnode;
   newnode->next  =temp ;
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

void delete()
{
  struct node *temp , *ptr;
  int s;

   printf("\n Enter data before you wanna delete \t");
  scanf("%d",&s);

  if(start->data==s)
  {
   temp = start;
   start =start->next;
   temp->next=NULL;

   printf("Deleted = %d", temp->data);
   free(temp);
   
  }
  else
  {
    temp=start;
    while(temp->data!=s)
    {
      ptr = temp;
      temp= temp->next;
    }
     
     ptr->next =temp->next;
     temp->next=NULL;
      printf("Deleted = %d", temp->data);
     free(temp);

  }

}
void main()
{

    
   int choice ;
    
    while (1) {
        printf("\n 1 : insert at begin \t 2: insert at end \t 3: insert before  \t 4: Display \t 5: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                insertatbeg();
                break;
            case 2:
                insertatend();
                break;
            case 3:
                insertbefore();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
