//RESPUESTAS A CONSIGNAS DEL TP2 DE INFORMÁTICA
#include <iostream>
using namespace std;

int main(){
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
/*Complete el siguiente programa de C++ para que solicite se ingrese por teclado las 
coordenadas x0 e y0 de un punto en R2. Si el punto está en el primer cuadrante, 
mostrar por pantalla el mensaje: "El punto pertenece al primer cuadrante". 
Se debe considerar que el punto está en el primer cuadrante cuando se cumple que x0 es mayor que 
cero y que y0 es mayor o igual a cero..*/
int x0,y0;
cout<<"Igrese la coordenada x0 de R2: ";
cin>>x0;
cout<<endl;
cout<<"Igrese la coordenada y0 de R2: ";
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

