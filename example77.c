#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2;
    char operator;

    printf("Ýslemi girin (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Ýki sayýyý girin: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            else
                printf("Hatalý iþlem: Sýfýra bölme hatasý\n");
            break;
        default:
            printf("Hatalý iþlem: Geçersiz operatör\n");
            break;
    }

    return 0;
}
