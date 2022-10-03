#include <iostream>
using namespace std;

#include "ColaLineal.h"

int main()
{
    ColaLineal cola;
    int opc=0,n,s=0,l=0;
    int fin=-1;
    do
    {
    system("Cls");
    cout<<"Programa para crear una cola estatica"<<endl;
    cout<<"1.- Insertar elemento\n2.- Eliminar elemento\n3.- Mostrar elemento del frente\n4.- Mostrar cola\n5.- Salir"<<endl;
    cin>>opc;
    switch(opc)
    {
    	case 1: cout<<"Insertar elemento"<<endl;
    		if(!cola.colaLlena())
        	{
    		cout<<"Insertar numero:"<<endl;
    		cin>>n;
			cola.insertar(n);
			l=l+1;
			}
        	else
        	{
        	cout<<"Cola llena"<<endl;
			}    
    		break;
    	case 2: cout<<"Eliminar primer elemento"<<endl;
    		cout<<cola.frenteCola()<<endl;
    		cola.quitar();
    		break;
    	case 3: cout<<"Mostrar elemento del frente"<<endl;
    		if(cola.colaVacia()==1)
    		{
    			cout<<"cola vacia"<<endl;
    		}
    		else
    		{
    			cout<<cola.frenteCola()<<endl;
			}
    		break;
    	case 4: cout<<"Mostrar cola"<<endl;
    		if(cola.colaVacia()==1)
    		{
    			cout<<"La cola esta vacia"<<endl;
			}
			else
			{
			for(int i=0; i<l;i++)
			{
				cout<<cola.frenteCola()<<" ";
    			cola.quitar();
    			cout<<endl;
			}
    		}
    		break;
    	case 5: cout<<"Salir"<<endl;
    		exit(-1);
    		break;
    	default:cout<<"Seleccione una opcion correcta"<<endl;
	}
	cout<<"Deseas regresar al menu          (Si=1    No=cualquier numero)"<<endl;
	cin>>s;
	}while(s==1);
    system("pause");
}
