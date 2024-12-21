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

    // fayllardan barcha so`zlarni o`qib olish un o`zgaruvchi yaratib oldik
    char word[50];
    int count;

    while (fscanf(input, "%s %d", word, &count) != EOF)
    {
        
        if (count >=60)
        {
            fprintf(output, "%s  %d\n", word, count);
        }else
        {
            fprintf(output1, "%s  %d\n", word, count);
        }
        
    
    }
}