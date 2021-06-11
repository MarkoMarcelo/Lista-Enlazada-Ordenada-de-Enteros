#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

class Nodo{
    private:
        int element;
        Nodo *Next;
    public:
        Nodo (int v, Nodo *nxt=NULL){
            this->element=v;
            this->Next=nxt;
        }
        friend class Lista;
};
#endif 