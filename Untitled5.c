#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100],ch;
  	int i,index;
  	index = -1;

 scanf("%c",&str);
  	scanf("%c", &ch);
  	for(i=0;i<=strlen(str);i++)
  	{
  		if(str[i]==ch)
		{
  			index=i;
 		}
	}
    if(index==-1)
  	{
  		printf("%c",ch);
	}
	else
	{
		printf("%d",index+1);
	}
}
