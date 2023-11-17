#include <stdio.h>

int main() {
    float salarioMinimo = 1400.00;
    char sexo;
    float salario;

    while (1) {
        printf("Informe o sexo do assalariado (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo inválido. Por favor, informe M para masculino ou F para feminino.\n");
            continue;
        }

        printf("Informe o salário do assalariado: ");
        scanf("%f", &salario);

        if (salario <= 1.00) {
            printf("Salário inválido. Deve ser maior que R$1,00.\n");
            continue;
        }

        printf("Salário: R$%.2f\n", salario);

        if (salario > salarioMinimo) {
            printf("Classificação em relação ao salário mínimo: Acima do salário mínimo\n");
        } else if (salario < salarioMinimo) {
            printf("Classificação em relação ao salário mínimo: Abaixo do salário mínimo\n");
        } else {
            printf("Classificação em relação ao salário mínimo: Igual ao salário mínimo\n");
        }

        if (sexo == 'M') {
            printf("Sexo: Masculino\n");
        } else {
            printf("Sexo: Feminino\n");
        }
    }

    return 0;
}
