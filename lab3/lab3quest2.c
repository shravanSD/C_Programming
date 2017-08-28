#include <stdio.h>
#include <string.h>

struct student
{
    char sname[20], oname[20], address [25];
    int age;
};

void inputStudent(struct student *s, int n);
void displayStudent(struct student , int n);

void main ()
{
    struct student x[20];
    int i, j;

    printf("Please enter number of students: ");
    scanf("%d", &i);

    for (j = 0; j < i; j++)
    {
        inputStudent(&(x[j]), i);
    }

    printf("The youngest student is %s %s living at %s having %d years old.", x[youngestStud(x, i)].oname, x[youngestStud(x, i)].sname, x[youngestStud(x, i)].address, x[youngestStud(x, i)].age);
}

void inputStudent(struct student *s, int n)
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

void displayStudent(struct student s, int n)
{
    printf("Surname:\t%s\n", s.sname);
    printf("Othername:\t%s\n", s.oname);
    printf("Address:\t%s\n", s.address);
    printf("Age:\t\t%d\n", s.age);
}

int youngestStud(struct student (s[]), int n)
{
    int i;
    int min = s[0].age;
    for (i = 0; i < n; i++)
    {
        if (s[i].age < min)
        {
            min = i;
        }
    }
    return min;
}