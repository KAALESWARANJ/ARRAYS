#include <stdio.h>

int main(void) 
{
	int a[100],n,i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
