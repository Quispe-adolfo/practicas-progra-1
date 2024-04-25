// Materia: Programación I, Paralelo 1
// Autor: Rosslyn Monserrat Cespedes Quisbert
// Fecha creación: 11/04/2024
// Fecha modificación: /04/2024
// Número de ejercicio: 9
// Problema planteado: Una infantería tiene n cantidad de reclutas. Se desea desarrollar un programa mediante arreglos para determinar cuántos infantes están inscritos en cada curso y con 
// cuantas mujeres y cuantos hombres cuenta la nación en estas especialidades dentro de esta fuerza.

#include <iostream>
#include <string>

using namespace std;

struct Recluta
{
    string Nombre;
    string Genero;
    string Curso;
};

//Prototipo de funcion
void Leer_dat(Recluta reclutas[], int N);
void Inscritos( const Recluta reclutas[], int M);
void Genero_suma(const Recluta reclutas[], int J);

int main ()
{
    int reclut;
    cout <<"Ingrese el numero de reclutas: ";
    cin >> reclut;
    cout <<endl;

    Recluta reclutas[reclut];
    Leer_dat(reclutas, reclut);

    Inscritos(reclutas,reclut);
    Genero_suma(reclutas,reclut);
    
    return 0;
}

//Ingresar datos
void Leer_dat(Recluta reclutas[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout <<"RECLUTA " << i+1 << ":" <<endl;
        cout <<"Nombre: ";
        cin >> reclutas[i].Nombre;
        cout <<endl;
        cout << "ESCRIBA LA LETRA CORRESPONDIENTE A SU GENERO" <<endl;
        cout <<"(F = femenino o M = masculino)"<<endl;
        cout <<"Genero: ";
        cin >> reclutas[i].Genero;
        cout << endl;
        cout <<"INGRESE EL NOMBRE DEL CURSO QUE DEA INGRESAR" <<endl;
        cout <<endl;
        cout <<"     ****(Escribalo correctamente)****"<<endl;
        cout <<endl;
        cout <<"Cursos disponibles: Dinamita o Flor"<<endl;
        cout <<endl;
        cout <<"Curso: ";
        cin >> reclutas[i].Curso;
        cout <<endl;
    }  
}

//contar cursos
void Inscritos( const Recluta reclutas[], int M)
{
    int curso_dinamita = 0;
    int curso_flor = 0;

    for (int i = 0; i < M; i++)
    {
        if (reclutas[i].Curso == "Dinamita")
        {
            curso_dinamita++;
        }
        else if (reclutas[i].Curso == "Flor")
        {
            curso_flor++;
        }
    }
    cout << "Inscripcion en el grupo Dinamita: " << curso_dinamita << endl;
    cout << "Inscripcion en el grupo Flor: " << curso_flor << endl;
}

void Genero_suma(const Recluta reclutas[], int J)
{   
    int M = 0;
    int F = 0;

    for (int i = 0; i < J; i++)
    {
        if (reclutas[i].Genero == "M")
        {
            M++;
        }
        else if (reclutas[i].Genero == "F")
        {
            F++;
        }
    }

   
    cout <<"Cantidad de hombres: " << M << endl;
    cout <<"Cantidad de Mujeres: " << F << endl;
}

