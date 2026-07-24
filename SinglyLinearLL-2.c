#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} NODE, *PNODE, **PPNODE;

// Insert Last
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

// Display Linked List
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

// Display Only Odd Elements
void DisplayOdd(PNODE Head)
{
    printf("\nOdd Elements : ");

    while (Head != NULL)
    {
        if (Head->data % 2 != 0)
        {
            printf("%d ", Head->data);
        }

        Head = Head->next;
    }

    printf("\n");
}

// First Occurrence Position
int FirstOccur(PNODE Head, int No)
{
    int Position = 1;

    while (Head != NULL)
    {
        if (Head->data == No)
        {
            return Position;
        }

        Position++;
        Head = Head->next;
    }

    return -1;
}

// Last Occurrence Position
int LastOccur(PNODE Head, int No)
{
    int Position = 1;
    int LastPos = -1;

    while (Head != NULL)
    {
        if (Head->data == No)
        {
            LastPos = Position;
        }

        Position++;
        Head = Head->next;
    }

    return LastPos;
}

// Count Numbers Greater Than X
int CountGreater(PNODE Head, int X)
{
    int Count = 0;

    while (Head != NULL)
    {
        if (Head->data > X)
        {
            Count++;
        }

        Head = Head->next;
    }

    return Count;
}

// Count Numbers Less Than X
int CountLess(PNODE Head, int X)
{
    int Count = 0;

    while (Head != NULL)
    {
        if (Head->data < X)
        {
            Count++;
        }

        Head = Head->next;
    }

    return Count;
}

// Main Function
int main()
{
    PNODE First = NULL;
    int Choice = 0;
    int Value = 0;
    int Result = 0;

    do
    {
        printf("\n==============================");
        printf("\n1. Insert Element");
        printf("\n2. Display List");
        printf("\n3. Display Odd Elements");
        printf("\n4. First Occurrence Position");
        printf("\n5. Last Occurrence Position");
        printf("\n6. Count Numbers Greater Than X");
        printf("\n7. Count Numbers Less Than X");
        printf("\n0. Exit");
        printf("\n==============================");

        printf("\nEnter Choice : ");
        scanf("%d", &Choice);

        switch (Choice)
        {
            case 1:
                printf("Enter Number : ");
                scanf("%d", &Value);
                InsertLast(&First, Value);
                break;

            case 2:
                Display(First);
                break;

            case 3:
                DisplayOdd(First);
                break;

            case 4:
                printf("Enter Number : ");
                scanf("%d", &Value);

                Result = FirstOccur(First, Value);

                if (Result == -1)
                    printf("Element Not Found\n");
                else
                    printf("First Occurrence Position = %d\n", Result);
                break;

            case 5:
                printf("Enter Number : ");
                scanf("%d", &Value);

                Result = LastOccur(First, Value);

                if (Result == -1)
                    printf("Element Not Found\n");
                else
                    printf("Last Occurrence Position = %d\n", Result);
                break;

            case 6:
                printf("Enter Value of X : ");
                scanf("%d", &Value);

                printf("Count = %d\n", CountGreater(First, Value));
                break;

            case 7:
                printf("Enter Value of X : ");
                scanf("%d", &Value);

                printf("Count = %d\n", CountLess(First, Value));
                break;

            case 0:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while (Choice != 0);

    return 0;
}