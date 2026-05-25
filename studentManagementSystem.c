#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

FILE *fp;
struct student s;

void addStudent();
void displayStudent();
void searchStudent();
void deleteStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudent();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            deleteStudent();
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}

void addStudent()
{
    fp = fopen("student.txt", "ab");

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    printf("Student Added Successfully\n");
}

void displayStudent()
{
    fp = fopen("student.txt", "rb");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("Roll : %d\n", s.roll);
        printf("Name : %s\n", s.name);
        printf("Marks : %.2f\n", s.marks);
        printf("----------------------\n");
    }

    fclose(fp);
}

void searchStudent()
{
    int r, found = 0;

    printf("Enter Roll Number To Search: ");
    scanf("%d", &r);

    fp = fopen("student.txt", "rb");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll == r)
        {
            printf("Student Found\n");
            printf("Roll : %d\n", s.roll);
            printf("Name : %s\n", s.name);
            printf("Marks : %.2f\n", s.marks);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student Not Found\n");
    }

    fclose(fp);
}

void deleteStudent()
{
    FILE *ft;

    int r, found = 0;

    printf("Enter Roll Number To Delete: ");
    scanf("%d", &r);

    fp = fopen("student.txt", "rb");
    ft = fopen("temp.txt", "wb");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if (s.roll != r)
        {
            fwrite(&s, sizeof(s), 1, ft);
        }
        else
        {
            found = 1;
        }
    }

    fclose(fp);
    fclose(ft);

    remove("student.txt");
    rename("temp.txt", "student.txt");

    if (found)
    {
        printf("Record Deleted Successfully\n");
    }
    else
    {
        printf("Record Not Found\n");
    }
}