//Prasanna Pradeep Bhurke
//Roll No. : 155

#include<stdio.h>

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Reversed array:\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);

    return 0;
}