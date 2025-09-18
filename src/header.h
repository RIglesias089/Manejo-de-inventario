// Declaracion de librerias

// Usado para evitar problemas de multiples inclusiones
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <windows.h>
#include <cstdlib>
//Llamamos a algorithm para recorrer de manera correcta el vector
#include <algorithm>

//Libreria para el guardado de datos en txt para que se mantenga existente
#include <fstream> 
// Declaramos las funciones a utilizar
struct Producto
{
    std::string nombre;
    int cantidad_producto;
    float precio_producto;
};
void AgregarProductos();
void EliminarProductos();
void MosrarProductos();
void BuscarProductos();
void EditarProductos();

//Veamos algo nuevo, como sincronizar un archivo txt a mi vector
void CargarInventario();


//Determinamos el vector a utlizar
std::vector<Producto> inventario;  // vector <Tipo de dato> nombre vector; Usado para el inventario
#endif
