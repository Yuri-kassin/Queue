#include <iostream>
#include "Queue.hpp"

using namespace std;


int main(){
    int i = 2;
    Queue<int> x(5);
    x.Adiciona(1);
    x.Adiciona(i);
    x.Adiciona(3);
    x.Adiciona(4);
    x.Adiciona(5);
    cout<<x.Retirar()<<endl;
    cout<<x.Retirar()<<endl;
    cout<<x.Retirar()<<endl;

    x.Adiciona(6);
    x.Adiciona(7);
    x.Adiciona(8);
    puts("kek");
    for (int i = 0; i < 5; ++i) cout<<x.Retirar()<<endl;

    return 0;
}