#include<stdio.h>

struct student{
    long long int roll_number;
    char name[50];
    float marks;
};

int main(){
    struct student s1 = {24098116782009, "Mobashir Ahmed", 12.5};
    struct student s2 = {24098116782014, "Sachin Kumar", 15};
    struct student s3 = {24098116782001, "Abhishek Kumar", 14.33};
    struct student s4 = {24098116782003, "Amit Singh", 17.08};
    struct student s5;

    printf("Enter student roll no. ");
    scanf("%lld", &s5.roll_number);
    printf("Enter student name: ");
    scanf("%49s", &s5.name);
    printf("Enter marks obtained by student: ");
    scanf("%f", &s5.marks);

    printf("\nPerformace of Students of a class is as follows:\n");
    
    printf("   Roll no.          Name         Marks\n");
    printf("%lld\t%-15s\t%f\n", s1.roll_number, s1.name, s1.marks);
    printf("%lld\t%-15s\t%f\n", s2.roll_number, s2.name, s2.marks);
    printf("%lld\t%-15s\t%f\n", s3.roll_number, s3.name, s3.marks);
    printf("%lld\t%-15s\t%f\n", s4.roll_number, s4.name, s4.marks);
    printf("%lld\t%-15s\t%f", s5.roll_number, s5.name, s5.marks);

    return 0;
}