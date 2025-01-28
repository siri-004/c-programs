#include<stdio.h>
int main()
{
	int i,j,p;
	for(i=1;i<=7;i++)
	{ 
	
		for(j=1;j<=7;j++)
		{
			if(i==1||i==4||i==7)
			{
				printf("* ");
			}
			else if(i<=4&&j==1)
			{
				printf("* ");
			}
			else if(i>=4&&j==7)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		for(p=1;p<=1;p++)
	printf(" ");
			for(j=1;j<=7;j++)
		{
			if(i==1||i==7)
			{
				printf("* ");
			}
			else if(j==1||j==7)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			
		}
		for(p=1;p<=2;p++)
	printf(" ");
			for(j=1;j<=7;j++)
		{
			if(j==1||j==7)
			{
				printf("* ");
			}
			else
			{
				printf("  "); 
			}
	    if(i==j)
	    {
	    	printf("* ");
		}
		else
		{
			printf("  ");
		}
		
		}
		for(p=1;p<=2;p++)
	printf(" ");
		for(j=1;j<=7;j++)
		{
			if(i==7)
			{printf("* ");}
		
			else if((j==1&&i<=7)||(j==7&&i<=7))
			{
				printf("* ");
			}
		/*	else if((i==6&&j==1)||(j==6&&i==6))
			{
				printf(" ");
			}*/
			
			else
			{
				printf("  ");
			}
			
			
		}
		for(j=1;j<=7;j++)
		{
			
			if(i==1||i==7/2)
			{
				printf("  ");
			}
			else if(j==1||(j==7&&i<=7/2))
			{
				printf("  ");
			}
            else if((i==4&&j==2)||(i==5&&j==3)||(i==6&&j==4)||(i==7&&j==5))		
			{
				printf("  ");
				}
				else
				{
					printf("  ");
					}	
		}
			for(p=1;p<=2;p++)
	printf("  ");
	for(j=1;j<=7;j++)
		{
			
			if(i==1||i==7/2)
			{
				printf("* ");
			}
			else if(j==1||(j==7&&i<=7/2))
			{
				printf("* ");
			}
            else if((i==4&&j==2)||(i==5&&j==3)||(i==6&&j==4)||(i==7&&j==5))		
			{
				printf("* ");
				}
				else
				{
					printf("  ");
					}	
		}
		for(p=1;p<=1;p++)
	    printf(" ");
		for(j=1;j<=7;j++)
		{
		    if(j==1||j==7){
		    printf("* ");}
		    else if((i==1&&j<=7)||(i==4&&j<=7))
		    {
		        printf("* ");
		    }
		    else
		    {
		        printf("  ");}
		    }
		   
		for(p=1;p<=2;p++)
	printf(" ");
		for(j=1;j<=7;j++)
		{
			if(i==1||j==4)
			{
				printf("* ");
			}
			else if((i>4&&j==2)||(j>1&&j<4&&i==7))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		
		printf("\n");
	}	
	return 0;
}