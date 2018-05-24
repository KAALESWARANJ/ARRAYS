#include<stdio.h>
int main(void)
{
	int n,a[100],p,i;
	scanf("%d\n",&n);
	scanf("%d\n",&p);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=p-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
