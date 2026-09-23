#include <stdio.h>

int main(void)
{
    int height;

  
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1);

    
    for (int row = 1; row <= height; row++)
    {
        
        for (int space = 0; space < height - row; space++)
        {
            printf(" ");
        }

       
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("\n");
    }
}
