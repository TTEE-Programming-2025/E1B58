#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10


//結構 
typedef struct {
    char name[20];
    char id[7];  
    int math;
    int physics;
    int english;
    float avg;
} Student;

Student students[MAX];
int n = 0;

//函數原形 
void enterGrades();
void displayGrades();
void searchStudent();
void gradeRanking();
void clearScreen();

int main() {

    int password, i, attempts = 0;
    //個人畫面
	 for (i = 0; i <= 20; i++)
	 printf("$$$E1B58$$$\n");
	  while (attempts < 3) {
       
        printf("請輸入密碼(hint:2025): ");
        scanf("%d", &password);
        if (password == 2025) {
            printf("密碼正確\n");
            system("cls");  
            break;
        } else {
            attempts++;
            if (attempts < 3) {
                printf("密碼錯誤\n");
            } else {
                printf("密碼錯誤達三次，程式即將結束\n");
                return 0;
            }
        }
    }
}
