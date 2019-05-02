/*Nicol�s Col�n
TP 2 - Ejemplo Tipos
02052019*/
/*
El programa calcula autom�ticamente si un alumno tiene la asistencia en condiciones para aparobar la cursada.
-Tipo de dato bool: Se usa en el programa para que quede registro de si el alumno est� en condiciones de aprobar la cursada.
-Tipo de dato char: Es el c�digo de la materia.
-Tipo de dato int: Es la cantidad total de clases de la materia en todo el a�o.
-Tipo de dato double: Es la cantidad total de minutos de clase de la materia en todo el a�o.
-Tipo de dato string: Es el nombre de la materia completo
-En la funci�n IF, se determina si el alumno asisti� al 75% de las clases, ya que 360000 es el 75% de 480000, lo que es el resultado
de multiplicar la cantidad de clases (40) por la cantidad de minutos totales (12000).
-En �ste caso se entiende que el alumno asisti� a todas las clases a tiempo completo en cada una de ellas.
*/
#include <iostream>

using namespace std;

int main()
{

bool b0;
char c0 = 'A';
int i0 = 40;
double d0 = 12000;
string s0 = "Algoritmos y Estructura de Datos";

if (i0 * d0 > 360000){

    b0 = true;
    cout<<"La materia '"<<s0<<"' de codigo '"<<c0<<"' esta en condiciones de ser aprobada"<<endl;
}else{
    b0 = false;
    cout<<"La materia '"<<s0<<"' de codigo '"<<c0<<"' NO esta en condiciones de ser aprobada"<<endl;
}
return 0;
}
