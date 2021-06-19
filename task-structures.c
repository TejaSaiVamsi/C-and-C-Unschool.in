#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    int id;
    int experience;
    int salary;
};
int main()
{
    int i, n=5;
    struct employee e[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
    {
        printf("Employee %d : \n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Id: ");
        scanf("%d",&e[i].id);
        printf("Experience : ");
        scanf("%d",&e[i].experience);
        printf("Salary: ");
        scanf("%d",&e[i].salary);

        printf("\n");
    }

    printf("-------------- All Employees Details ---------------\n");

    for(i=0; i<n; i++){

        printf("Name \t: ");
        printf("%s \n",e[i].name);

        printf("Id \t: ");
        printf("%d \n",e[i].id);

        printf("Experience \t: ");
        printf("%d \n",e[i].experience);

        printf("Salary \t: ");
        printf("%d \n",e[i].salary);

        printf("\n");
    }

    return 0;

}
