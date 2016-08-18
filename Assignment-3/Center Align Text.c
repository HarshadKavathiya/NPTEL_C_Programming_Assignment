//Center Align Text
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0;
    char ch='_',str[64];
    gets(str);
    n=strlen(str);
    if(n%2==0){
    for(i=1;i<=64;i++)
    {
        if(i<=(32-(n/2))||i>(32+(n/2)))
        { printf("%c",ch);}
        else
               printf("%c",str[j++]);
       
        }
    }
    else
    {
        for(i=1;i<=64;i++)
        {
       
          if(i<=(32-(n/2))||i>(32+(n/2)+1))
        { printf("%c",ch);
        }
        else
        {
            printf("%c",str[j++]);
        }
      
    }}
    return 0;
}