#include <iostream>
using namespace std;
/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em 
dias*/
int main(){
    int anos,meses,dias,totaldias;

    cout << "Digita quantos anos ele tem: " << endl;
    cin >> anos;
    cout << "Quantos meses tem: " << endl;
    cin >> meses;
    cout << "Quantos dias: " << endl;
    cin >> dias;

    totaldias = (anos*365)+(meses*30)+dias;

    cout << "Total de dias: " << totaldias << endl;

    system("pause");
}