#include<stdio.h>
int main()
{
	int i,j;
	for(j=1;j<10000;j++)
	{
		i=f(j);
		if(j==f(i)&&i<j)
		printf("%d,%d ",i,j);
	}
}
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
