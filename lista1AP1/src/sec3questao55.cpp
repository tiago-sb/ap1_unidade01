/**
Encontrar n�meros primos � uma tarefa dif�cil. Fa�a um programa que gera uma lista dos n�meros
primos existentes entre 1 e um n�mero inteiro informado pelo usu�rio.
*/

#include <iostream>

using namespace std;

int main(){
    int v, cont;
    cout << "Insira um valor natural maior que zero: ";
    cin >> v;
    //la�o que priva o usu�rio de insirir valores n�o permitidoss
    while((v < 0)){
        cin >> v;
    }
    for(v; v >= 1; v--){
        cont = 0;
        for(int k = 1; k <= v; k++){
            if((v % k == 0)){
                cont++;
            }
        }
        if(cont <= 2){
            cout << v << " ";
        }
    }

    return 0;
}
