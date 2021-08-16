#include<stdio.h>
int lcm(int, int);
int main()
{
	int a, b, output;
	int prime[100];
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input Second number: ");
	scanf("%d", &b);
	output = lcm(a,b);
	printf("The LCM of %d and %d is %d\n", a,b,output);
	return 0;
}

int lcm(int a, int b)
{
	static int common =1;
	if(common %a ==0 && common %b ==0)
	{
		return common;
	}
	common++;
	lcm(a, b);
	return common;
}
