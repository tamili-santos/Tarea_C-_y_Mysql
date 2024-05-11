


#include <iostream>
#include"Cliente.h"
using namespace std;


int main()
    
   
     {
        string nit, nombres, apellidos, direccion, fecha_nacimiento;
        int telefono;
        cout << "Ingrese Nit: ";
        getline(cin, nit);
        cout << "Ingrese nombres: ";
        getline(cin, nombres);
        cout << "Ingrese apellidos: ";
        getline(cin, apellidos);
        cout << "Ingrese direccion: ";
        getline(cin, direccion);
        cout << "Ingrese telefono: ";
        cin >> telefono;
        cin.ignore();
        cout << "Ingrese fecha de nacimiento: ";
        cin >> fecha_nacimiento;

        
        
        
        Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
        c.crear();
        c.leer();
        system("pause");
        return 0;
    }
    

       

