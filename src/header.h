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

//Libreria para el guardado de datos en txt para que se mantenga existente
#include <fstream> 

// Declaramos las funciones a utilizar
struct Producto{};
void AgregarProducto();
void EliminarProducto();
void MosrarProductos();
void BuscarProducto();
void EditarProducto();

#endif
