#include<stdio.h>
int sum(int a[],int start,int length);
int main(void)
{
	int n,i,sumarray,a[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	printf("\n");
	sumarray=sum(a,0,n-1);
	printf("%d",sumarray);
}
int sum(int a[],int start,int length)
{
	if(start>length)
	return 0;
  return(a[start]+sum(a,start+1,length));
}
