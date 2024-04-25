// Materia: Programación I, Paralelo 1
// Autor: Rosslyn Monserrat Cespedes Quisbert
// Fecha creación: 11/04/2024
// Fecha modificación: /04/2024
// Número de ejercicio: 16
// Problema planteado: Establezca una estructura para almacenar datos relativos a los N libros o revistas científicas de una biblioteca. Por cada libro o revista científica, mostrar la siguiente información:
// a) Numero de referencia.
// b) Titulo
// c) Nombre del autor
// d) Editorial
// e) Clase de publicación (libro o revista)
// f) Numero de edición (solo libros)
// g) Año de publicación (solo libros)
// h) Nombre de la revista (solo revistas

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Definimos estructura
struct Datos
{
    double Numero_de_referencia;
    char Titulo[50];
    char Nombre_autor[40];
    char Editorias[50];
    string clase_de_publicacion;
    int numero_edicion; //Solo libros
    double año_publicacion; //Solo Libro
    string nombre_de_revista; //Solo revista
};

//Funcion prototipo
Datos ingresar_datos();
void mostrar_datos(const Datos& publicacion);

int main ()
{
    int N;
    cout <<"Ingrese la cantidad de Libros o Revistas: ";
    cin >> N;

    vector<Datos> Biblioteca (N);

    for (int i = 0; i < N; ++i)
    {
        cout<<endl;
        cout <<"INGRESE LOS DATOS DE LA PUBLICACION " << i+1 <<": "<< endl;
        cout << endl;
        Biblioteca[i] = ingresar_datos();
    }
    for (const auto& publicacion : Biblioteca)
    {
        mostrar_datos(publicacion);
    }   
    cout <<endl;
    return 0;
}

Datos ingresar_datos()
{
    Datos publicacion;

    cout <<"Ingrese el numero de referencia: ";
    cin >> publicacion.Numero_de_referencia;
    cin.ignore();
    cout <<"Ingrese el Titulo: ";
    cin >> publicacion.Titulo;
    cout <<"Ingrese el nombre del autor: ";
    cin >> publicacion.Nombre_autor;
    cout <<"Ingrese la editorial: ";
    cin >> publicacion.Editorias;
    cout <<"Ingrese la clase de publicacion (Libro o Revista): ";
    cin >> publicacion.clase_de_publicacion;

    if (publicacion.clase_de_publicacion == "Libro")
    {
        cout <<"Ingrese el numero de edicion: ";
        cin >> publicacion.numero_edicion;
        cout <<"Ingrese el anio de publicacion: ";
        cin >> publicacion.año_publicacion;
    }
    else if (publicacion.clase_de_publicacion == "Revista")
    {
        cout <<"Ingrese el nombre de la revista: ";
        cin >> publicacion.nombre_de_revista;
    }

    return publicacion;
}

void mostrar_datos(const Datos& publicacion)
{
    cout <<endl;
    cout <<"LIBROS Y REVISTAS REGISTRADAS EXITOSAMENTE" << endl;
    cout << endl;
    cout <<" ***** Lista de registro *****";
    cout << endl;
    cout <<"Numero de referencia: " << publicacion.Numero_de_referencia << endl;
    cout <<"Titulo: " << publicacion.Titulo << endl;
    cout <<"Nombre de autor: " << publicacion.Nombre_autor << endl;
    cout <<"Editorial: " << publicacion.Editorias << endl;
    cout <<"Clase de publicacion: " << publicacion.clase_de_publicacion << endl;

    if (publicacion.clase_de_publicacion == "Libro")
    {
        cout <<"Numero de edicion: " << publicacion.numero_edicion << endl;
        cout <<"Anio de publicacion: " << publicacion.año_publicacion << endl;
    }
    else if (publicacion.clase_de_publicacion == "Revista")
    {
        cout <<"Nombre dee la revista: " << publicacion.nombre_de_revista << endl;
    }
}