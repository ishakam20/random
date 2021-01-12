#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p;
p = (int*)malloc(sizeof(int));
int res = ((int)p%100000);
printf("%d\n",res);
return 0;
}
