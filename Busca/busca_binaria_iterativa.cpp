#include <iostream>

// Função de busca binária iterativa
int buscaIterativa(const int vetor[], int tamanho, int valor) {
    int indiceEsquerdo = 0;
    int indiceDireito = tamanho - 1;

    while (indiceEsquerdo <= indiceDireito) {
        int indiceMeio = (indiceEsquerdo + indiceDireito) / 2;
        int valorMeio = vetor[indiceMeio];

        if (valor == valorMeio) {
            return indiceMeio;  
        }

        if (valor < valorMeio) {
            indiceDireito = indiceMeio - 1;  // Move para a metade esquerda
        } else {
            indiceEsquerdo = indiceMeio + 1;  // Move para a metade direita
        }
    }

    return -1;  // Valor não encontrado
}


int main() {
    
    
    // Definição de um vetor ordenado
    int vetor[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valorProcurado = 77;
    
    int resultadoIterativo = buscaIterativa(vetor, tamanho, valorProcurado);


    if (resultadoIterativo != -1) {
        std::cout << "O valor " << valorProcurado <<  " foi encontrado no indice " << resultadoIterativo << "." << std::endl;
    } else {
        std::cout << "O valor " << valorProcurado << " nao foi encontrado." << std::endl;
    }

    return 0;
}
