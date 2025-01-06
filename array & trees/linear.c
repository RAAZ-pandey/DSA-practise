#include<stdio.h>

int main()
{

    int n;
    printf("enter size of array you want \t");
     scanf("%d",&n);
      int arr[n];
    
    for (int i = 0; i < n; i++)
     {
        printf("enter element : \t");
        scanf("%d", &arr[i]);
    }
      printf("your array is \t ");
     for (int i = 0; i < n; i++)
     {
        printf("  %d \t", arr[i]);
    }
     int key;
     printf(" \n enter what you wnna search \t");
     scanf("%d",&key);

     for (int i = 0; i < n; i++)
     {
       
        if(arr[i]==key)
        {
            printf("found data %d ", arr[i]);
            break ;
        }
     
     }
    

    
}
