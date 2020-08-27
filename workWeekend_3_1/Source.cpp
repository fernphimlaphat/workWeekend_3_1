#include<stdio.h>


int main(){
	long int  n,sum = 0,i;
	printf("Enter Number : ");
	scanf("%ld",&n);
	for ( i = 0; i < n; i++)
	{ 
		if ((i == 1 || i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0) && (i != 2 && i != 3 && i != 5 && i != 7 ))
		{
			continue;
		}
		printf("%d ", i);
		sum += i;

	}
	printf("= %d", sum);

}