#include<stdio.h>
int main(void)
{
	int n,a[100],i,j,b[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
		b[j]=a[i];
		j++;
	}
	for(j=0;j<n;j++)
	{
	   printf("%d\t",b[j]);	
	}
}
