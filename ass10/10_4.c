#include<stdio.h>
void print(int );
int main(){
int n;
printf("enter the value of n\n");
scanf("%d",&n);
print(n);
return 0;
}
void print(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}