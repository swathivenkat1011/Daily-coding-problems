#include<stdio.h>
#define size 100
int main()
{
    int i,j,n,t,m1,m2;
    int arr[size];
    printf("enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("The array is\t");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
     m1=arr[n-1]*arr[n-2]+arr[n-3];
     m2=arr[n-1]*arr[0]*arr[1];
     if(m1>m2)
     {
         printf("\nThe largest product from 3 integers in array is %d",m1);
     }
     else
     {
         printf("\nThe largest product from 3 integers in array is %d",m2);
     }
      return 0;
}
