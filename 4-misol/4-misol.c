#include<stdio.h>
#include<string.h>



int main(){
    //hotiradan input nomli pointer yaratib oldik
    FILE *input = fopen("input.txt", "r" );
    FILE* output = fopen("output.txt", "w");

    //fayldan butun sonlarni ajratib olish uchun number nomli o`zgaruvchi yaratib oldik
    int number; 
    //raqamlarni qo`shib borish uchun s o`zgaruvchi yaratib oldik
    int s = 0;
    //qo`yidagi loopda barcha butun sonlarni qo`shib olish uchun ishlatamiz
    for (int i = 0; i < 4; i++)
    {
        fscanf(input, "%d", &number);
        fprintf(output, "%d + ", number);
        s += number;
    }
    fscanf(input, "%d", &number);
    s += number;
    fprintf(output, "%d = %d", number, s);
}