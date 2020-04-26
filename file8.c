#include<stdio.h>
#include<string.h>
int remaining(char *,int);
int remaining(char *arr,int n)
{
    int redcount=0,greencount=0,bluecount=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]=='R')
        {
            redcount++;
        }
        if(arr[i]=='B')
        {
            bluecount++;
        }
        if(arr[i]=='G')
        {
            greencount++;
        }

    }
    printf("r %d g %d b %d",redcount,greencount,bluecount);
    if((redcount==n)||(greencount==n)||(bluecount==n))
    {
        return n;
    }
    if((bluecount%2 == redcount%2)&&(bluecount%2 == greencount))
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
int main()
{
   int res,n;
   char a[15];
   printf("Enter the elements\n");
   gets(a);
   n=strlen(a);
   res=remaining(a,n);
   printf("The no of remaining elements is %d",res);
   return 0;
}
