//Prasanna Pradeep Bhurke
//Roll No. : 155

#include<stdio.h>

int main()
{
    int arr[100], n, i, sum=0;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
        sum=sum+arr[i];

    avg = sum/n;

    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);

    return 0;
}