#include <stdio.h>

int main(void)
{
	int n,a[100],i,j,temp,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	printf("\n");
	k=n;
	while(k>=0)
	{
		for(j=0;j<k-1;j++)
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			
		}
		k--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
