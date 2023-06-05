// P017.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <random>
#include <locale.h>


int main()
{
    int opcion;
    std::cout << " Que matriz deseas ver? " << std::endl;
    std::cout << " 1. Matriz de 3x3 " << std::endl;
    std::cout << " 2. Matriz de 5x5 " << std::endl;
    std::cout << " 3. Matriz de 10x10 " << std::endl;
    std::cin >> opcion;

    srand(time(NULL)); // Semillero - Toma el reloj para generar un #aleatorio

    //Declarar la matriz
    int mat[3][3];
    int mat1[5][5];
    int mat2[10][10];

    //Ingresar datos aleatorios a la matriz
    
    switch (opcion) {

    case 1:

    for (int i = 0; i < 3; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 3; j++)//Ciclo para acceder a columnas
        {
            mat[i][j] = rand() % 10;
        }
    }

for (int i = 0; i < 3; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 3; j++)//Ciclo para acceder a columnas
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
        
    }
break;

    case 2:

    for (int i = 0; i < 5; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 5; j++)//Ciclo para acceder a columnas
        {
            mat1[i][j] = rand() % 10;
        }
    }


for (int i = 0; i < 5; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 5; j++)//Ciclo para acceder a columnas
        {
            std::cout << mat1[i][j] << "  ";
        }
        std::cout << std::endl;
        
    }
break;

    case 3:

    for (int i = 0; i < 10; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 10; j++)//Ciclo para acceder a columnas
        {
            mat2[i][j] = rand() % 10;
        }
    }
for (int i = 0; i < 10; i++)//ciclo para acceder a filas
    {
        for (int j = 0; j < 10; j++)//Ciclo para acceder a columnas
        {
            std::cout << mat2[i][j] << " ";
        }
        std::cout << std::endl;
    }
break;
    }

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
