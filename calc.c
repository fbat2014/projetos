// Calculadora simples com menu de opções
#include <stdio.h>

int main() {
	int x, y, o, w;
	void calc(){
        printf("Digite x e y: \n\n");
        scanf("%d %d", &x, &y);
        printf("(0) soma x+y \n");
        printf("(1) subtrai x-y \n");
        printf("(2) multiplica x*y \n");
        printf("(3) divide x/y \n");
        scanf("%d", &o);
        switch (o) {
            case 0:
                printf("\nResultado: %d \n", x+y);
                break;
            case 1:
                printf("\nResultado: %d \n", x-y);
                break;
            case 2:
                printf("\nResultado: %d \n", x*y);
                break;
            case 3:
                printf("\nResultado: %d \n", x/y);
                break;
                };
         printf("\n \n Deseja fazer outra operação? \n \n");
         printf("Digite 1 para sim e 2 para não ==> ");
         scanf("%d", &w);
         system("clear");
         if (w == 1) {
             calc();
            }
        }
    calc();
	return 0;
}

