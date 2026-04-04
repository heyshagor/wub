// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 01
// Experiment Name: Grading Point Calculation

#include <stdio.h>

int main() {
    int choice;

    printf("1. To Find The Total Points. Average\n");
    printf("2. To Find The One Subject Points\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        float eng, bds, phy, com, com_prac, res;
        printf("Enter the GPA of English: ");
        scanf("%f", &eng);
        printf("Enter the GPA of Bangladesh Studies: ");
        scanf("%f", &bds);
        printf("Enter the GPA of Physics: ");
        scanf("%f", &phy);
        printf("Enter the GPA of Computer: ");
        scanf("%f", &com);
        printf("Enter the GPA of Computer Practical: ");
        scanf("%f", &com_prac);
        res = (eng*3 + bds*2 + phy*3 + com*3 + com_prac*1) / 12;
        printf("The average CGPA of this semester is: %0.2f\n", res);
    }
    else if (choice == 2) {
        float marks, grade_point;
        printf("Enter the marks of the subject: ");
        scanf("%f", &marks);
        if (marks >= 80 && marks <= 100) {
            grade_point = 4.00;
        }
        else if (marks >= 75 && marks < 80) {
            grade_point = 3.75;
        }
        else if (marks >= 70 && marks < 75) {
            grade_point = 3.50;
        }
        else if (marks >= 65 && marks < 70) {
            grade_point = 3.25;
        }
        else if (marks >= 60 && marks < 65) {
            grade_point = 3.00;
        }
        else if (marks >= 55 && marks < 60) {
            grade_point = 2.75;
        }
        else if (marks >= 50 && marks < 55) {
            grade_point = 2.50;
        }
        else if (marks >= 45 && marks < 50) {
            grade_point = 2.25;
        }
        else if (marks >= 40 && marks < 45) {
            grade_point = 2.00;
        }
        else {
            grade_point = 0.00;
        }

        printf("The grade point of the subject is: %0.2f\n", grade_point);
    }
     else {
          printf("Invalid Input");
    }
}
    