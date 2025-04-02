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
		printf("welcome\n");
		system("pause");
		system("CLS");
		printf("|==============================|\n");
		printf("|  'A'...'Z' : Uppercase       |\n");
        printf("|  'a'...'z' : Lowercase       |\n");
        printf("|  '0'...'9' : Digit           |\n");
        printf("|  Others    : E1B58熊紹亨     |\n");
	    printf("|==============================|\n");
		fflush(stdin); // 清除輸入緩衝區，避免輸入錯誤
        printf("請輸入一個字元：");
        scanf(" %c", &ch); 
        //判斷字元種類
		 if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
        } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
        } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
        } else {
        printf("E1B58熊紹亨\n");
        }
        system("pause");
		system("CLS"); 
		
		 
	}
	else
	{
		printf("%c",'\a');
		printf("結束程式");
	}
	system("pause");
	return 0;
		
}
