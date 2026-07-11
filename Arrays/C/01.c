#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int DOB;
	int fees;
};
int main(){
	char name[20];
	int roll_name;
	int DOB;
	int fees;
	
	struct student s1;
	struct student s2;
	struct student s3;
	struct student s4;
	struct student s5;
	struct student s6;
	struct student s7;
	struct student s8;
	struct student s9;
	struct student s10;
	
//1st
	printf("Enter the 1st student's details\n");
	printf("Enter the name: ");
	scanf("%s", &s1.name);//here the name is string
	printf("Enter the student's roll no.: ");
	scanf("%d", &s1.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s1.DOB);
	printf("Enter the fees: ");
	scanf("%d", &s1.fees);
//2nd	
	
	printf("Enter the 2nd student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s2.name);
	printf("Enter the student's roll no.: ");
	scanf("%d", &s2.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s2.DOB);
	//here the name is string
	printf("Enter the fees: ");
	scanf("%d", &s2.fees);
//3rd
	
	printf("Enter the 3rd student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s3.name);
	printf("Enter the student's roll no.: ");
	scanf("%d", &s3.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s3.DOB);
	//here the name is string
	printf("Enter the fees: ");
	scanf("%d", &s3.fees);
//4th
	
	printf("Enter the 4th student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s4.name);
	printf("Enter the student's roll no.: ");
	scanf("%d", &s4.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s4.DOB);
	//here the name is string
	printf("Enter the fees: ");
	scanf("%d", &s4.fees);
//5th
	
	printf("Enter the 5th student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s5.name);
	printf("Enter the student's roll no.: ");
	scanf("%d", &s5.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s5.DOB);
	//here the name is string
	printf("Enter the fees: ");
	scanf("%d", &s5.fees);
	
	printf("Enter the 6th student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s6.name);
	printf("Enter the student's roll no.: ");
	scanf("%d", &s6.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s6.DOB);
	//here the name is string
	printf("Enter the fees: ");
	scanf("%d", &s6.fees);
	
	printf("Enter the 7th student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s7.name);
	printf("Enter the student's roll no.: ");
	scanf("%d", &s7.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s7.DOB);
	//here the name is string
	printf("Enter the fees: ");
	scanf("%d", &s7.fees);
	
	printf("Enter the 8th student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s8.name);
	printf("Enter the student's roll no.: ");
	scanf("%d", &s8.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s8.DOB);
	//here the name is string
	printf("Enter the fees: ");
	scanf("%d", &s8.fees);
	
	printf("Enter the 9th student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s9.name);//here the name is string
	printf("Enter the student's roll no.: ");
	scanf("%d", &s9.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s9.DOB);
	printf("Enter the fees: ");
	scanf("%d", &s9.fees);
	
	printf("Enter the 10th student's details\n");
    printf("Enter the name: ");
	scanf("%s", &s10.name);//here the name is string
	printf("Enter the student's roll no.: ");
	scanf("%d", &s10.roll_no);
    printf("Enter the student's Date of Birth: ");
    scanf("%d", &s10.DOB);
	printf("Enter the fees: ");
	scanf("%d", &s10.fees);
	
	printf("-----------Details of The 1st-----------\n");
	printf("The Name of the student: %s\n", s1.name);
	printf("The roll no. of the student: %d\n", s1.roll_no);
    printf("The Date of Birth of the student: %d\n", s1.DOB);
	printf("The fees given: %d\n", s1.fees);
	
	printf("-----------Details of The 2nd-----------\n");
	printf("The Name of the student: %s\n", s2.name);
	printf("The roll no. of the student: %d\n", s2.roll_no);
    printf("The Date of Birth of the student: %d\n", s2.DOB);
	printf("The fees given: %d\n", s2.fees);
	
	printf("-----------Details of The 3rd-----------\n");
	printf("The Name of the student: %s\n", s3.name);
	printf("The roll no. of the student: %d\n", s3.roll_no);
    printf("The Date of Birth of the student: %d\n", s3.DOB);
	printf("The fees given: %d\n", s3.fees);
	
	printf("-----------Details of The 4th-----------\n");
	printf("The Name of the student: %s\n", s4.name);
	printf("The roll no. of the student: %d\n", s4.roll_no);
    printf("The Date of Birth of the student: %d\n", s4.DOB);
	printf("The fees given: %d\n", s4.fees);
	
	printf("-----------Details of The 5th-----------\n");
	printf("The Name of the student: %s\n", s5.name);
	printf("The roll no. of the student: %d\n", s5.roll_no);
    printf("The Date of Birth of the student: %d\n", s5.DOB);
	printf("The fees given: %d\n", s5.fees);
	
	printf("-----------Details of The 6th-----------\n");
	printf("The Name of the student: %s\n", s6.name);
	printf("The roll no. of the student: %d\n", s6.roll_no);
    printf("The Date of Birth of the student: %d\n", s6.DOB);
	printf("The fees given: %d\n", s6.fees);
	
	printf("-----------Details of The 7th-----------\n");
	printf("The Name of the student: %s\n", s7.name);
	printf("The roll no. of the student: %d\n", s7.roll_no);
    printf("The Date of Birth of the student: %d\n", s7.DOB);
	printf("The fees given: %d\n", s7.fees);
	
	printf("-----------Details of The 8th-----------\n");
	printf("The Name of the student: %s\n", s8.name);
	printf("The roll no. of the student: %d\n", s8.roll_no);
    printf("The Date of Birth of the student: %d\n", s8.DOB);
	printf("The fees given: %d\n", s5.fees);
	
	printf("-----------Details of The 9th-----------\n");
	printf("The Name of the student: %s\n", s9.name);
	printf("The roll no. of the student: %d\n", s9.roll_no);
    printf("The Date of Birth of the student: %d\n", s9.DOB);
	printf("The fees given: %d\n", s9.fees);
	
	printf("-----------Details of The 10th-----------\n");
	printf("The Name of the student: %s\n", s10.name);
	printf("The roll no. of the student: %d\n", s10.roll_no);
    printf("The Date of Birth of the student: %d\n", s9.DOB);
	printf("The fees given: %d\n", s10.fees);
	return 0;
}