#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include "Nodo.h"

using namespace std;

class Lista{
    private:
        Nodo *primero;
        Nodo *actual;
        bool ListaVacia(){
            return (this->primero==NULL);
        }

    public: 
        Lista(){
            this->primero=NULL;
            this->actual=NULL;
        }

    void Insertar(int v){
        Nodo *nuevo = new Nodo(v);
        if (ListaVacia()){
            this->primero=nuevo;
        }
        else{
            this->actual->Next=nuevo;
        }
        this->actual=nuevo;
    }
    void Print(){ 
        Nodo *tmp=this->primero;
        while(tmp){
            cout<<tmp->element<<"->";
            tmp=tmp->Next;
        }
        cout<<"NULL\n";
    }
};

#endif