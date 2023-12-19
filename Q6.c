//A B C D E
//F G H I J 
//K L M N O
//P Q R S T 
//U V W X Y 


#include<stdio.h>
void main()
{
	int i,j;
	char ch='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
