#include<stdio.h>
#include<conio.h>
int main()
{
    struct student
    {
        /* data */
        int roll_no;
        char name[20];
        float fees;
        char DOB[40];

    };
    struct student stud1;
    printf("Please enter the roll number\n");
    scanf("\n%d\n",&stud1.roll_no);
    printf("Please enter the name\n");
    scanf("%s\n",&stud1.name);
    printf("Please enter the fees\n");
    scanf("%f\n",&stud1.fees);
    printf("Please enter the DOB\n");
    scanf("%s\n",&stud1.DOB);
    printf("**********************************************************\n");
    printf("Roll no:- %d\n",stud1.roll_no);
    printf("Name:-%s\n",stud1.name);
    printf("Fees:-%f\n",stud1.fees);
    printf("DOB:-%s\n",stud1.DOB);
    getch();
    return 0;
    
    
}