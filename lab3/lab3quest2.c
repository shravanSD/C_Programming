#include <stdio.h>
#include <string.h>

struct student
{
    char sname[20], oname[20], address [25];
    int age;
};

void inputStudent(struct student *(s[]), int n);
void displayStudent(struct student (s[])), int n;

void main ()
{

}

void inputStudent(struct student *(s[]), int n)
{
    printf("Input surname: ");
    scanf("%s", s->sname);
    
    printf("Input other name: ");
    scanf("%s", s->oname);

    printf("Input address: ");
    scanf("%s", s->address);

    printf("Input age: ");
    scanf("%d", &s->age);
}

void displayStudent(struct student (s[]), int n)
{
    printf("Surname:\t%s\n", s.sname);
    printf("Othername:\t%s\n", s.oname);
    printf("Address:\t%s\n", s.address);
    printf("Age:\t\t%d\n", s.age);
}