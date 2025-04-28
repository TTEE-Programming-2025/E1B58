#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


int main(void)
{
	//密碼 
	int password,i,attempts=0;
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
   //選單
    char choice,c,l;
	int j,k;while (1) 
	{
        system("CLS"); 
        printf("=====================\n");
        printf("| a. 畫直角三角形     |\n");
        printf("| b. 顯示乘法表       |\n");
        printf("| c. 結束             |\n");
        printf("=====================\n");
        printf("請輸入選項(a/b/c)：");

        choice = getch();
        printf("%c\n", choice);
        if (choice == 'a' || choice == 'A') 
		{
            system("CLS");
            char end_char;
            printf("請輸入一個從 'a' 到 'n' 的字母：");
            scanf(" %c", &end_char);

            if (end_char>='a'&&end_char<='n') 
			{
                for (c='a'; c<=end_char;c++) 
				{
                    for (l='a';l<=c;l++) 
					{
                        printf("%c ",l);
                    }
                    printf("\n");
                }system("pause");
            } else 
			{
                printf("輸入錯誤，請重新輸入！\n");
                getch();
            }

        } 
		else if (choice=='b'||choice=='B') 
		{
            system("CLS");
            int n;
            printf("請輸入 1 到 9 的整數：");
            scanf("%d", &n);

            if (n>=1&&n<= 9) 
			{
                for (j=1;j<=n;j++) 
				{
                    for (k=1;k<=n;k++) 
					{
                        printf("%d*%d=%2d ", j,k,j*k);
                    }
                    printf("\n");
                }system("pause");
            } 
			else 
			{
                printf("輸入錯誤，請重新輸入！\n");
                getch();
            }

        } 
		else if (choice=='c'||choice=='C') 
		{
            char confirm;
            printf("Continue? (y/n)：");
            confirm = getch();
            printf("%c\n", confirm);

            if (confirm=='y'||confirm=='Y') 
			{
                continue; // back to meun
            } else if (confirm=='n'||confirm=='N') 
			{
                printf("結束程式。\n");
                break; 
                //finish
            } else 
			{
                printf("輸入錯誤，請重新輸入！\n");
                getch();
            }
        } 
		else 
		{
            printf("無效的選項，請重新輸入！\n");
            getch();
        }
    }
	system("pause");
    return 0;
}
//這份作業讓我熟悉了基本的條件判斷、迴圈控制以及選單設計。
//透過密碼驗證與功能選擇的練習，加強了對 getch() 與 system(”cls“) 
//的應用，提升了實作和除錯的能力。 


	


