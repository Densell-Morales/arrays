#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "ctype.h"
using namespace  std;
void Escribir (){
ofstream archivo;
archivo.open("C:\\Users\\andre\\Desktop\\ejemplo.txt", ios::out); //abriendo archivo
if(archivo.fail()){
    cout << "No se pudo abrir el archivo";
    exit(1);
}
        archivo << "creando un archivo de text";
archivo.close();
}

void Leer(){
string texto;
ifstream archivo;
archivo.open("C:\\Users\\andre\\Desktop\\ejemplo.txt", ios :: in);
if(archivo.fail()){
    cout << "No se pudo abrir el archivo";
    exit(1);
}
while(!archivo.eof()){//mientras no sea el final del archivo
    getline(archivo,texto);
    cout<< texto << endl;
}
archivo.close();
}

