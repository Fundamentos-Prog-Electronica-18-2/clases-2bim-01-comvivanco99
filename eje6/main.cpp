#include <iostream>

using namespace std;

int obtenerEdad(int anioActual, int nacimiento){
    int valor = anioActual - nacimiento;
    return valor;
}

int main()
{
    string nombre;
    string apellido;
    int nacimiento;
    int edad;
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;

    cout << "Ingrese su apellido: " << endl;
    cin >> apellido;

    cout << "Ingrese su año de nacimiento: " << endl;
    cin >> nacimiento;

    edad = obtenerEdad(2018, nacimiento);
    cout<<endl;
    cout << "Nombre: "<< " " <<nombre<<endl;
    cout << "Apellido: "<< " " <<apellido<<endl;
    cout << "edad: "<<  edad <<endl;

    return 0;
}
