#include<stdio.h>
int main(void)
{
	int n,i,j,a[100],f[100],count=1;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
		f[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
		{
			count++;
			f[j]=0;
			
		}
		}
		if(f[i]!=0)
		{
			f[i]=count;
		}
	}
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
		{
		       printf("%d occurs at %d times",a[i],f[i]);
		       printf("\n");
		       
		}
	}
}
