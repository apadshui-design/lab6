#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>   



int ex1()
{
    int year;
    int ost4, ost100, ost400;    

    printf("Vvedite god: ");
    scanf("%d", &year);

    
    ost4 = year % 4;
    ost100 = year % 100;
    ost400 = year % 400;

   
       
    if ((ost4 == 0 && ost100 != 0) || ost400 == 0)
    {
        printf("God %d vysokosnyj\n", year);
    }
    else
    {
        printf("God %d ne vysokosnyj\n", year);
    }

    return 0;
}


int ex2() {
    double x, F;

    //Контрольные примеры 
   // При x = 0 (условие x <= 2): F = 0^2 + 4*0 + 5 = 5
    //При x = 3 (условие x > 2): F = 1 / (3^2 + 4*3 + 5) = 1 / 26 = 0.0384615

    printf("Введите  x: ");
    if (scanf("%lf", &x) != 1) {
        printf("Ошибка ввода!\n");
        return 1;
    }
    printf("F(%.2f) = %.6f\n", x,
        (x <= 2) ? (x * x + 4 * x + 5) : (1.0 / (x * x + 4 * x + 5))
    );

    return 0;
}
