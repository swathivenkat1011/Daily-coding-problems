#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,start,end,target,count=0;
    int *nums;
    printf("Enter the size of the array\t");
    scanf("%d",&n);
    nums=(int *)malloc(n*sizeof(int));
    printf("Enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&i[nums]);
    }
    printf("\nEnter the target element\t");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(nums[i]==target)
        {
          (count==0)?(start=i):(end=i);
          count++;
        }
    }
    if(count>0)
    {
        printf("[%d,%d]",start,end);
    }
    else
    {
        start=end=-1;
        printf("[%d,%d]",start,end);
    }
    return 0;
}
