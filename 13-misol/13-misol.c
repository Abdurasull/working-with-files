#include<stdio.h>

int main(){
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    if (input == NULL)
    {
        perror("Fayl topilmadi");
        return 1;
    }

    int number; //fayldagi butun sonni olish ichun o`zgaruvchi  
    int s = 0;
    char number1[20];
    while (!feof(input))//agar matinni oxiri bolsa tugash sharti
    {
        fscanf(input, "%d", &number);
        for (int i = 1; i <= number; i++)
        {
            s += i;
            if (i == 1)
            {
                fprintf(output, "%d", i);
            } else
            {
                fprintf(output, "+%d", i);
            }
        }
        fprintf(output, "=%d\n", s);
        
    }
    
    
    

}