#include<stdio.h>
#include<stdlib.h>


void desire(int arr ,  int n)
{
    int first = 1;
    int last = n;

       while (last>=first)
       {
        if(first==last)
        {
          printf("%d \t",first);
          break;
        }
        else
        {
            printf("%d \t",first);
             first++ ;
            printf("%d \t", last);
            last--;
        }
       
       }
       
}

void main()
{
    int n ;

    printf("what is size of array you want \t");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter an element in array \t");
        scanf("%d", &arr[i]);
    }
     printf("your array is : \t");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
      
       }

       printf(" \n your desired array will be : \t");
       desire(arr , n);
        
            
             
       
}