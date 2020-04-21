#include<stdio.h>
#include<math.h>
#define size 20
int main()
{
    int i,j,row,col,x,y;
    int arr[size][size];
    printf("enter the row and col\t");
    scanf("%d %d",&row,&col);
    y=row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(x=0;x<y/2;x++)
    {
        for(i=0+x,j=i;j<col-1;j++)
        {
            printf("%d\n",arr[i][j]);
        }
        for(j=col-1,i=0+x;i<row-1;i++)
        {
            printf("%d\n",arr[i][j]);
        }
        for(i=row-1,j=col-1;j>0+x;j--)
        {
            printf("%d\n",arr[i][j]);
        }
        for(j=0+x,i=row-1;i>0+x;i--)
        {
            printf("%d\n",arr[i][j]);
        }
        row=row-1;
        col=col-1;
    }

}
