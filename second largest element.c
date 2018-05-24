#include<stdio.h>
int main(void)
{
	int n,a[100],temp,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		printf("%d\t",a[i]);
		break;
	}
	return 0;
}
