#include <stdio.h>

int main() {
    char operator_choice;
    float num1, num2, result;
    int exit_choice;

    do {
        printf("Yapmak istediginiz islemi secin (+, -, *, /, %%): \n");
        scanf(" %c", &operator_choice);

        printf("ilk sayiyi girin: ");
        scanf("%f", &num1);

        printf("ikinci sayiyi girin: ");
        scanf("%f", &num2);

        if (operator_choice == '+') {
            result = num1 + num2;
        } else if (operator_choice == '-') {
            result = num1 - num2;
        } else if (operator_choice == '*') {
            result = num1 * num2;
        } else if (operator_choice == '/') {
            result = num1 / num2;
        } else if (operator_choice == '%') {
            result = (num1 / 100) * num2;
        } else {
            printf("Hatalý islem secildi\n");
            continue;
        }

        printf("Sonuc: %.2f\n", result);

        printf("cikis yapmak icin 0, devam etmek icin herhangi bir sayi girin: ");
        scanf("%d", &exit_choice);
    } while (exit_choice != 0);

    printf("Programdan cikiliyor...\n");

    return 0;
}

