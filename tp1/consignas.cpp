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