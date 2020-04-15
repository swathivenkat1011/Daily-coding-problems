#include<stdio.h>
#define size 100
int main()
{
    int i,j,n,c=0;
    int arr[size];
    printf("enter the size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array before change\n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=0;i<n-c;)
    {
        if(arr[i]==0)
        {
            for(j=i;j<n-c-1;j++)
            {
                arr[j]=arr[j+1];
            }
            arr[j]=0;
            c=c+1;
            i=i+0;
        }
        else
        {
            i++;
        }
    }
    printf("\nThe array after change is\n");
    for(i=0;i<n;i++)
    {

        printf("%d",arr[i]);
    }

    return 0;
}
