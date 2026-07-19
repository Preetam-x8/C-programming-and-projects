#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int stack[10],top=-1;
    int a[]={5,9,34,17,32},i;

    for(i=0;i<5;i++)
	stack[++top]=a[i];

    printf("Popped:\n");
    for(i=0;i<3;i++)
	printf("%d ",stack[top--]);
   return 0 ;
}
