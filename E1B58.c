#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int password;
	char ch;
	//�ӤH����e�� 
	printf("              $\n");
	printf("            $   $\n");
	printf("           $     $\n");
	printf("          $       $\n");
	printf("         $         $\n");
	printf("        $           $ \n");
	printf("       $             $\n");
	printf("      $               $\n");
	printf("     $                 $\n");
	printf(" wellcome to E1B58's homework\n");	
	printf("      $               $\n");	
	printf("       $             $\n");	
	printf("        $           $\n");	
	printf("         $         $\n");	
	printf("          $       $\n");	
	printf("           $     $\n");	
	printf("            $   $\n");	
	printf("              $\n");	
	system("pause"); 
    system("CLS");  
	
	//�K�X����
	printf("�п�J�K�X:");
	scanf("%d",&password);
	if(password==2024)
	{
		printf("welcome\n");
		system("pause");
		system("CLS");
		printf("|==============================|\n");
		printf("|  'A'...'Z' : Uppercase       |\n");
        printf("|  'a'...'z' : Lowercase       |\n");
        printf("|  '0'...'9' : Digit           |\n");
        printf("|  Others    : E1B58���Ц�     |\n");
	    printf("|==============================|\n");
		fflush(stdin); // �M����J�w�İϡA�קK��J���~
        printf("�п�J�@�Ӧr���G");
        scanf(" %c", &ch); 
        //�P�_�r������
		 if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
        } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
        } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
        } else {
        printf("E1B58���Ц�\n");
        }
        system("pause");
		system("CLS"); 
		
		 
	}
	else
	{
		printf("%c",'\a');
		printf("�����{��");
	}
	system("pause");
	return 0;
		
}
