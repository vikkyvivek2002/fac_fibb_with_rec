#include<stdio.h>
int fact(int n)
{
	if(n ==0)
	return 1;
	else
	return n*fact(n-1);
}
int fibb(int n)
{
	if(n == 0)
	return 0;
	else if(n == 1)
	return 1;
	else
	return(fibb(n-1)+fibb(n-2));
}
int main()
{
	int n,i;
	printf("Enter a number :");
	scanf("%d",&n);
	printf("Factorial of %d : %d\n",n,fact(n));
	printf("fibonacci of %d : %d\n",n,fibb(n));
	for(i=0;i<n;i++)
	{
		printf("%d\n",fibb(i));
	}
	return 0;
}