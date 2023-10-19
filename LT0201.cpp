/******************************************************************************

1.	Criar e coletar um vetor [50] inteiro. Calcular e exibir:
a.	A média dos valores entre 10 e 200;
b.	A soma dos números ímpares.


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int cta,vet[50], i, somaim;
    float med;
    
    for(i=1; i<= 50; i++ ){
        std::cout << "Informe o seu " << i << " valor: "<< std::endl;
        std::cin >> vet[i];
        
        if(vet[i] >= 10 and vet[i]<= 200){
            med = (med + vet[i]);
            cta++;
        }
        if(vet[i]%2 != 0){
            somaim = (somaim + vet[i]);
        }
    }
    
    med = (med / cta);
    std::cout << "A sua média é: "<<med<< " e a soma dos impares é de: "<<somaim << std::endl;

    return 0;
}
