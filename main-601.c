#include <stdio.h>
#include <math.h>
int f(int n)
{
int andis = 2,t=0,counter=0,i=2,j;
while(t<n) 
{
i=2;
j=counter/2;
while(i<=j)
{
if (counter%i==0)
break;
i++;
}
if((j<i)&&(counter>1))
{
andis=counter;
t++;
}
counter++;
}
return andis;
}
int main()
{
int n,x,y;
scanf("%d", &n);
while (n!=0)
{
scanf("%d", &x);  
y=f(f(x));
printf("%d\n", y);
n--;
}
}

