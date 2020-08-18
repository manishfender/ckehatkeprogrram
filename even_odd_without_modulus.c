#include<stdio.h>
main()
{ 
	int x;
	printf("Enter a Number");
	scanf("%d",&x);
	if((x&1)==1) 
	   
		printf("ODD NUMBER");
	else
		printf("EVEN NUMBER");
}
