/*LAb No. :24
    */
    
#include<stdio.h>
int main()
{
	int a=1,b=1,c,n,i=1;
	
	printf("Enter the first n term to display : ");
	scanf("%d",&n);
	
	printf("%d\t%d\t",a,b);
	do
	{
		
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
		i++;
		
	}
	while(i<=n);
	
	return 0;
}		
