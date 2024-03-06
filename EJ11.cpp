// Materia: Programación I, Paralelo 1
// Autor: Willy Edwin Tenorio Palza
// Fecha creación: 22/02/2024
// Fecha modificación: 23/02/2024
// Número de ejercicio: 11
// Problema planteado: Almacene en un arreglo las edades de varias personas (hasta ingresar un -1) y a partir de
//este arreglo determine la desviación típica.
#include <iostream> 
#include <vector>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    int edad, N=0, x=0;
    float media, total=0, desviacion;
    vector <int> edades; // Vector vacio para un x numero de edades
    do{
        cout << "\nIngrese la edad: ";  // Ingresamos datos hasta ingresar un -1
        cin >> edad; 
        if (edad != -1) {  // Agregamos las edades en el vector vacio
            edades.push_back(edad);
            N++;}
    } while (edad!=-1);

    for (int i =0; i <N; i++){   //Calculamos la media
        x += edades[i];
    }
    media = x/N;
    for (int i =0; i <N; i++){ // Calculamos el resultado final
        total += pow(edades[i]-media, 2);
    }
    desviacion = sqrt(total/N);
    cout << "La desviacion tipica es de "<< fixed << setprecision(2) << desviacion << endl;
    
    return 0;
}