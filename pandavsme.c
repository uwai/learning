/* PANDA VS ME V1    *
 * 04/22/10          *
 * WRITTEN BY JULIAND*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sp1,sp2,spdiff,sp_d1,sp_d2,sp_ddiff,numbertemp;
	char temp[9];
	int trigger='0';


	printf("Welcome to Panda vs Me V1n\n");
	puts("Enter the first SP value");
	gets(temp);
	numbertemp=atof(temp);
	sp1=numbertemp;

	puts("\nPlease enter the corresponding current SP/hour (as shown by EVEmon)");
	gets(temp);
	numbertemp=atof(temp);
	sp_d1=numbertemp*24;

	puts("\nEnter the second SP value");
	gets(temp);
	numbertemp=atof(temp);
	sp2=numbertemp;
	
	puts("\nPlease enter the corresponding current SP/hour (as shown by EVEmon)");
	gets(temp);
	numbertemp=atof(temp);
	sp_d2=numbertemp*24;

	if(sp1>sp2)
	{
		spdiff=sp1-sp2;
//		trigger=trigger+1;
	}
	else if(sp2>sp1)
	{
		spdiff=sp2-sp1;
//		trigger=trigger+2;
	}
	if(sp_d1>sp_d2)
	{
		sp_ddiff=sp_d1-sp_d2;
//		trigger=trigger+1;
	}
	else if(sp_d2>sp_d1)
	{
		sp_ddiff=sp_d2-sp_d1;
//		trigger=trigger+2;
	}
/*
 *THIS WHOLE SECTION CAUSES PROBLEMS - REWORK IT, LOOP+Trigger Logic is wrong
 * if(trigger=2)
	{
		printf("\nAt this point of the game Player Two (%.f SP) is never going to catch up with\nPlayer One (%.f SP).\
Get more learning skills!\n",sp2,sp1);
	}
	else if(trigger=4)
	{
		printf("\nAt this point of the game Player One (%.f SP) is never going to catch up with\nPlayer Two (%.f SP).\
Get more learning skills!\n",sp1,sp2);
	} */
	if(sp1>sp2)
	{
		printf("\nPlayer Two (%.f SP) is going to catch up with\nPlayer One (%.f SP) in %.2f days.\n",sp2,sp1,spdiff/sp_ddiff);
	}
	else
	{
		printf("\nPlayer One (%.f SP) is going to catch up with\nPlayer Two (%.f SP) in %.2f days.\n",sp1,sp2,spdiff/sp_ddiff);
	}
	return(0);
}
