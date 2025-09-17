// Llamamos las librerias y funciones declaradas para definirlas
#include "header.h"

struct Producto
{
    std::string nombre;
    int cantidad_producto;
    float precio_producto;
};

void AgregarProducto()
{
    // Determinamos el vector para los productos
    // vector <Tipo de dato> nombre vector; Usado para el inventario
    std::vector<Producto> inventario;
    Producto p; // determinamos el struct para guardar los datos
    int n_producto;
    std::cout << "Cuantos productos desea agregar?" << std::endl;
    std::cin >> n_producto;
    for (int i = 0; i < n_producto; i++)
    {
        std::cout << "Cual es el nombre de el producto?" << std::endl;
        std::cin >> p.nombre;
        std::cout << "Cual es la cantidad del producto que entra?" << std::endl;
        std::cin >> p.cantidad_producto;
        std::cout << "Cuaol es el precio de el producto?" << std::endl;
        std::cin >> p.precio_producto;
    }
}
