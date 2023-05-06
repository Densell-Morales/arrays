#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "ctype.h"
using namespace  std;

void Escribir (){

ofstream archivo;
archivo.open("Prueba.txt", ios::out); //abriendo archivo
if(archivo.fail()){
    cout << "No se pudo abrir el archivo";
    exit(1);
}
    archivo<<"Hola :v";
archivo.close();
}