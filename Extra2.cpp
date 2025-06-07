#include <iostream>
using namespace std;

int main(){
    int estudiante, codigo, nota, consulta, calcular;

    cout << "Bienvenid la gestor de nota: " << endl;
    cout << "Ingrese su nombre: " << endl;
    cin >> estudiante;
    cout << " Ingrese su codigo: " << endl;
    cin >> codigo;
    
    cout << "Menu de opciones" << endl;
    cout << "1.Agregar nota" << endl;
    cout << "2.Consultar nota" << endl;
    cout << "3.Calcular promedio" << endl;
    cout << "4.Salir" << endl;
    int opcion;
    float n1,n2,n3,n4,n5,n6,n7,n8,n9;
    switch (opcion)
    {
    case 1:
        cout << "Escribe tus notas: " << endl;
        cin >> n1,n2,n3,n4,n5,n6,n7,n8,n9;
        break;
    case 2:
        cout << "Todas las notas son: " << endl;
        cout << n1,n2,n3,n4,n5,n6,n7,n8,n9;
        break;
    case 3:
        cout << "El calculo del promedio es: " << endl;
        cout << calcular / 9;
        calcular = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9;
        break;
    case 4:
        cout << "Saliendo..." << endl;
        break;
    
    default:
        break;
    }



    return 0;
}