//RESPUESTAS A CONSIGNAS DEL TP2 DE INFORMÁTICA
#include <iostream>
using namespace std;

int consigna_1(){
/*Escribir un programa en C++ que solicite se ingrese un número flotante por teclado y 
muestre por pantalla el mensaje "El valor es negativo" unicamente en el caso de que 
el valor ingresado sea menor estricto que cero.*/

    float numero;
    cin>>numero;
    if(numero<0){
        cout<<"El valor es negativo";
    }else{cout<<"El numero es positivo";};
}

//---------------------------------------------------------------------------
#include <iostream>
using namespace std;

int consigna_2(){
/* Complete el siguiente programa de C++ para que solicite se ingrese por teclado las 
coordenadas x0 e y0 de un punto en R2. Si el punto está en el primer cuadrante, 
mostrar por pantalla el mensaje: "El punto pertenece al primer cuadrante". 
Se debe considerar que el punto está en el primer cuadrante cuando se cumple que x0 es mayor que 
cero y que y0 es mayor o igual a cero.. */
    int x0,y0;
    cout<<"Ingrese la coordenada x0 de R2: ";
    cin>>x0;
    cout<<endl;
    cout<<"Ingrese la coordenada y0 de R2: ";
    cin>>y0;
    //primer cuadrante ++ , segundo cuadrante -+ , tercer cuadrante -- ,  cuarto cuadrante +-

    if(x0>0 && y0>0){
        cout<<"Esa coordenada se encuentra dentro del primer cuadrante";
        }else if(x0<0 && y0>0){
            cout<<"Esa coordenada se encuentra en el segundo cuadrante";
            }else if(x0<0 && y0<0){
                cout<<"Esa coordenada está en el tercer cuadrante";
                }else if(x0>0 && y0<0){
                    cout<<"Esa coordenada se encuentra en el cuarto cuadrante";
                    }

}

//---------------------------------------------------------------------------
#include <cctype> 
int consigna_3(){
/*Escriba un programa en c++ que solicite se ingrese por teclado un caracter y lo guarde en una variable c. 
Si el caracter ingresado es una letra minúscula debe remplazarse por la mayúscula correspondiente (por ejemplo: si se 
ingresa 'k' debe remplazarse el contenido de c por 'K'). En caso de que el caracter ingresado no sea una letra 
minúscula el valor debe quedar intacto. Luego se debe mostrar por pantalla el contenido de la variable c, 
que en ningún caso puede ser una minúscula.  */

    char c;
    cin>>c;

    if(islower(c)){
        c=toupper(c);
        }
    cout<<c;

}

int consigna_4(){
    /*Escribir un programa en C++ que solicite se ingrese un número flotante por teclado y muestre por pantalla el mensaje "El valor es negativo" en caso de que el valor ingresado sea negativo y el mensaje "El valor es no negativo" en caso contrario.*/

    float flotante;
    cin>>flotante;

    if(flotante<0){
        cout<<"El valor es negativo";
    } else{cout<<"El valor es no negativo";}

}

int consigna_5(){
    /*Escribir un programa en C++ que solicite se ingrese un número real x por teclado y luego muestre por pantalla el resultado de evaluar x en la función discontinua*/
    int x;
    cout<<"Ingrese un numero real x por teclado: ";
    cin>>x;
    int MenorIgualA10= x*x-3;
    int MayorA10=x*x;
    if (x<=10){
        cout<<MenorIgualA10;
    }else if(x>10){
        cout<<MayorA10;
    }

}

int consigna_6(){
    /*Escriba un programa en c++ que solicite se ingrese por teclado un caracter y lo guarde en una variable c. Si el caracter ingresado es una letra minúscula debe mostrar por pantalla la mayúscula correspondiente (ejemplo: si se ingresa una 'k' se debe mostrar una 'K'). En caso contrario (el caracter ingresado no es una letra minúscula) se debe mostrar por pantalla el mensaje "El caracter x no se puede convertir" remplazando x por el caracter ingresado.*/
    char c;
    cin>>c;
    if(islower(c)){
        c=toupper(c);
        cout<<c;
    }else{
        cout<<"El caracter "<<c<<" no se puede convertir";
        }
}

int consigna_7(){
    /*Escribir un programa en C++ que solicite se ingrese un número flotante por teclado y muestre por pantalla el mensaje "El valor es negativo" en caso de que el valor ingresado sea negativo, el mensaje "El valor es positivo" en caso que sea positivo y el mensaje "El valor es cero" en caso de no cumplirse las dos primeras condiciones.*/

    float flotante;
    cin>>flotante;

    if(flotante<0){
        cout<<"El valor es negativo";
    } else if(flotante>0){cout<<"El valor es positivo";}else{cout<<"El valor es 0";}


}