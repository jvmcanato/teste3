// 06/03/2015
// FABRICIO DA SILVA MASCOUTO
// DADO UM UMA QUANTIDADE DE NUMEROS DA SEQUENCIA DE FIBONCCI O PROGRAMA RETORNA O VALOR DO ENESIMO TERMO


#include <iostream>

using namespace std;

int main()
{
    int numeroTermos;

    cout << "Digite o numero de termos da sequencia de fiboncci: ";
    cin >> numeroTermos;

    int matriz[numeroTermos];
    matriz [1]=1;
    matriz [2]=1;


    for (int i=1 ; i < numeroTermos ; i++)
    {
            int alciliar= matriz[i]+matriz[i+1];

            matriz[i+2]= alciliar;
    }

    cout <<"\nO termo de numero " << numeroTermos<< " da sequencia eh: " << matriz[numeroTermos] << endl;

    return 0;
}
