// Program to calculate the sum,mean and standard deviation of elements in an array using pointer
/* Author: Preetam Hegde
   Date:05/03/2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a[100], *ptr, mean,std,sum=0,sumstd=0;
    int i,n;
    printf("Please enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    ptr=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    mean=sum/n;
    ptr=a;
    for(i=0;i<n;i++)
    {
        sumstd=sumstd+pow((*ptr-mean),2);
        ptr++;
    }
    std=sqrt(sumstd/n);
    printf("Sum=%f\t",sum);
    printf("Mean=%f\t",mean);
    printf("Standard Deviation=%f\t",std);


    return 0;
}
