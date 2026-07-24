#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

// Insert node at last
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

// Display linked list
void Display(PNODE Head)
{
    printf("\nLinked List : ");

    while (Head != NULL)
    {
        printf("|%d| -> ", Head->data);
        Head = Head->next;
    }

    printf("NULL\n");
}

// Search element
bool Search(PNODE Head, int No)
{
    while (Head != NULL)
    {
        if (Head->data == No)
        {
            return true;
        }

        Head = Head->next;
    }

    return false;
}

// Count even numbers
int CountEven(PNODE Head)
{
    int Count = 0;

    while (Head != NULL)
    {
        if ((Head->data % 2) == 0)
        {
            Count++;
        }

        Head = Head->next;
    }

    return Count;
}

// Count odd numbers
int CountOdd(PNODE Head)
{
    int Count = 0;

    while (Head != NULL)
    {
        if ((Head->data % 2) != 0)
        {
            Count++;
        }

        Head = Head->next;
    }

    return Count;
}

// Count frequency of a number
int Frequency(PNODE Head, int No)
{
    int Count = 0;

    while (Head != NULL)
    {
        if (Head->data == No)
        {
            Count++;
        }

        Head = Head->next;
    }

    return Count;
}

// Display even elements
void DisplayEven(PNODE Head)
{
    printf("\nEven Elements : ");

    while (Head != NULL)
    {
        if ((Head->data % 2) == 0)
        {
            printf("%d ", Head->data);
        }

        Head = Head->next;
    }

    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int Choice, Value;

    do
    {
        printf("\n----------------------------");
        printf("\n1. Insert Element");
        printf("\n2. Display List");
        printf("\n3. Search Element");
        printf("\n4. Count Even Numbers");
        printf("\n5. Count Odd Numbers");
        printf("\n6. Frequency of Number");
        printf("\n7. Display Even Elements");
        printf("\n0. Exit");
        printf("\n----------------------------");

        printf("\nEnter your choice : ");
        scanf("%d", &Choice);

        switch (Choice)
        {
            case 1:
                printf("Enter number : ");
                scanf("%d", &Value);
                InsertLast(&First, Value);
                break;

            case 2:
                Display(First);
                break;

            case 3:
                printf("Enter number to search : ");
                scanf("%d", &Value);

                if (Search(First, Value))
                {
                    printf("Element Found\n");
                }
                else
                {
                    printf("Element Not Found\n");
                }
                break;

            case 4:
                printf("Even Count = %d\n", CountEven(First));
                break;

            case 5:
                printf("Odd Count = %d\n", CountOdd(First));
                break;

            case 6:
                printf("Enter number : ");
                scanf("%d", &Value);
                printf("Frequency = %d\n", Frequency(First, Value));
                break;

            case 7:
                DisplayEven(First);
                break;

            case 0:
                printf("Program Terminated.\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (Choice != 0);

    return 0;
}