#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


int main(void)
{
	//�K�X 
	int password,i,attempts=0;
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
   //���
    char choice,c,l;
	int j,k;while (1) 
	{
        system("CLS"); 
        printf("=====================\n");
        printf("| a. �e�����T����     |\n");
        printf("| b. ��ܭ��k��       |\n");
        printf("| c. ����             |\n");
        printf("=====================\n");
        printf("�п�J�ﶵ(a/b/c)�G");

        choice = getch();
        printf("%c\n", choice);
        if (choice == 'a' || choice == 'A') 
		{
            system("CLS");
            char end_char;
            printf("�п�J�@�ӱq 'a' �� 'n' ���r���G");
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
                printf("��J���~�A�Э��s��J�I\n");
                getch();
            }

        } 
		else if (choice=='b'||choice=='B') 
		{
            system("CLS");
            int n;
            printf("�п�J 1 �� 9 ����ơG");
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
                printf("��J���~�A�Э��s��J�I\n");
                getch();
            }

        } 
		else if (choice=='c'||choice=='C') 
		{
            char confirm;
            printf("Continue? (y/n)�G");
            confirm = getch();
            printf("%c\n", confirm);

            if (confirm=='y'||confirm=='Y') 
			{
                continue; // back to meun
            } else if (confirm=='n'||confirm=='N') 
			{
                printf("�����{���C\n");
                break; 
                //finish
            } else 
			{
                printf("��J���~�A�Э��s��J�I\n");
                getch();
            }
        } 
		else 
		{
            printf("�L�Ī��ﶵ�A�Э��s��J�I\n");
            getch();
        }
    }
	system("pause");
    return 0;
}
//�o���@�~���ڼ��x�F�򥻪�����P�_�B�j�鱱��H�ο��]�p�C
//�z�L�K�X���һP�\���ܪ��m�ߡA�[�j�F�� getch() �P system(��cls��) 
//�����ΡA���ɤF��@�M��������O�C 


	


