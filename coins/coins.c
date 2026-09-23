#include <stdio.h>

int main(void)
{
    int dirams;

  
    do
    {
        printf("Change owed (dirams): ");

        if (scanf("%d", &dirams) != 1)
        {
            
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }

            dirams = -1;
            continue;
        }

    } while (dirams < 0 || dirams % 10 != 0);

  
    int coins = 0;

    coins += dirams / 500;
    dirams %= 500;

    coins += dirams / 300;
    dirams %= 300;

    coins += dirams / 100;
    dirams %= 100;

    coins += dirams / 50;
    dirams %= 50;

    coins += dirams / 20;
    dirams %= 20;

    coins += dirams / 10;
    dirams %= 10;

    
    printf("%d\n", coins);
}
