#include <stdio.h>
#include <math.h>
#include <string.h>

int prime(int number)
{
int x,y;
x=number%10;
if (x==2||x==3||x==5||x==7)
{
number=number-x;
y=number/10;
number=y;
if (number > 0)
{
if (prime(number))
{
return 1;
}
else return 0;
}
else return 1;
}
else return 0;
}
int main()
{
int str[40000],array[40000] ;
int x = 0,z=0;
int t,baghi;
for (int i=0, j=2; i < 3*pow(10,4); i++)
{
t=i/2;
j=2;
while (j <=t)
{
baghi=i%j;
if (baghi == 0)
break;
j++;
}
if (t<j && i > 0)
{
str[x] = i;
x++;
}
}

for (int i = 0, j = 0; i < 3500; i++)
{
z=str[i];
if (prime(z))
{
array[j] = str[i]; 
j++;
}
}
int number;
int i = 0;
scanf("%d", &number);
while (number > array[i] && i < 90)
{
printf("%d ", array[i]); 
i++;
}

}


