//1 2 3 4 5 
//A B C D E
//6 7 8 9 10
//F G H I J
//11 12 13 14 15

#include<stdio.h>
void main()
{
	int i,j,k=1;
	char ch='a';
	
	for(i=1;i<=5;i++)
	{
		for(j='a';j<='e';j++)
		{
			if(i%2==0)
			{
				printf("%c ",ch);
			    ch++;
			}
			else
			{
				printf("%d ",k);
			    k++;
			}
		}
		printf("\n");
	}
}
