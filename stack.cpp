// IMPLEMENTAÇÃO DO TAD STACK

#include <iostream>
 
using namespace std;

class Pilha
{
    private:
        int * vet;
        int max_tam;
        int topo;
    
    public:
        Pilha()
            {
               vet = new int[100];
               max_tam = 99;
               topo = -1;
            }
        ~Pilha()
        {
            delete[] vet;
        }
        void empilhar(int e)
        {
            if(topo == max_tam)
                cout << "Pilha Cheia!" << endl;
            else
                vet[topo++] = e;
        }
        void desempilhar()
        {
            if(topo == -1)
                cout << "pilha vazia!" << endl;
            else
                topo--;
        }
        int getTopo()
        {
            if(topo != -1)
                return vet[topo];
            else
                return -1;
        }
        int vazia()
        {
            return(topo == -1);
        }
};

int main()
{
    Pilha p;

    cout << "pilha vazia" << p.vazia() << endl;
    cout<< Topo << p.getTopo() << endl;

    return 0; 
}

