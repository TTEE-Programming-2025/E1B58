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
	 return 0;} 
