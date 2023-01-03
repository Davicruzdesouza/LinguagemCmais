#include <iostream>
using namespace std;
/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de 
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos 
a vista ou parcelado em até 10 vezes sem juros*/
int main(){
    int vezes;
    float totalpac,valorprod;

    cout << "Digite o valor da compra: " << endl;
    cin >> valorprod;
    cout << "Digite a quantidade de parcelas: " << endl;
    cin >> vezes;

    totalpac = valorprod / vezes;

    cout << "Valor do produto: " << valorprod << "/ quantidade de parcelas: " << vezes << "/ valor de cada parcela: " << totalpac << endl;
    system("pause");
}