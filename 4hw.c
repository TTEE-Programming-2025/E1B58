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
    
         char choice;
    int running = 1;

    while (running) {
        clearScreen();
       //�D��� 
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
           //�{���i�J�I 
		    case 'a': enterGrades(); break;
            case 'b': displayGrades(); break;
            case 'c': searchStudent(); break;
            case 'd': gradeRanking(); break;
            case 'e': {
                printf("�T�w���}�H(y/n): ");
                char confirm;
                scanf(" %c", &confirm);
                if (confirm == 'y') {
                    printf("�t�ε����C\n");
                    running = 0;
                }
                break;
            }
            default:
                printf("�ﶵ���~�A�Э��s��J�C\n");
                getchar(); getchar(); 
                break;
        }
    }
      return 0;
}
void clearScreen() {
    system("cls"); // Windows �� system("CLS")
}


void enterGrades() {
    clearScreen();
    printf("�п�J�ǥͤH�ơ]5~10�^�G");
    scanf("%d", &n);
    if (n < 5 || n > 10) {
        printf("�H�ƶW�X�d��A�Э��s��J�C\n");
        return;
    }
	int i;
    for ( i = 0; i < n; i++) {
        printf("�� %d ��ǥ͡G\n", i + 1);
        printf("�m�W�G");
        scanf("%s", students[i].name);
        printf("�Ǹ��]6��ơ^�G");
        scanf("%s", students[i].id);
        printf("�ƾǡG"); scanf("%d", &students[i].math);
        printf("���z�G"); scanf("%d", &students[i].physics);
        printf("�^��G"); scanf("%d", &students[i].english);


        if (students[i].math < 0 || students[i].math > 100 ||
            students[i].physics < 0 || students[i].physics > 100 ||
            students[i].english < 0 || students[i].english > 100) {
            printf("���Z��J���~�A�Э��s��J�C\n");
            i--;
            continue;
        }

        students[i].avg = (students[i].math + students[i].physics + students[i].english) / 3.0;
    }
}


void displayGrades() {
    clearScreen();
    printf("�m�W\t�Ǹ�\t\t�ƾ�\t���z\t�^��\t����\n");
    int i;
    for ( i = 0; i < n; i++) {
        printf("%s\t%s\t%d\t%d\t%d\t%.1f\n", 
               students[i].name, students[i].id,
               students[i].math, students[i].physics, students[i].english,
               students[i].avg);
    }
    printf("�����N��^��D���...\n");
    getchar(); getchar();
}


void searchStudent() {
    clearScreen();
    char searchName[20];
    printf("�п�J�n�d�ߪ��ǥͩm�W�G");
    scanf("%s", searchName);
    int found = 0;
	int i;
    for ( i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("��� %s�A�P�Ǹ�Ʀp�U�G\n", searchName);
            printf("�Ǹ��G%s\n�ƾǡG%d\n���z�G%d\n�^��G%d\n�����G%.1f\n",
                   students[i].id, students[i].math, students[i].physics,
                   students[i].english, students[i].avg);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("�d�L���ǥ͸�ơC\n");
    }

    printf("�����N��^��D���...\n");
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

    printf("�̥������Z���ܧC�ƧǦp�U�G\n");
    displayGrades();
}
}
//�o�����I�ߤ~�����@�~�U���n�ɦ������~���|�ӻ�
//�{���������٬O�n�����i 

