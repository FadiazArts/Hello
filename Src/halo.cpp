#include<stdio.h> 

int isEquals(int a, int b);

int main()
{
	printf("Halo dunia");
	if (isEquals(5, 10/2))
		printf("The two number is equals");
	else
		printf("The two number isn't equals");
	return 1;
}

int isEquals(int a, int b)
{
	return ((a == b) ? (1) : (0));
}
	
