#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


int main(void)
{
	//�K�X 
	int password,i,attempts=0,j,k,math;
	char ch,chwork;
	for(i=0;i<=21;i++)
	{
		printf("|@|$|?|%|\n");
	}
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
    main:
	printf("--------------------------\n");
	printf("| a. �e�X�����T����      |\n");
	printf("| b. ��ܭ���k   	 |\n");
	printf("| c. ����		 |\n");
	printf("--------------------------\n");
	ch=getche();//�����æ^�� 
	printf("\n");
	if(ch=='A'||ch=='a')//3.�����T���� 
	{
		system("CLS");
		printf("�п�Ja~n���r��\n");
		fflush(stdin);
		chwork=getche();
		while(chwork<'a'||chwork>'n')
		{
			printf("\n�п�Ja~n���r��\n");
			chwork=getche();
		}
		system("CLS");
		int rows=chwork-'a'+1;//�ŧirows�ܼ�=chwork�� ascii code -'a'+1(�M�w�n�L�X��(�))  
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


	


