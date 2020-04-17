#include<stdio.h>
#define size 10
int main()
{
    int i,j,n,x,y;
    int arr[size][2];
    printf("enter the no of tuples\n");
    scanf("%d",&n);
    printf("enter the start and end values");
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i][0]>arr[j][0])
            {
                x=arr[i][0];
                arr[i][0]=arr[j][0];
                arr[j][0]=x;
                y=arr[i][1];
                arr[i][1]=arr[j][1];
                arr[j][1]=y;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1][0]<arr[i][1])
        {
            arr[i+1][0]=0;
            arr[i+1][1]=0;
            i=i+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i][0]!=0)
        {
            printf("(%d,%d)",arr[i][0],arr[i][1]);
        }
    }
    return 0;
}
