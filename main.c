#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = rand() % 50;
    int guess;
    int length;
    int i = 0;

    printf("PLEASE input number of tries: ");
    scanf("%d", &length);

    do
    {
        printf("PLEASE input number between 1-50: ");
        scanf("%d", &guess);
        printf("You have Selected: %d\n", guess);
        if (guess == num)
        {
            printf("You Win With %d Tries!\n", i + 1);
            break;
        }
        else if (guess < num)
        {
            printf("Too Low, try again!\n");
        }
        else if (guess > num)
        {
            printf("Too High, Try again!\n");
        }
        else
        {
            printf("INVALID INPUT\n");
        }
        i++;
    } while (i < length);

    return 0;
}
