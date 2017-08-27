#include <stdio.h>

struct student {
	char sname[50];
	char onames[50];
	char address[50];
	int age;
};

void inputStud(struct student *z);
void displayStud(struct student z);

void main() {
	struct student x, y;

	inputStud(&x);
	inputStud(&y);
	displayStud(x);
	displayStud(y);
}

void inputStud(struct student *z) {
	printf("Enter surname: ");
	scanf("%s", z->sname);
	printf("\nEnter other names: ");
	scanf("%s", z->onames);
	printf("\nEnter address: ");
	scanf("%s", z->address);
	printf("\nEnter age: ");
	scanf("%i", &z->age);
}

void displayStud(struct student z) {
	printf("Surname: %s\n", z.sname);
	printf("Othernames: %s\n", z.onames);
	printf("Address: %s\n", z.address);
	printf("Age: %d\n", z.age);
}
