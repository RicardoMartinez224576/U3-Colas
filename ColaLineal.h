#include <cstdlib>
#include <iostream>

using namespace std;

const int MAXTAMQ=6;
class ColaLineal
{
private:
    int frente;
    int final;
    int listaCola[MAXTAMQ];
public:
    ColaLineal()
    {
        frente=0;
        final=-1;
    }
    void insertar(const int elemento);
    int quitar();
    void borrarCola();
    int frenteCola();
    bool colaVacia();
    bool colaLlena();
};
    //operaciones de modificación de la cola
    void ColaLineal::insertar(const int elemento)
    {
        if(!colaLlena())
        {
                final=final+1;
                listaCola[final]=elemento;
        }
        else
        throw "OverFlow en la cola";    
    }
    int ColaLineal::quitar()
    {
        if(!colaVacia())
        {
           return listaCola[frente++];
        }
        else
        throw "Cola vacia";
    }
    void ColaLineal::borrarCola()
    {
        frente=0;
        final=-1;
    }
    //acceso a la cola
    int ColaLineal::frenteCola()
    {
       if(!colaVacia())
       {
              return listaCola[frente];       
       }
       else
          throw "Cola vacia";
    }
    //Métodos de verificación del estado de la cola
    bool ColaLineal::colaVacia()
    {
        return frente>final;
    }
    bool ColaLineal::colaLlena()
    {
        return final==MAXTAMQ-1;
    }
