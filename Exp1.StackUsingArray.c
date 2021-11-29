#include <stdio.h>
int STK[100], TOP = -1, i, n, x, choice;
void Push();
void Pop();
void Peep();
void change();
void Display();
void main()
{
    printf("\t WELCOME to Implementation of STACK using array !! \n");
    printf("Enter the size of Stack (Maximum size = 100): ");
    scanf("%d", &n);
    do
    {
        printf("\n Stack Operation available: \n");
        printf("\t1.Push\t 2.Pop\t 3.Peep\t 4.Change\t 5.Display\t 6.Exit \n");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peep();
            break;
        case 4:
            change();
            break;
        case 5:
            Display();
            break;
        case 6:
            printf("Exit: Program Finished !! ");
            break;
        default:
            printf("Please enter a valid choide: 1, 2, 3, 4, 5 \n");
        }
    } while (choice != 6);
}
void Push()
{
    if (TOP >= n - 1)
    {
        printf(" Stack Overflow \n");
    }
    else
    {
        printf(" Enter the element to be pushed: ");
        scanf("%d", &x);
        TOP++;
        STK[TOP] = x;
    }
}
void Pop()
{
    if (TOP < 0)
    {
        printf(" Stack Underflow \n");
    }
    else
    {
        printf(" The popped element is: %d \n", STK[TOP]);
        TOP--;
    }
}
void Peep()
{
    printf(" Enter the position of the element from the top which you want to peep: ");
    scanf("%d", &i);
    if (TOP - i + 1 < 0)
    {
        printf(" Stack Underflow on Peep \n");
    }
    else
    {
        printf(" The %d element from the top is: %d \n", i, STK[TOP - i + 1]);
    }
}
void change()
{
    printf(" Enter the position of the element from the top which you want to Change: ");
    scanf("%d", &i);
    int new;
    printf("Enter new value:");
    scanf("%d", &new);
    if (TOP - i + 1 < 0)
    {
        printf(" Stack Underflow on Change \n");
    }
    else
    {
        printf(" The old %d element from the top was: %d \n", i, STK[TOP - i + 1]);
        STK[TOP - i + 1] = new;
        printf(" The new %d element from the top is: %d \n", i, STK[TOP - i + 1]);
    }
}
void Display()
{
    if (TOP < 0)
    {
        printf(" Stack is empty \n");
    }
    else
    {
        printf(" The element in the stack are:");
        for (i = TOP; i > -1; i--)
        {
            printf("\n %d \n", STK[i]);
        }
    }
}
