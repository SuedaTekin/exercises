#include <stdio.h>
#include <stdlib.h>


int main() {
    int num1, num2;
    char operator;

    printf("�slemi girin (+, -, *, /): ");
    scanf("%c", &operator);

    printf("�ki say�y� girin: ");
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
                printf("Hatal� i�lem: S�f�ra b�lme hatas�\n");
            break;
        default:
            printf("Hatal� i�lem: Ge�ersiz operat�r\n");
            break;
    }

    return 0;
}
