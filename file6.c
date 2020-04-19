#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,max=0,n,count=0;
    int *height;
    printf("Enter the no.of.buildings\t");
    scanf("%d",&n);
    height=(int *)malloc(n*sizeof(int));
    printf("Enter the height of the buildings\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&i[height]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(height[i]>max)
        {
            count++;
            max=height[i];
            printf("%d ",height[i]);

        }
    }
    printf("The no.of.buildings that has view to sun set is  %d",count);
    return 0;
}
