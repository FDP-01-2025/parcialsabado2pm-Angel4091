#include <iostream>
using namespace std;

int main(){
    int numero, base = 2;
    int total;

    cout << "Escribe el numero: " << endl;
    cin >> numero;
    cout << endl;


    for (int i = 1; i <= numero; i++)
    {
        total = base * i;
        cout << total << "\n";   
    }
    
    
    

    return 0;
}