#include <stdio.h>
#include <string.h>

int main()
{
    // hotiradan input nomli pointer yaratib oldik
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    // agar  hotiradan olmoqchi bolgan manzilimizdan hatolik bolsa
    if (input == NULL)
    {
        perror("input file yuq");
        return 1;
    }

    // fayllardan barcha so`zlarni o`qib olish un o`zgaruvchi yaratib oldik
    char word[50];
    int count = 0;

    while (!feof(input))
    {
        fscanf(input, "%s", word);
        if (word[0] >= 'a' && word[0] <= 'z')
        {
            word[0] = word[0] - 32;
            fprintf(output, "%s ", word);
        }else
        {
            fprintf(output, "%s ", word);
        }
        
        
    }

}