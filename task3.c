#include<stdio.h>
int main() {
    int marks;
    printf("enter marks");
    scanf("%d", &marks);
    if(marks>=80) {
        printf("grade a");
    } else if(marks>=70) {
        printf("grade b");
    } else if(marks>=60) {
        printf("grade=c");
    } else if(marks>=50) {
        printf("grade=d");
    } else {
        printf("grade f");
    }
    return 0;
}