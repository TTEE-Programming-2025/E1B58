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
	if(ch=='A'||ch=='a')//3.直角三角形 
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
		int rows=chwork-'a'+1;//宣告rows變數=chwork的 ascii code -'a'+1(決定要印幾行(橫的))  
		for (i=1;i<=rows;i++) //
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
	return 0;
}


	


