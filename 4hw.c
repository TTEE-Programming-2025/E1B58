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
    
         char choice;
    int running = 1;

    while (running) {
        clearScreen();
       //主選單 
	   printf("-----------[Grade System]------------\n");
        printf("a. Enter student grades\n");
        printf("b. Display student grades\n");
        printf("c. Search for student grades\n");
        printf("d. Grade ranking\n");
        printf("e. Exit system\n");
        printf("-------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
           //程式進入點 
		    case 'a': enterGrades(); break;
            case 'b': displayGrades(); break;
            case 'c': searchStudent(); break;
            case 'd': gradeRanking(); break;
            case 'e': {
                printf("確定離開？(y/n): ");
                char confirm;
                scanf(" %c", &confirm);
                if (confirm == 'y') {
                    printf("系統結束。\n");
                    running = 0;
                }
                break;
            }
            default:
                printf("選項錯誤，請重新輸入。\n");
                getchar(); getchar(); 
                break;
        }
    }
      return 0;
}
void clearScreen() {
    system("cls"); // Windows 用 system("CLS")
}


void enterGrades() {
    clearScreen();
    printf("請輸入學生人數（5~10）：");
    scanf("%d", &n);
    if (n < 5 || n > 10) {
        printf("人數超出範圍，請重新輸入。\n");
        return;
    }
	int i;
    for ( i = 0; i < n; i++) {
        printf("第 %d 位學生：\n", i + 1);
        printf("姓名：");
        scanf("%s", students[i].name);
        printf("學號（6位數）：");
        scanf("%s", students[i].id);
        printf("數學："); scanf("%d", &students[i].math);
        printf("物理："); scanf("%d", &students[i].physics);
        printf("英文："); scanf("%d", &students[i].english);


        if (students[i].math < 0 || students[i].math > 100 ||
            students[i].physics < 0 || students[i].physics > 100 ||
            students[i].english < 0 || students[i].english > 100) {
            printf("成績輸入錯誤，請重新輸入。\n");
            i--;
            continue;
        }

        students[i].avg = (students[i].math + students[i].physics + students[i].english) / 3.0;
    }
}


void displayGrades() {
    clearScreen();
    printf("姓名\t學號\t\t數學\t物理\t英文\t平均\n");
    int i;
    for ( i = 0; i < n; i++) {
        printf("%s\t%s\t%d\t%d\t%d\t%.1f\n", 
               students[i].name, students[i].id,
               students[i].math, students[i].physics, students[i].english,
               students[i].avg);
    }
    printf("按任意鍵回到主選單...\n");
    getchar(); getchar();
}


void searchStudent() {
    clearScreen();
    char searchName[20];
    printf("請輸入要查詢的學生姓名：");
    scanf("%s", searchName);
    int found = 0;
	int i;
    for ( i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("找到 %s，同學資料如下：\n", searchName);
            printf("學號：%s\n數學：%d\n物理：%d\n英文：%d\n平均：%.1f\n",
                   students[i].id, students[i].math, students[i].physics,
                   students[i].english, students[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("查無此學生資料。\n");
    }

    printf("按任意鍵回到主選單...\n");
    getchar(); getchar();
}


void gradeRanking() {
    clearScreen();
    Student temp;
    int i,j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (students[i].avg < students[j].avg) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("依平均成績高至低排序如下：\n");
    displayGrades();
}
}
//這次有點晚才完成作業下次要盡早完成才不會太趕
//程式的部分還是要持續精進 

