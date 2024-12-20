#include <stdio.h>
#include <string.h>

int main()
{
    // hotiradan input nomli pointer yaratib oldik
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    FILE *output1 = fopen("output1.txt", "w");

    // agar  hotiradan olmoqchi bolgan manzilimizdan hatolik bolsa
    if (input == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    // fayldan butun sonlarni ajratib olish uchun number nomli o`zgaruvchi yaratib oldik
    int number;
    
    // qo`yidagi loopda barcha toq va juft sonlarni qo`shib olish uchun ishlatamiz
    while(!feof(input))
    {
        fscanf(input, "%d", &number);
        if (number % 2 == 1)
        {
            fprintf(output, "%d  ", number);
        }else
        {
            fprintf(output1, "%d  ", number);
        }
        
        
    
    }
}