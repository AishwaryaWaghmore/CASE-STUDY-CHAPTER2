#include<stdio.h>
#include "grades.h"
/*void student(int SRN);
int main()
{
    int SRN;
    printf("Enter the name : \n 1.Ananya Shet \n 2.Anjali \n 3.Aishwarya \n 4.Tanvi \n 5.Jhanvi \n");
    student(SRN);
    return 0;
}
*/
void student(int SRN)
{
    printf("-------------------YOUR SCORES---------------\n");
    switch(SRN)
    {
        case 1: printf(" Ananya Shet \n SEM -2 \n Branch - CSE\n");
            break;
        case 2: printf(" Anjali \n SEM - 2 \n Branch - CSE\n");
            break;
        case 3: printf(" Aishwarya \n SEM -2 \n Branch - AIML\n");
            break;
        case 4: printf(" Tanvi \n SEM - 2 \n Branch - EC\n");
            break;
        case 5: printf(" Jhanvi \n SEM -2 \n Branch - EC\n");
            break;
        default:printf(" No data available\n");
            break;

    }
    
}
int main()
{
    int SRN;
    printf("Enter your SRN:\n");
    scanf("%d", &SRN);
    //int mar1[10], mar2[10], mar3[10];
    student(SRN);
    grade(SRN);
    return 0;
}