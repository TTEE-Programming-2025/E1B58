#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int password,attempts=0,i,j,k;
	int seats[9][9];
	int wrong=0;
	//�ӤH���� 
	printf("$$$$$$$$$\n");
	printf(" $$$$$$$\n");
	printf("  E1B58\n");
	printf("   $$$\n");
	printf("    $\n");
	//��J�K�X�̦h�i��T�� 
	while(attempts<3)
	{
		printf("�K�X��2025\n");
		printf("�п�J�K�X:");
		scanf("%d",&password);
		if(password==2025)
		{
			printf("�K�X���T:");
			system("CLS");
			break;
		}
		else
		{
			attempts++;
			if(attempts<3)
			{
				printf("�K�X���~");
			}
			else
			{
				printf("�K�X���~�T���A�{������");
			}
		}
	}
	for (i = 0; i < 9; i++)
    for (j = 0; j < 9; j++)
    seats[i][j] = 0;
    char choice;
    //�D���X�{ 
    while (1) {
        printf("\n---------[Booking System]---------\n");
        printf("a. Available seats\n");
        printf("b. Arrange for you\n");
        printf("c. Choose by yourself\n");
        printf("d. Exit\n");
        printf("----------------------------------\n");
        printf("�п�ܡG");
        scanf(" %c", &choice);
        //��� a ����       
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
            printf("�ݭn�X�Ӯy��H(1~4)�G");
            scanf("%d", &need);
            if (need < 1 || need > 4) {
                printf("�ƶq���X�k�C\n");
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
                printf("�䤣��s��y��C\n");
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
            printf("�O�_���N�o�Ǯy��H(y/n)�G");
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
            printf("�п�J�y��]�C-��A�Ҧp 3-5�^�G");
            scanf("%d-%d", &col, &row);
            if (col < 1 || col > 9 || row < 1 || row > 9) {
                printf("�W�X�d��C\n");
                continue;
            }
            if (seats[row - 1][col - 1] != 0) {
                printf("���y��w�Q�w�q�C\n");
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
            printf("Continue? (y/n)�G");
            scanf(" %c", &again);
            if (again == 'y') continue;
            else {
                printf("�P�¨ϥΡA�A���I\n");
                break;
            }
        }

        else {
            printf("�L�Ŀﶵ�C\n");
        }
    }

	system("pause");
	return 0;
}
