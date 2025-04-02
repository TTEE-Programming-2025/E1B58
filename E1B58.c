#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int password;
	char ch;
	//個人風格畫面 
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
	
	//密碼驗證
	printf("請輸入密碼:");
	scanf("%d",&password);
	if(password==2024)
	{
	
	
	}
	else
	{
		printf("%c",'\a');
		printf("結束程式");
	}
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
		
}
