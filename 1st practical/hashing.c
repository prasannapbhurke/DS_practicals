#include<stdio.h>

#define SIZE 7

int hashTable[SIZE];

void initialize()
{
    for(int i = 0; i < SIZE; i++)
        hashTable[i] = -1;   // -1 means empty
}

void insert(int key)
{
    int index = key % SIZE;
    int start = index;

    while(hashTable[index] != -1 && hashTable[index] != -2)
    {
        index = (index + 1) % SIZE;

        if(index == start)
        {
            printf("Hash Table is Full\n");
            return;
        }
    }

    hashTable[index] = key;
    printf("Key %d inserted at index %d\n", key, index);
}

void search(int key)
{
    int index = key % SIZE;
    int start = index;

    while(hashTable[index] != -1)
    {
        if(hashTable[index] == key)
        {
            printf("Key %d found at index %d\n", key, index);
            return;
        }

        index = (index + 1) % SIZE;

        if(index == start)
            break;
    }

    printf("Key not found\n");
}

void deleteKey(int key)
{
    int index = key % SIZE;
    int start = index;

    while(hashTable[index] != -1)
    {
        if(hashTable[index] == key)
        {
            hashTable[index] = -2;   // -2 means deleted
            printf("Key %d deleted\n", key);
            return;
        }

        index = (index + 1) % SIZE;

        if(index == start)
            break;
    }

    printf("Key not found\n");
}

void display()
{
    printf("\nHash Table:\n");
    for(int i = 0; i < SIZE; i++)
    {
        printf("Index %d : ", i);

        if(hashTable[i] == -1)
            printf("Empty\n");
        else if(hashTable[i] == -2)
            printf("Deleted\n");
        else
            printf("%d\n", hashTable[i]);
    }
}

int main()
{
    int choice, key;

    initialize();

    while(1)
    {
        printf("\n1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(key);
                break;

            case 3:
                printf("Enter key to delete: ");
                scanf("%d", &key);
                deleteKey(key);
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}