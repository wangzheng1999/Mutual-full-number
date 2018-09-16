#include<stdio.h>
int f(int i)
{
  int sum=1,j;
  for(j=2;j<i;j++)
  {
  	if(i%j==0)
  	sum+=j;
  }
  return sum;
}
int main()
{
	int i,j;
	for(i=1;i<10000;i++)
	for(j=1;j<10000;j++)
	{
		if(i==f(j)&&j==f(i)&&i<j)
		printf("%d,%d ",i,j);
	}
}

