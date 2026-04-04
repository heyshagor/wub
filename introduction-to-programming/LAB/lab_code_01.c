// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 01
// Experiment Name: Grading Point Calculation

#include <stdio.h>

int main() {
    float marks, grade_point;

    // Input marks from the user
    printf("Enter the marks obtained: ");
    scanf("%f", &marks);
    if (marks >= 80) {
        grade_point = 4.0;
    } else if (marks >= 70) {
        grade_point = 3.0;
    } else if (marks >= 60) {
        grade_point = 2.0;
    } else if (marks >= 50) {
        grade_point = 1.0;
    } else {
        grade_point = 0.0;
    }
    printf("The grade point is: %.1f\n", grade_point);

    return 0;
}