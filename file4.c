#include<stdio.h>
#include<string.h>
int main()
{
    int n,rem,j=0,i;
    char str[5];
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
    {
       rem=n%26;
       if(rem==0)
       {
           str[j]=26+64;
           n=(n/26)-1;
       }
       else
       {
           str[j]=rem+64;
           n=n/26;
       }
       j++;
    }
     for(i=j-1;i>=0;i--)
     {
         printf("%c",str[i]);
     }

    return 0;
}
