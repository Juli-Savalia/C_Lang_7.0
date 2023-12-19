// 1    A    2   B   3
// 4    C    5   D   6
// 7    E    8    F   9
//10   G   11  H   12
//13   I    14  J   15

#include<stdio.h>
void main()
{
	int i,j,k=1;
	char ch='A';
	
	for(i=1;i<=5;i++)
	{
		for(j='A';j<='E';j++)
		{
			if(j%2==0)
			{
				printf("%c  ",ch);
			    ch++;
			}
			else
			{
				printf("%d  ",k);
			    k++;
			}
		}
		printf("\n");
	}
}
