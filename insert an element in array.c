#include<stdio.h>
int main(void)
{
	int n,a[100],i,p,v;
	scanf("%d\n",&n);
	scanf("%d\n",&p);
	scanf("%d\n",&v);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=n;i>=p;i--)
	{
	  a[i]=a[i-1];	
	}
	a[p-1]=v;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
	
