/*
Altere o programa de c�lculo dos n�meros primos, informando, caso o n�mero n�o seja primo, os
n�meros pelos quais ele � divis�vel.
*/
#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL,"portuguese");
    int n, cont = 0;
    cin >> n;

    if(n < 0){
        while(n < 0){
            cin >> n;
        }
    }

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }

    return 0;
}
