#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=0;
    int b=0;
    int resultadosuma=0;
    int resultadoresta=0;
    int resultadomultiplicacion=0;
    int resultadodivision=0;


    cout    <<"Ingrese valor a:   "  <<    endl;
    cin >> a;   

    cout    <<"Ingrese valor b:   "  <<    endl;
    cin >> b;   

    resultadosuma=a+b; 
    cout    <<"La suma de los dos valores es:   "   <<  resultadosuma   <<  endl;


    resultadoresta=a-b; 
    cout    <<"La resta de los dos valores es:   "   <<  resultadoresta <<  endl;

    resultadomultiplicacion=a*b; 
    cout    <<"La multiplicacion de los dos valores es:   "   <<  resultadomultiplicacion   <<  endl;

    resultadodivision=a/b; 
    cout    <<"La division de los dos valores es:   "   <<  resultadodivision   <<  endl;



    return 0;
}
