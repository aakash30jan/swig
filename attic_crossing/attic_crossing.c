#include<stdio.h>
#include<string.h>
int attic(char *a)
{
	
		
		int x=strlen(a),i,j,n=1,c=0,d=0;
		for(i=0;i<x;i++)
		{
			printf("%d ",i);
			if(a[i]=='.')
			{
				c=0;
				j=i;
				while(a[j]=='.')
				{
					a[j]='#';
					c++;
					j++;
				}
				c++;
				if(c>n)
				{
					d++;
					n=c;
				}
			}
		}
		// printf("d = %d\n", d);
	
	return(d);
}

