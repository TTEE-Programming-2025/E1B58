#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


int main(void)
{
	//密碼 
	int password,i,attempts=0,j,k,math;
	char ch,chwork;
	for(i=0;i<=21;i++)
	{
		printf("|@|$|?|%|\n");
	}
	while(attempts<3)
	{
		printf("密碼為2025\n");
		printf("請輸入密碼:");
		scanf("%d",&password);
		if(password==2025)
		{
			printf("密碼正確:");
			system("CLS");
			break;
		}
		else
		{
			attempts++;
			if(attempts<3)
			{
				printf("密碼錯誤");
			}
			else
			{
				printf("密碼錯誤達三次，程式即將結束");
			}
		}
	}
    main:
	printf("--------------------------\n");
	printf("| a. 畫出直角三角形      |\n");
	printf("| b. 顯示乘表法   	 |\n");
	printf("| c. 結束		 |\n");
	printf("--------------------------\n");
	ch=getche();//偵測並回覆 
	printf("\n");
	//直角三角形 
	if(ch=='A'||ch=='a')
	{
		system("CLS");
		printf("請輸入a~n的字元\n");
		fflush(stdin);
		chwork=getche();
		while(chwork<'a'||chwork>'n')
		{
			printf("\n請輸入a~n的字元\n");
			chwork=getche();
		}
		system("CLS");
		int rows=chwork-'a'+1;
		for (i=1;i<=rows;i++) 
		{
			for(k=0;k<rows-i;k++)
			{
				printf(" ");
			}
        	for (j=0;j<i;j++) 
			{
            printf("%c", 'a' +j);
            }
        printf("\n");
    	}
	}
	//99乘法表 
	else if(ch=='B'||ch=='b')
	{
		system("CLS");
		printf("請輸入1~9的整數n\n");
		scanf("%d",&math);
		while(math<1||math>9)
		{
			printf("請輸入1~9的整數n\n");
			scanf("%d",&math);
		}
		for(i=1;i<=math;i++)
		{
			printf("\n");
			for(j=1;j<=math;j++)
			{
				printf("%dx%d=%-4d",i,j,i*j);
			}
		}
	}
	return 0;
}


	


