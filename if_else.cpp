#include <iostream>
using namespace std;

int main(){
    int hora, usd, total, extra;
    //Le estoy pidiendo al usuario que me de cuantas horas trabajo y cuanto le pagan por hora
    cout << "Ingrese las horas trabajadas: " << endl;
    cin >> hora;
    cout << " Ingrese cuanto le pagan por hora: " << endl;
    cin >> usd;
    total = hora * usd;
 
    if (hora >= 40 )//Si trabajo mas de 40 horas su pago sera multiplicado por 1.5 por las hora extras
    {
        extra = total * 1.5;//Total de pago mas las horas extras trabajadas
        cout << "Este es el pago mas las horas extras trabajadas: "<< endl;
        cout << "$" << extra;
    }else if(hora <= 39)//si trabajo menos de 39 horas su pago seria normal
    {
         cout << "Este es el total en efectivo de horas trabajadas" << endl;
        cout << "$" << total;
        total = hora * usd;//Pago normal de las horas 
    }
    

    return 0;
}