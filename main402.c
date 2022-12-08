#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
int n,x=0;
char arr[10000];
scanf("%d", &n);
getchar();
while (n!=0)
{
scanf("%[^\n]%*c", arr);
x=0;
while (arr[x] != '\0')
{
arr[x]=tolower(arr[x]);
x++;
}
arr[0]=toupper(arr[0]);
x=0;
while (arr[x] != '\0')
{
if(arr[x]==' ')
{
arr[x + 1]=toupper(arr[x + 1]);
}
x++;
}
printf("%s\n", arr);
n--;
}
}
