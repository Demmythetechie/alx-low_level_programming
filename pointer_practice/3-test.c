#include<stdio.h>

/**
 * main - pointer practice 3
 *
 * Return: Always 0
 */

int main(void)
{
	int house_no = 8;
	int age = 21;
	int class = 8;
	char gender = 'M';
	long int phone_no = 8138712652;
	char grade = 'B';
	int score = 76;
	int school_no = 90;

	int *ptr_house = &house_no;
	int *ptr_age = &age;
	int *ptr_class = &class;
	char *ptr_gender = &gender;
	long int *ptr_phone = &phone_no;
	char *ptr_grade = &grade;
	int *ptr_score = &score;
	int *ptr_school = &school_no;

	printf("%p\n", ptr_house);
	printf("%p\n", ptr_age);
	printf("%p\n", ptr_class);
	printf("%p\n", ptr_gender);
	printf("%p\n", ptr_phone);
	printf("%p\n", ptr_grade);
	printf("%p\n", ptr_score);
	printf("%p\n", ptr_school);
	return (0);
}

