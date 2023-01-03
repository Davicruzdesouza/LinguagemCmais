#include <iostream>
using namespace std;
/*Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual 
aplicado ao número.
*/
int main(){
    int n;
    float percetual,percentualapli;

    cout << "Digite um numero inteiro: " << endl;
    cin >> n;
    cout << "Digite o percentual que deseja aplicar: " << endl;
    cin >> percetual;

    percentualapli = (n * percetual) / 100;

    cout << "Valor de N: " << n << endl;
    cout << "Valor do percentual: " << percetual << endl;
    cout << "Valor do percentual aplicado: " << percentualapli << endl;
    

    system("pause");
}