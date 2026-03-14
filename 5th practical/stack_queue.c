// //Prasanna Pradeep Bhurke
// //Roll No. : 155

#include <stdio.h>

int MAX = 5;
int stack[5];
int top = -1;

void push()
{
    int item;

    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter element to push: ");
        scanf("%d", &item);

        top = top + 1;
        stack[top] = item;

        printf("%d inserted into stack\n", item);
    }
}

void pop()
{
    int item;

    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        item = stack[top];
        top = top - 1;

        printf("Deleted element: %d\n", item);
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}