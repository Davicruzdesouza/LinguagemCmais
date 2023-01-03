#include <iostream>
using namespace std;
/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso 
em horas, minutos e segundos*/
int main(){
    int segu,horas,minutos,segundos,resto;

    cout << "Digite a duracao do evento em segundos: " << endl;
    cin >> segu;

    horas = segu / 3600;
    resto = segu % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    cout << "Duracao: " << horas << "Hora " << minutos << "Minutos " << segundos << "Segundos " << endl;


    system("pause");
}