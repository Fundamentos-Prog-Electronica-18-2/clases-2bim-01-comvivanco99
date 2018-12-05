#include <iostream>

using namespace std;


void multiplicar(int valorTabla, int limite){
    int contador = 1;
    while(contador <= limite){
        int operacion = valorTabla * contador;
        cout<< valorTabla << " * " << contador << " = " << operacion <<endl ;
        contador = contador + 1;
    }

}

void sumar(int valorTabla, int limite){
    for(int i=1; i<=limite; i++){
        int operacion = valorTabla + i;
        cout<<  valorTabla << " + " << i << " = " << operacion <<endl;
    }

}

int main()
{
    int valorTabla;
    int limite;
    int opcion;
    cout << "Ingrese el valor de la tabla: " << endl;
    cin >> valorTabla;

    cout << "Ingrese el limite: " << endl;
    cin >> limite;

    cout << "Ingrese una opcion (1 o 2): " << endl;
    cin >> opcion;

    if(opcion==1){
        multiplicar(valorTabla, limite);
    }else{
        if(opcion==2){
        sumar(valorTabla, limite);
    }else{
        cout<<"Opcion incorrecta"<<endl;
    }
   }
    return 0;
}
