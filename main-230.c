#include <stdio.h>
#include <string.h>

int main()
{
char str[5];
int red=0, yellow=0, green=0;
scanf("%s", str);
for(int i=0; str[i] != '\0'; i++)
{
if(str[i]=='R')
red++;
if(str[i]=='Y')
yellow++;
if(str[i]=='G')
green++;
}
if(red>=3)
{
printf("nakhor lite");
}
else if(red>=2 && yellow>=2)
{
printf("nakhor lite");
}
else if(green==0)
{
printf("nakhor lite");
}
else
{
printf("rahat baash");
}

}