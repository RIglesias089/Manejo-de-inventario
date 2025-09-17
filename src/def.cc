// Llamamos las librerias y funciones declaradas para definirlas
#include "header.h"

void AgregarProductos()
{
    std::system("cls");
    // determinamos el struct para guardar los datos
    Producto p;
    int n_producto;
    // Abrimos el archivo
    std::ofstream archivo("Inventario.txt", std::ios::app);

    std::cout << "Cuantos productos desea agregar?" << std::endl;
    std::cin >> n_producto;
    for (int i = 0; i < n_producto; i++)
    {
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "Cual es el nombre de el producto?" << std::endl;
        std::cin >> p.nombre;
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "Cual es la cantidad del producto que entra?" << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
        std::cin >> p.cantidad_producto;
        std::cout << "Cuaol es el precio de el producto?" << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
        std::cin >> p.precio_producto;
        std::system("cls");

        // agregamos los productos al final de el vector
        inventario.push_back(p);
    }

    if (archivo.is_open())
    {
        archivo << p.nombre << " " << p.cantidad_producto << " " << p.precio_producto << std::endl;
        archivo.close();
    }
}

void MostrarProductos()
{
    std::cout << "------Listado de productos------" << std::endl;
    std::cout << inventario.empty() << std::endl;
    std::cout << "Quieres editar algun producto de el inventario? (Y/N)" << std::endl;
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