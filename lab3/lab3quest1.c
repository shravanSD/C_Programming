#include <stdio.h>
#include <string.h>

struct student
{
    char sname[20], oname[20], address [25];
    int age;
};

void inputStudent(struct student *s);
void displayStudent(struct student s);

void main ()
{
    struct student x, y;
    inputStudent(&x);
    inputStudent(&y);
    if (x.age > y.age)
    {
        displayStudent(x);
    }
    else if (x.age < y.age)
    {
        displayStudent(y);
    }
    else
    {
        displayStudent(x);
        displayStudent(y);
    }
    
}

void inputStudent(struct student *s)
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

void displayStudent(struct student s)
{
    printf("Surname:\t%s\n", s.sname);
    printf("Othername:\t%s\n", s.oname);
    printf("Address:\t%s\n", s.address);
    printf("Age:\t\t%d\n", s.age);
}