#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10


//���c 
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

//��ƭ�� 
void enterGrades();
void displayGrades();
void searchStudent();
void gradeRanking();
void clearScreen();

int main() {

    int password, i, attempts = 0;
    //�ӤH�e��
	 for (i = 0; i <= 20; i++)
	 printf("$$$E1B58$$$\n");
	  while (attempts < 3) {
       
        printf("�п�J�K�X(hint:2025): ");
        scanf("%d", &password);
        if (password == 2025) {
            printf("�K�X���T\n");
            system("cls");  
            break;
        } else {
            attempts++;
            if (attempts < 3) {
                printf("�K�X���~\n");
            } else {
                printf("�K�X���~�F�T���A�{���Y�N����\n");
                return 0;
            }
        }
    }
}
