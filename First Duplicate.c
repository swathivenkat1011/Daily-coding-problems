#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,min=999999,dup=0,data;
    int *a;
    printf("Enter the array");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                dup=1;
                if((j-i)<min)
                {
                    min=j-i;
                    data=a[i];
                }
            }
        }
    }
    dup==0?printf("-1"):printf("%d",data);
    return 0;
}
