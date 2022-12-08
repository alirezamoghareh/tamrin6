#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
char str[1000]; 
char str2[1000];
char str3[1];
char str4[1];
int i,j=0;
scanf("%s%s",str,str2);
for(i=0; i<strlen(str);i++)
{
if(i==0 && str[i]!=' ')
{
str[i];
}
}

if(str[0]==str2[strlen(str2)-1])
{
printf("YES");
}
else
{
printf("NO");
}
}

    