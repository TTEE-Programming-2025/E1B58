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
				printf("�K�X���~�F�T���A�{���Y�N����");
			}
		}
	}
return 0;
}
