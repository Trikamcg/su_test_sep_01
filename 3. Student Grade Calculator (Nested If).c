// 3. Student Grade Calculator (Nested If)
#include<stdio.h>
int main() {
    printf("Enter marks for 5 subjects(0 to 100): ");
    int science,maths,english,hindi,computer;
    scanf("%d %d %d %d %d", &science, &maths, &english, &hindi, &computer);
    int marks=science+maths+english+hindi+computer;
    int percentage=(marks*100)/500;
    printf("Total Marks: %d\n", marks);
    printf("Percentage: %d%%\n", percentage);
    if(marks >= 0 && marks <= 500) {
        if(percentage >= 90) {
            printf("Grade: A+\n");
        }else if(percentage >= 80) {
            printf("Grade: A\n");
        }else if(marks >= 70) {
            printf("Grade: B\n");
        }else if(marks >= 60) {
            printf("Grade: C\n");
        }else if(marks >= 50) {
            printf("Grade: D\n");
        }else if(marks >= 40) {
            printf("Grade: E\n");
        }else {
            printf("Fail\n");
    }
    }
    return 0;
}