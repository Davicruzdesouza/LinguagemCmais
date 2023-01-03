#include <iostream>
using namespace std;
/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações número de anos que ele fuma, nº de cigarros fumados por dia e preço de uma
carteira.*/
int main(){
    int cDia,anosFum;
    float totalgasto,precocart;

    cout << "Digite quantos anos fuma?" << endl;
    cin >> anosFum;
    cout << "Quantos cigarros por dia?" << endl;
    cin >> cDia;
    cout << "Digite o preco da carteira?" << endl;
    cin >> precocart;

    totalgasto = (anosFum * 365) * (cDia / precocart);

    cout << "Valor total gasto:" << totalgasto << endl;

    system("pause");
}