#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50},x,i;
	printf("enter the elements");
	scanf("%d",&x);
	for (i=0;i<5;i++)
	{
	  if(a[i]==x)
	  {
	  	printf("the value is present"),i;
	
      }	
		else;
		{
			printf("it is not present"),i;
		  }  
	}
	return 0;
}


