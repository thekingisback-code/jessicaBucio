#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Tienda
{
private:
    int venta;
    int calcprofits;
};
class Producto
{
private:
    int productoId;
    string productoNombre;
    double precioCompra;
    double precioVenta;
    int cantidad;
    int cantidadVendida;
public:
    Producto(int id, string nombre, double Cprecio, double Vprecio, int q);
    int getProductoId() const;
    string getProductoNombre() const;
    double getPrecioCompra() const;
    double getPrecioVenta() const;
    int getCantidadVendida() const;
    void venderProducto();
};

Producto::Producto(int id, string nombre, double Cprecio, double Vprecio, int q){
    productoId = id;
    productoNombre = nombre;
    precioCompra = Cprecio;
    precioVenta = Vprecio;
    cantidad = q;
    cantidadVendida = 0;
}
int Producto::getProductoId() const{
    return productoId;
}
string Producto::getProductoNombre() const{
    return productoNombre;
}
double Producto::getPrecioCompra() const{
    return precioCompra;
}
double Producto:: getPrecioVenta() const{
    return precioVenta;
}
int Producto::getCantidadVendida() const{
    return cantidadVendida ;
}
void Producto::venderProducto(){
    cantidadVendida++;
}


int main(){

    Producto Producto1 (1, "Chips", .99, 1.99, 50);
    Producto Producto2 (2, "Pepsi", 1.99, 2.99, 50);
    Producto Producto3 (3, "Naranjas", 5.00, 10.00, 50);
    Producto Producto4 (4, "Chocolate", 0.50, 0.99, 50);
    Producto Producto5 (5, "Gum", 0.10, 0.99, 50);
    Producto Producto6 (6, "Bread", 1.99, 2.50, 50);
    Producto Producto7 (7, "Ice-cream", 1.00, 3.00, 50);
    Producto Producto8 (8, "Apples", 2.00, 4.00, 50);
    Producto Producto9 (9, "Peanut butter", 1.00, 3.00, 50);
    Producto Producto10 (10, "Eggs", 2.00, 5.00, 50);
    Producto Producto11 (11, "Condones", .99, 1.99, 50);
    Producto Producto12 (12, "Coke", 1.99, 2.99, 50);
    Producto Producto13 (13, "Zanahorias", 5.00, 10.00, 50);
    Producto Producto14 (14, "Chocolate blanco", 0.50, 0.99, 50);
    Producto Producto15 (15, "Condones de mora", 0.10, 0.99, 50);
    Producto Producto16 (16, "Pan viejo", 1.99, 2.50, 50);
    Producto Producto17 (17, "Paleta", 1.00, 3.00, 50);
    Producto Producto18 (18, "Papitas", 2.00, 4.00, 50);
    Producto Producto19 (19, "Maruchan", 1.00, 3.00, 50);
    Producto Producto20 (20, "Gansitos", 2.00, 5.00, 50);
    int opcion, opcion2;
    bool repetir = 0;

    do
    {
        //system("cls");
        cout<< "Que deseas hacer?" <<endl;
        cout<< "1. Vender" << endl;
        cout<< "2. Restock" <<endl;
        cout<< "3. CalcProfits" <<endl;
        cout<< "(Enter A Number That Corresponds With Choice)" <<endl;
        cin>> opcion;
        switch (opcion)
        {
        case 1:
            cout<< "Que vas a vender?"<<endl;
            cout<< "1. "<< Producto1.getProductoNombre() <<endl;
            cout<< "2. "<< Producto2.getProductoNombre() <<endl;
            cout<< "3. "<< Producto3.getProductoNombre() <<endl;
            cout<< "4. "<< Producto4.getProductoNombre() <<endl;
            cout<< "5. "<< Producto5.getProductoNombre() <<endl;
            cout<< "6. "<< Producto6.getProductoNombre() <<endl;
            cout<< "7. "<< Producto7.getProductoNombre() <<endl;
            cout<< "8. "<< Producto8.getProductoNombre() <<endl;
            cout<< "9. "<< Producto9.getProductoNombre() <<endl;
            cout<< "10. "<< Producto10.getProductoNombre() <<endl;
            cout<< "11. "<< Producto11.getProductoNombre() <<endl;
            cout<< "12. "<< Producto12.getProductoNombre() <<endl;
            cout<< "13. "<< Producto13.getProductoNombre() <<endl;
            cout<< "14. "<< Producto14.getProductoNombre() <<endl;
            cout<< "15. "<< Producto15.getProductoNombre() <<endl;
            cout<< "16. "<< Producto16.getProductoNombre() <<endl;
            cout<< "17. "<< Producto17.getProductoNombre() <<endl;
            cout<< "18. "<< Producto18.getProductoNombre() <<endl;
            cout<< "19. "<< Producto19.getProductoNombre() <<endl;
            cout<< "20. "<< Producto20.getProductoNombre() <<endl;

            if(opcion2 == 1){
                int num;
                cout<< "El precio es" << " " << Producto1.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 2){
                int num;
                cout<< "El precio es" << " " << Producto2.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 3){
                int num;
                cout<< "El precio es" << " " << Producto3.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 4){
                int num;
                cout<< "El precio es" << " " << Producto4.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 5){
                int num;
                cout<< "El precio es" << " " << Producto5.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 6){
                int num;
                cout<< "El precio es" << " " << Producto6.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 7){
                int num;
                cout<< "El precio es" << " " << Producto7.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 8){
                int num;
                cout<< "El precio es" << " " << Producto8.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 9){
                int num;
                cout<< "El precio es" << " " << Producto9.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 10){
                int num;
                cout<< "El precio es" << " " << Producto10.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 11){
                int num;
                cout<< "El precio es" << " " << Producto11.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 12){
                int num;
                cout<< "El precio es" << " " << Producto12.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 13){
                int num;
                cout<< "El precio es" << " " << Producto13.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 14){
                int num;
                cout<< "El precio es" << " " << Producto14.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 15){
                int num;
                cout<< "El precio es" << " " << Producto15.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 16){
                int num;
                cout<< "El precio es" << " " << Producto16.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 17){
                int num;
                cout<< "El precio es" << " " << Producto17.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 18){
                int num;
                cout<< "El precio es" << " " << Producto18.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 19){
                int num;
                cout<< "El precio es" << " " << Producto19.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
            if(opcion2 == 20){
                int num;
                cout<< "El precio es" << " " << Producto20.getPrecioVenta() << endl;
                cout<< "Cuantas vas a vender?" <<endl;
                cin>> num;
                break;
            }
        }
    }while (1);

    return 0;
}
/*
void sumar()
{
    int numero1, numero2;
    float resultado;

    cout << getprecioVenta;
    cin >> numero1;

    cout << getprecioVenta;
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 + numero2;
    cout << "\tResultado: " << resultado << endl;

}

void restar()
{
    int numero1, numero2;
    float resultado;

    cout << getcantidadVendida;
    cin >> numero1;

    cout << getcantidadVendida;
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 - numero2;
    cout << "\tResultado: " << resultado << endl;

}
*/
