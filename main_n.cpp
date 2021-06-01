#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

#define numlim  200 //Numero maximo de cosos en el inventario

using namespace std;

struct Inventario{
    string nombre;
    int cantidad;
    double precio;
};

void addProd(Inventario list[], int& size); //agregar producto al inventario
//void dispProd(Inventario list[], int size); //mostrar todo el inventario
//void rmProd(Inventario list[], int size); //eliminar producto
//void wrFile(Inventario list[], int size); //escribir el inventario en un archivo de texto
//void rdFile(string path, Inventario list[], int& size); //leer el inventario de un archivo de texto
int menuAns(); //menu 

int main(){

    Inventario lista[numlim];
    bool run =true;
    int size=0;
    do{
        cout << "\t\tInventario\t\t" << endl;
        cout << "\tActualmente hay "<<size<<" productos en el inventario" << endl;
        switch(menuAns()){
            
            case 1:
                addProd(lista, size);
                break;
            case 2: break;
            case 3: break;
            case 4: break;
            case 5: run=false; break;
            default: cout << "\tOpcion invalida, intenta de nuevo :(" << endl;
        }
    }while(run);

    cout << "\n\n\tGracias por usar el servicio de Inventario UAQ :D\n"; 

    return 0;
}

void addProd(Inventario list[], int& size){
    Inventario aux;
    char ans1;
    if(size>=numlim){
        cout << "\n\n\tInventario lleno D:\n\tElimina productos no necesarios o incrementa la capacidad :D" << endl; 
        return;
    }
    cout << "\nNombre del producto:\n\t";
    cin >> aux.nombre;
    cout << "\nCantidad:\n\t";
    cin >> aux.cantidad;
    cout << "\nPrecio:\n\t";
    cin >> aux.precio;
    cout << "Confirmas que deseas agregar el producto al inventario? (s/n)\t";
    cin >> ans1;
    if (ans1=='s')
        list[size++] = aux;
    return;
}

int menuAns(){

    int ans;
    cout << "\n\nEscoge una opcion\n\n\t1 - Agregar productos\n\t2 - Remover productos\n\t3 - Guardar inventario en archivo\n\t4 - Leer inventario de archivo\n\t5 - Salir\n\n";
    cin >> ans;
    
    return ans;
}

