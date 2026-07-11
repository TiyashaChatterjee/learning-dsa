#include<stdio.h>
struct student{
	char name[20];
	int roll_no;
	int DOB;
	int fees;
    int marks;
};
int main(){
	char name[10];
	int roll_no;
	int DOB;
	int fees;
    int marks;
	
    int i;
	struct student s[10];
	
    for ( i = 0; i < 10; i++)
    {   
        if(i==0){
            printf("Enter the details of %dst student\n", i+1);
        }else if(i==1){
            printf("Enter the details of %dnd student\n", i+1);
        }else if(i==2){
            printf("Enter the details of %drd student\n", i+1);
        }else{
            printf("Enter the details of %dth student\n");
        }
        printf("Enter the name of the student: ");
        scanf("%s", &s[i].name);
        printf("Enter the roll no. of tha student: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter the Date of Birth: ");
        scanf("%d", &s[i].DOB);
        printf("Enter the fees given by the student: ");
        scanf("%d", &s[i].fees);
        printf("Enter the total marks of the student: ");
        scanf("%d", &s[i].marks);

    }
    
    
    int j,k, l;
    //selection sort
    for ( j = 0; j < 9; j++)
    {
        int min = j;
        for ( k = j+1; k < 10; k++)
        {
            if(s[min].marks>s[k].marks){
                min = k;
            }
        }
        struct student temp = s[min];
        s[min] = s[j];
        s[j] = temp;
    }
    printf("So the Highesh marks is: %d, of the student name %s having roll no %d", s[9].marks, s[9].name, s[9].roll_no);

	return 0;
}