#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i,j,a[100][100];
	while(1)
	
	{
	
	system("cls");
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			a[i][j]=' ';
		}
	}
	if(i%2==0)
	{
	a[2][6]='*';
	a[2][5]='*';
	a[2][4]='*';
	a[2][3]='*';
	a[2][2]='*';
	a[3][2]='*';
	a[4][2]='*';
	a[4][3]='*';
	a[4][4]='*';
	a[4][5]='*';
	a[4][6]='*';
	a[5][6]='*';
	a[6][6]='*';
	a[6][5]='*';
	a[6][4]='*';
	a[6][3]='*';
	a[6][2]='*';
}
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
	{
		printf("%c",a[i][j]);
	}
	printf("\n");
}
i=i+1;
Sleep(500);

}
return 0;
}
