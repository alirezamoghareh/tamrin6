#include <stdio.h>
#include <math.h>
int main()
{
int c = 0, count = 0,n;
char s[1000];
scanf("%s",s);
while (s[c] != '\0')
{
if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' || s[c] == 'E' || s[c] == 'i' || s[c] == 'I' || s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
count++;
c++;
}
n=pow(2,count);
printf("%d",n);

}
    