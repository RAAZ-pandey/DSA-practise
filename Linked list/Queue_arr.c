#include<stdio.h>
#include<stdlib.h>
#define max 50

int arr[max];
int rear = -1;
int front = -1;


void enqueue()
{
    int element;
    if(rear ==max-1)
      printf("queue bhar gaya hai sir \n");
    else
    {
        front=0;
        printf("insert element of your choice : ");
        scanf("%d", &element);
        rear++ ;
        arr[rear]=element;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("khali hai brother \n");
    }
    else
    {
        printf("Element deleted from dequeue is : %d \n",arr[front]);
        front++ ;
        
    }
}

void display()
{
    int i;
    if(front == -1)
    printf("khali hai queue \n");
    else
    {
        printf("Queue is : \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d",arr[i]);
            printf("\t");
        }
    }
}

void main()
{
       int choice;
    while(1)
    {
         
      printf("\n 1: enqueue  2: dequeue  3: display");
      printf("\n Enter  your choice \t ");
      scanf("%d",&choice);

      switch(choice)
      {
        case 1 : enqueue();
                   break;
        case 2 : dequeue();
                   break;
        case 3 : display();
                    break;
        case 4:  exit(0);
                  break;
        default:
                printf("Invalid choice. Please try again.\n");
        
              
      }
    }
   

}