// Design a struct which will have members that describe an employee's:
//     last name,
//     first name,
//     employee ID number,
//     last 4 digits of their SSN, and
//     title.
// Design a second struct which will store two employees as members. The employees will be structures of the type of your first struct.
// Inside of main(), prompt the user to enter each employee's credentials and store them.
// Finally, print the employee's credentials to the terminal.
#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char FName[10];
    char LName[10];
    int empID;
    int SSN;
    char title[10];
};

struct members
{
    struct employee e1;
    struct employee e2;
} mem;

int main()
{
    // Employee 1
    printf("Enter the employee's first name: ");
    scanf("%s", &mem.e1.FName);

    printf("Enter the employee's last name: ");
    scanf("%s", &mem.e1.LName);

    printf("Enter the employee's ID number: ");
    scanf("%d", &mem.e1.empID);

    printf("Enter the last four digits of the employee's SSN: ");
    scanf("%d", &mem.e1.SSN);

    printf("Enter the employee's job title: ");
    scanf("%s", &mem.e1.title);

    // Employee 2
    printf("\nEnter the employee's first name: ");
    scanf("%s", &mem.e2.FName);

    printf("Enter the employee's last name: ");
    scanf("%s", &mem.e2.LName);

    printf("Enter the employee's ID number: ");
    scanf("%d", &mem.e2.empID);

    printf("Enter the last four digits of the employee's SSN: ");
    scanf("%d", &mem.e2.SSN);

    printf("Enter the employee's job title: ");
    scanf("%s", &mem.e2.title);

    printf("\nEmployee Credentials for %s %s\n", mem.e1.FName, mem.e1.LName);
    printf("ID: %d\nSSN: %d\nTitle: %s Engineer\n", mem.e1.empID, mem.e1.SSN, mem.e1.title);

    printf("\nEmployee Credentials for %s %s\n", mem.e2.FName, mem.e2.LName);
    printf("ID: %d\nSSN: %d\nTitle: %s Engineer\n", mem.e2.empID, mem.e2.SSN, mem.e2.title);

    return 0;
}