
#ifndef QUEUE_QUEUE_HPP
#define QUEUE_QUEUE_HPP

using namespace std;
template <typename T>
class Queue {
private:
    T * v;
    int i,f;
    int tamanho;
public:
    Queue(int valor):i(0),f(0),tamanho(valor+1){
        v = new T[tamanho+1];
    }

    bool Adiciona(T valor){
        if(tamanho==i+f) return false;
        v[f] = valor;
        f =(f+1)%tamanho;
//        cout<<"f "<<f<<endl;
        return true;
    };

    T Retirar(){
//        cout<<i<<" "<<f<<endl;
        if(i==f) return v[i];
        int aux = i;
        i = (i+1)%tamanho;

        return v[aux];
    }
};


#endif //QUEUE_QUEUE_HPP
