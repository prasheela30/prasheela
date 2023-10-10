#include<stdio.h>
#include<math.h>
int main()
{
	//conversion of temp from farenheit to celsius
	float c,f;
	printf("enter value f");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("c=%f",c,f);
	return 0;
}
