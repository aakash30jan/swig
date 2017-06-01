#include<stdio.h>
int balls_and_cups(int n, int c , int q, int l, int r)
{
	
		int i,j;
		for(i=0;i<q;i++)
		{
			if(c>=l)
			{
				if(c<=r) //means in between
				{
					c=(l+r)-c;
				}
			}
		}

	return(c);
}
