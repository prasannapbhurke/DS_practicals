//Prasanna Pradeep Bhurke
//Roll No. : 155


#include<stdio.h>

int main()
{
    int arr[100], n, i, pos, val;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter position: ");
    scanf("%d",&pos);

    printf("Enter value: ");
    scanf("%d",&val);

    for(i=n;i>=pos;i--)
        arr[i]=arr[i-1];

    arr[pos-1]=val;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}