#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int password,attempts=0,i,j,k;
	int seats[9][9];
	int wrong=0;
	//Personal style
	printf("$$$$$$$$$\n");
	printf(" $$$$$$$\n");
	printf("  E1B58\n");
	printf("   $$$\n");
	printf("    $\n");
	//Enter the password a maximum of three times
	while(attempts<3)
	{
		printf("Password is 2025\n");
		printf("Enter your password:");
		scanf("%d",&password);
		if(password==2025)
		{
			printf("The password is correct:");
			system("CLS");
			break;
		}
		else
		{
			attempts++;
			if(attempts<3)
			{
				printf("The password is incorrect.");
			}
			else
			{
				printf("Too many incorrect attempts and program will exit.");
			}
		}
	}
	for (i = 0; i < 9; i++)
    for (j = 0; j < 9; j++)
    seats[i][j] = 0;
    char choice;
    //The main meun pops up.
    while (1) {
        printf("\n---------[Booking System]---------\n");
        printf("a. Available seats\n");
        printf("b. Arrange for you\n");
        printf("c. Choose by yourself\n");
        printf("d. Exit\n");
        printf("----------------------------------\n");
        printf("Please select.：");
        scanf(" %c", &choice);
        //choose a   
	    if (choice == 'a') {
            printf(" 123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d", i + 1);
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 0) printf("-");
                    else if (seats[i][j] == 1) printf("*");
                    else if (seats[i][j] == 2) printf("@");
                }
                printf("\n");
            }
        }
 //choose b
 else if (choice == 'b') {
            int need;
            printf("How many seat do you need？(1~4)：");
            scanf("%d", &need);
            if (need < 1 || need > 4) {
                printf("Incorrect quantity.\n");
                continue;
            }
     int found = 0;
            for (i = 0; i < 9 && found == 0; i++) {
                for (j = 0; j <= 9 - need; j++) {
                    int ok = 1;
                    for (k = 0; k < need; k++) {
                        if (seats[i][j + k] != 0) {
                            ok = 0;
                            break;
                        }
                    }
                    if (ok) {
                        for (k = 0; k < need; k++)
                            seats[i][j + k] = 2;
                        found = 1;
                        break;
                    }
                }
            }

            if (!found) {
                printf("There're not seats available side by side.\n");
                continue;
            }

            printf(" 123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d", i + 1);
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 0) printf("-");
                    else if (seats[i][j] == 1) printf("*");
                    else if (seats[i][j] == 2) printf("@");
                }
                printf("\n");
            }

            char ok;
            printf("Do you like this seat？(y/n)：");
            scanf(" %c", &ok);
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 2) {
                        if (ok == 'y') seats[i][j] = 1;
                        else seats[i][j] = 0;
                    }
                }
            }
        }
//choose c
  else if (choice == 'c') {
            int col, row;
            printf("Please enter your seat.For example(3-5).：");
            scanf("%d-%d", &col, &row);
            if (col < 1 || col > 9 || row < 1 || row > 9) {
                printf("Out of range.\n");
                continue;
            }
            if (seats[row - 1][col - 1] != 0) {
                printf("This seat has been taken.\n");
                continue;
            }
            seats[row - 1][col - 1] = 1;

            printf(" 123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d", i + 1);
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 0) printf("-");
                    else if (seats[i][j] == 1) printf("*");
                    else if (seats[i][j] == 2) printf("@");
                }
                printf("\n");
            }
        }
//choose d (left or continue) 
else if (choice == 'd') {
            char again;
            printf("Continue? (y/n)：");
            scanf(" %c", &again);
            if (again == 'y') continue;
            else {
                printf("Thanks for using my program.See you next time！\n");
                break;
            }
        }

        else {
            printf("Fail.\n");
        }
    }

	system("pause");
	return 0;
}
//這次的訂位系統十分有趣雖然有些地方做不出來
//可能需要跟同學請教一下
//持續精進自己的實力 
