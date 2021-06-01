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
};

Producto::Producto(int id, string nombre, double Cprecio, double Vprecio, int q)
{
	productoId = id;
	productoNombre = nombre;
	precioCompra = Cprecio;
	precioVenta = Vprecio;
	cantidad = q;
	cantidadVendida = 0;
}

int Producto::getProductoId() const {
	return productoId;
}

string Producto::getProductoNombre() const {
	return productoNombre;
}

double Producto::getPrecioCompra() const
{
	return precioCompra;
}

double Producto:: getPrecioVenta() const
{
	return precioVenta;
}
int Producto::getCantidadVendida() const
{
	return cantidadVendida ;
}
int main()
{
	Producto Producto1 (1, "chips", .99 , 1.99, 50);
	Producto Producto2 (2, "pepsi", 1.99 , 2.99, 50);
	Producto Producto3 (3, "oranges", 5.00, 10.00, 50);
	Producto Producto4 (4, "chocolate", 0.50, 0.99, 50);
	Producto Producto5(5, "gum", 0.10 , 0.99 , 50);
	Producto Producto6 (6, "bread", 1.99 , 2.50, 50);
	Producto Producto7 (7, "ice cream" , 1.00 , 3.00, 50);
	Producto Producto8 (8, "apples" , 2.00 , 4.00, 50);
	Producto Producto9 (9, "peanut butter", 1.00 , 3.00 , 50);
	Producto Producto10 (10, "eggs", 2.00 , 5.00 , 50);
	Producto Producto11 (11, "chips", .99 , 1.99, 50);
	Producto Producto12 (12, "pepsi", 1.99 , 2.99, 50);
	Producto Producto13 (13, "oranges", 5.00, 10.00, 50);
	Producto Producto14 (14, "chocolate", 0.50, 0.99, 50);
	Producto Producto15 (15, "gum", 0.10 , 0.99 , 50);
	Producto Producto16 (16, "bread", 1.99 , 2.50, 50);
	Producto Producto17 (17, "ice cream" , 1.00 , 3.00, 50);
	Producto Producto18 (18, "apples" , 2.00 , 4.00, 50);
	Producto Producto19 (19, "peanut butter", 1.00 , 3.00 , 50);
	Producto Producto20 (20, "eggs", 2.00 , 5.00 , 50);
	int opcion, opcion2;
    bool repetir = 0;

    do
    {
        system("cls");
	cout<< "¿Que deseas hacer?" <<endl;
	cout<< "1. Vender" << endl;
	cout<< "2. Restock" <<endl;
	cout<< "3. CalcProfits" <<endl;
	cout<< "(Enter A Number That Corresponds With Choice)" <<endl;
	cin>> opcion;
	switch (opcion)
        {
        case 1:
		cout<< "¿Que vas a vender?"<<endl;
		cout<< "1. Producto1"<<endl;
		cout<< "2. Preducto2" <<endl;
		cout<< "3. Producto3" <<endl;
		cout<< "4. Producto4" <<endl;
		cout<< "5. Producto5" <<endl;
		cout<< "6. Producto6" <<endl;
		cout<< "7. Producto7" <<endl;
		cout<< "8. Producto8" <<endl;
		cout<< "9. Producto9" <<endl;
		cout<< "10. Producto10" <<endl;
		cout<< "11. Producto11"<<endl;
		cout<< "12. Preducto12" <<endl;
		cout<< "13. Producto13" <<endl;
		cout<< "14. Producto14" <<endl;
		cout<< "15. Producto15" <<endl;
		cout<< "16. Producto16" <<endl;
		cout<< "17. Producto17" <<endl;
		cout<< "18. Producto18" <<endl;
		cout<< "19. Producto19" <<endl;
		cout<< "20. Producto20" <<endl;
		cin>> opcion2;
		if(opcion2 == 1)
		{
			int num;
			cout<< "El precio es" << " " << Producto1.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 2)
		{
		    int num;
			cout<< "El precio es" << " " << Producto2.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 3)
		{
		    int num;
			cout<< "El precio es" << " " << Producto3.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 4)
		{
		    int num;
			cout<< "El precio es" << " " << Producto4.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 5)
		{
		    int num;
			cout<< "El precio es" << " " << Producto5.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 6)
		{
		    int num;
			cout<< "El precio es" << " " << Producto6.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 7)
		{
		    int num;
			cout<< "El precio es" << " " << Producto7.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 8)
		{
		    int num;
			cout<< "El precio es" << " " << Producto8.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 9)
		{
		    int num;
			cout<< "El precio es" << " " << Producto9.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 10)
		{
		    int num;
			cout<< "El precio es" << " " << Producto10.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 11)
		{
			int num;
			cout<< "El precio es" << " " << Producto11.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 12)
		{
		    int num;
			cout<< "El precio es" << " " << Producto12.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 13)
		{
		    int num;
			cout<< "El precio es" << " " << Producto13.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 14)
		{
		    int num;
			cout<< "El precio es" << " " << Producto14.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 15)
		{
		    int num;
			cout<< "El precio es" << " " << Producto15.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 16)
		{
		    int num;
			cout<< "El precio es" << " " << Producto16.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 17)
		{
		    int num;
			cout<< "El precio es" << " " << Producto17.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 18)
		{
		    int num;
			cout<< "El precio es" << " " << Producto18.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 19)
		{
		    int num;
			cout<< "El precio es" << " " << Producto19.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;

		}
		if(opcion2 == 20)
		{
		    int num;
			cout<< "El precio es" << " " << Producto20.getPrecioVenta() << endl;
			cout<< "¿Cuantas vas a vender?" <<endl;
			cin>> num;
			break;
		}
    }
    } while (1);

    return 0;
}
void sumar()
{
    int numero1, numero2;
    float resultado;

    cout << precioVenta;
    cin >> numero1;

    cout << precioVenta;
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 + numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}

void restar()
{
    int numero1, numero2;
    float resultado;

    cout << cantidadVendida;
    cin >> numero1;

    cout << cantidadVendida;
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 - numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}
