// Лабораторная работа №1. Разработка консольного приложения.
// Разработайте консольное приложение, обеспечивающее ввод с консоли и вывод на консоль
// строки, целого числа, вещественного числа или символа в соответствии с номером варианта.
//
// 1. Символ
//
// 2. Вещественное число

#include <stdio.h>

int main() {
    char Symbol;
    double Number;
    
    printf("Введите символ: ");
    scanf("%c", &Symbol);
    
    printf("Введите вещественное число: ");
    scanf("%lf", &Number);
    
    printf("Это ваш символ %c\n", Symbol);
    printf("Это ваше число %lf\n", Number);
}
