#include <stdio.h>

int main(void) {

    int valor, resto, n100, n50, n20, n10, n5, n2;
    int m1, m50, m25, m10, m05, m01;
    double valor_real;




     scanf("%lf", &valor_real);

    valor = valor_real;
    
    n100 = valor / 100;     resto = valor % 100;
    n50 = resto / 50;       resto = resto % 50;
    n20 = resto / 20;       resto = resto % 20;
    n10 = resto / 10;       resto = resto % 10;
    n5 = resto / 5;        resto = resto % 5;
    n2 = resto / 2;        resto = resto % 2;
    


    printf("NOTAS:\n");
    printf("n100 = %d\n", n100);
    printf("n50 = %d\n", n50);
    printf("n20 = %d\n", n20);
    printf("n10 = %d\n", n10);
    printf("n5 = %d\n", n5);
    printf("n2 = %d\n", n2);


    valor_real = valor_real - valor;
    resto = valor_real * 100;

    m50 = resto / 50;     resto = resto % 50;
    m25 = resto / 25;       resto = resto % 25;
    m10 = resto / 10;       resto = resto % 10;
    m05 = resto / 5;       resto = resto % 5;
    m01 = resto / 1;        
    
   



    
    printf("MOEDAS:\n");
    printf("m1 = %d\n", m1);
    printf("m50 = %d\n", m50);
    printf("m25 = %d\n", m25);
    printf("m10 = %d\n", m10);
    printf("m05 = %d\n", m05);
    printf("m01 = %d\n", m01);

    
    
    
    return 0;
}