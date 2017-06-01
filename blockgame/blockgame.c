#include<stdio.h>

int check(int num)
{
	int n = num,d = 0,t;
	while(n>0)
	{
		t = n % 10;
		n /= 10;
		d += t;
		d *= 10;
	}
	d /= 10;
	if(d==num)
		return 1;
	else
		return 0;
}

char *blockgame(int n)
{
	
		int temp;
		temp = check(n);
		if(temp==1)
			return("wins\n");
		else
			return("losses\n");
}
