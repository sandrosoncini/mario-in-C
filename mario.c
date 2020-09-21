#include<cs50.h>
#include<stdio.h>


int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    int count = height;
    
    //Define rows
    for (int row = 0; row < height; row ++)
    
    {
        //Define columns 
        for (int col = 0; col < height; col++) 
        {
            //Print space or #
            if (row + col >= height - 1)
            {
                printf("#");
            
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}


