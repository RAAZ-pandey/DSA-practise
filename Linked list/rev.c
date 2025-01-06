#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    int data ;
          struct node *next ;
     };

typedef struct node abc;
abc *create(int new)
{
   abc *newnode = (abc*)malloc(sizeof(abc));
   newnode->data=new;
   newnode->next=NULL;
   return newnode;
}
/*
abc* reverse(abc* head)
{
  if(head == NULL ||head->next ==NULL)
   return head;

    abc* temp = reverse(head->next);

    head->next->next =head;
    head->next = NULL;

    return temp;
  
}
*/
  
  abc*  reverse(abc* head)
{
     abc *new;
     if(head == NULL || head->next == NULL)
     return head;

     new = reverse(head->next);
     head->next->next = head;
     head->next = NULL;

     return new;
}  
  


void display(abc *head)
{
  abc *p;
  p = head;

  while(p!=NULL)
  {
    printf(" \n %d",p->data);
    p=p->next;
  }
  printf("\n");
}



int main()
{
    abc *head = create(2);
    head->next=create(3);
    head->next->next=create(5);
    head->next->next->next=create(7);
    
   
   display(head);
 
   head = reverse(head);
   display(head);
   

  
   
   
}