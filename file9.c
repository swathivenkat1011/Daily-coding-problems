//DAY 27
#include<stdio.h>
#include<string.h>
int res(char*,char*,int,char,char,int,int);
int main()
{
    int index1,index2,i,count=0,ans;
    char s1[100],s2[100],c1,c2;
    printf("Enter string 1\t");
    gets(s1);
    printf("Enter string 2\t");
    gets(s2);
    for(i=0;i<strlen(s1);i++)
    {
        if(s1[i]!=s2[i])
        {
            if(count==0)
            {
                c1=s1[i];
                index1=i;
            }
            if(count==1)
            {
                c2=s2[i];
                index2=i;
            }
            count++;
        }
    }
     ans=res(s1,s2,count,c1,c2,index1,index2);
    (ans==0)?printf("FALSE"):printf("TRUE");

}
int res(char *s1,char *s2,int count,char c1,char c2,int index1,int index2)
{
    int i,j,c=0,flag=0;
    printf("count=%d",count);
    if(count>2)
    {
        return 0;
    }
    else if((c1==s2[index2])&&(c2==s1[index1]))
    {
        return 1;
    }
    else
    {
       for(i=0;i<strlen(s1);i++)
        {
            for(j=0;j<strlen(s2);j++)
            {
                 if(s1[i]==s1[j])
                 {
                     count++;
                     if(count==2)
                     {
                         return 1;
                     }
                 }
            }
            count=0;
        }
        return 0;

     }
}
