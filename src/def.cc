// Llamamos las librerias y funciones declaradas para definirlas
#include "header.h"

void AgregarProductos()
{
    std::system("cls"); // limpiamos la consola
    Producto p;         // llamamos el struct
    int n_producto;
    std::ofstream archivo("Inventario.txt", std::ios::app); // Abrimos los archivos

    std::cout << "Cuantos productos desea agregar?" << std::endl; // pedimos la cantidad de productos a agregar
    std::cin >> n_producto;
    // Ciclo for para guardar los datos
    for (int i = 0; i < n_producto; i++)
    {
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "Cual es el nombre de el producto?" << std::endl;
        std::cin >> p.nombre;
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "Cual es la cantidad del producto que entra?" << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
        std::cin >> p.cantidad_producto;
        std::cout << "Cual es el precio de el producto?" << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
        std::cin >> p.precio_producto;
        std::system("cls");

        inventario.push_back(p);

        // Escribe cada producto en el archivo
        if (archivo.is_open())
        {
            archivo << p.nombre << " " << p.cantidad_producto << " " << p.precio_producto << std::endl;
        }
    }
    if (archivo.is_open())
    {
        archivo.close();
    }
}

void CargarInventario()
// cargamos el inventario siempre
{
    inventario.clear();                      // limpiamos el vector
    std::ifstream archivo("Inventario.txt"); // creamos el archivo
    Producto p;                              // llamamos al struct
    if (archivo.is_open())
    {
        // Llenamos el vector con los archivos existentes en el txt
        while (archivo >> p.nombre >> p.cantidad_producto >> p.precio_producto)
        {
            inventario.push_back(p); // hacemos el
        }
        archivo.close(); // cerramos el archivo
    }
}

void MostrarProductos()
{
    CargarInventario(); // llamamos a el vector
    system("cls");
    std::cout << "------Listado de productos------" << std::endl;
    for (const auto &p : inventario)
    {
        std::cout << "---------------------------" << std::endl;
        std::cout << "Nombre: " << p.nombre << std::endl;
        std::cout << "Cantidad en stock: " << p.cantidad_producto << std::endl;
        std::cout << "Precio por unidad: $" << p.precio_producto << std::endl;
        std::cout << "---------------------------" << std::endl;
    }
}

void EliminarProductos()
{
}

void BuscarProductos()
{
}

void EditarProductos()
{
}