//Prasanna Pradeep Bhurke
//Roll No. : 155

#include<stdio.h>

int main()
{
    int arr[100], n, i, min, second;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    min = second = arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            second = min;
            min = arr[i];
        }
        else if(arr[i]<second && arr[i]!=min)
        {
            second = arr[i];
        }
    }

    printf("Second minimum = %d",second);

    return 0;
}