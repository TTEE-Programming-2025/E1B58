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
}
return 0;
}
