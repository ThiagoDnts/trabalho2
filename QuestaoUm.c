#include <stdio.h>


int validaQuantidade(int quantidade) {
    while (quantidade < 0) {
        printf("Quantidade inválida. Digite novamente: ");
        scanf("%d", &quantidade);
    }
    return quantidade;
}

float calculaSalario(int quantidade) {
    float salarioBase = 600.0;
    float adicional = 0.0;

    if (quantidade <= 50) {
        return salarioBase;
    } else if (quantidade <= 80) {
        adicional = (quantidade - 50) * 0.5;
    } else {
        adicional = (80 - 50) * 0.5 + (quantidade - 80) * 0.75;
    }

    return salarioBase + adicional;
}

void mostraFinal() {
    int quantidade;
    while (1) {
        printf("Digite a quantidade de peças fabricadas pelo funcionário (ou um número negativo para sair): ");
        scanf("%d", &quantidade);

        if (quantidade < 0) {
            break;
        }

        quantidade = validaQuantidade(quantidade);
        float salarioFinal = calculaSalario(quantidade);
        printf("O salário do funcionário é: R$ %.2f\n", salarioFinal);
    }
}

int main() {
    mostraFinal();
    return 0;
}
