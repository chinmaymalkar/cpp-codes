#include<stdio.h>
int fact(int);
int main(){
int n,f;
printf("enter the value of n\n");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
return 0;
}
int fact(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}