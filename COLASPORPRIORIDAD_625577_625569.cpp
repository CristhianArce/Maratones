#include<iostream>
using namespace std;

class nodo{
	public:
		int pri;
		char dato;
		nodo *sig;
		char leerdato();
		nodo *crearnodo();
	    int leerprioridad();
	    nodo *crearcolaprioridadpri1(nodo *tope);	
	    void mostrar(nodo *tope);    
        void menu();
        void *ordenar(nodo* tope);
        void *insertarfinal(nodo *tope,nodo *nuevo);
        bool verificar(nodo *tope);
        nodo *borrarprimero(nodo* tope);
    };
void *nodo::ordenar(nodo* tope){
    nodo *aux1,*aux2;
    int paux;
    int daux;
    aux1 =tope;
    while (aux1->sig != NULL){
        aux2 = aux1 -> sig;
        while (aux2 != NULL){
            if (aux1 ->pri > aux2->pri){
                paux = aux1->pri;
                daux = aux1->dato;
                
                aux1->pri=aux2->pri;
                aux1->dato = aux2->dato;
                
                aux2->pri = paux;
                aux2->dato = daux;
            }
            aux2=aux2->sig;
        }
        aux1 = aux1->sig;
	}
}
    
char nodo::leerdato(){
	char x;
	cout<<"PORFAVOR INGRESE NOMBRE DEL VUELO (Caracter) \n";
	cin>>x;
	return x;
}


int nodo::leerprioridad(){
	int x;
	cout<<"--------------------PRIORIDAD DEL VUELO------------------- \n";
	cout<<"1. VUELO DE EMERGENCIA\n";
	cout<<"2. VUELO MILITAR\n";
	cout<<"3. VUELO COMERCIAL\n";
	cin>>x;
	while(x!=2&&x!=1&&x!=3){
		cout<<"La prioridad ingresada no esta dentro del rango,intente nuevamente...\n";
		cin>>x;
	}
	return x;
}

nodo *nodo::crearnodo(){
	nodo *nuevo;
	nodo n;
	nuevo=new nodo;
	nuevo->dato=n.leerdato();
	nuevo->pri=n.leerprioridad();
	return nuevo;
}
nodo *nodo::crearcolaprioridadpri1(nodo *tope){
	nodo *nuevo;
	nuevo=nuevo->crearnodo();
	nuevo->sig=NULL;
	tope=nuevo;
	
	return tope;
}
void *nodo::insertarfinal(nodo *tope,nodo *nuevo){
	nodo *aux;
    aux=tope;
	nuevo->sig=NULL;
	while(aux->sig!=NULL){
		 aux=aux->sig;
	}
	aux->sig=nuevo;
}

void nodo::mostrar(nodo *tope){
	nodo *aux;
	aux=tope;
	cout<<endl;
	cout<<"[DATO|PRIORIDAD]\n";
	while(aux!=NULL){
		cout<<"["<<aux->dato<<"|"<<aux->pri<<"]->\n";
		aux=aux->sig;
	}
	
}
void nodo::menu(){
    cout<<endl;
	cout<<"\t====================== =COLA DE PRIORIDADES= ==========================\n\n\n";
	
	cout<<"\t\t\t\t\t MENU \n\n\n";
	cout<<"\t\t1. CREAR COLA.\n";
	cout<<"\t\t2. REGISTRAR VUELO.\n";
	cout<<"\t\t3. MOSTRAR VUELOS EN COLA.\n";
	cout<<"\t\t4. DESPACHAR VUELO.\n";
	cout<<"\t\t0. SALIR.\n";
	}
	
bool nodo::verificar(nodo *tope){
	bool v;
	v=false;
	if(tope==NULL){
		system("color 0C");
		
		cout<<"LA COLA ESTA VACIA\n\n";
		v=false;
	}
	if(tope!=NULL){
	
		v=true;
	}
	return v;
}

nodo *nodo::borrarprimero(nodo *tope){
		    nodo *bor;
		    nodo *aux;
		    nodo *n;
		    bool h;
		    h=n->verificar(tope);
		    if(h==false){
                cout<<"LA COLA NO EXISTE\n";
            }else{
		    bor=tope;
		    cout<<"EL VUELO QUE SALIO ES: "<<"[ "<<tope->dato<<"|"<<tope->pri<<"]";
		    tope=tope->sig;
		    delete bor;
		    return tope;
    }
		    
		}
		
		
int main(){
	nodo *tope=NULL,*fin=NULL,*n1,*nuevo=NULL;
	nodo n;
	n1=&n;
	int i;
	n1->menu();
	cin>>i;
	bool v;
	while(i!=0){
        system("color 0F");
		switch(i){
		case 1:
			tope=n1->crearcolaprioridadpri1(tope);
			break;
		case 2:
            v=n1->verificar(tope);
            if(v==false){
				cout<<"LA COLA AUN NO HA SIDO CREADA POR FAVOR CREE UNA (Opcion 1.)\n";
			}
			if(v==true){
				nuevo=nuevo->crearnodo();
				n1->insertarfinal(tope,nuevo);
				
				n1->ordenar(tope);

			break;	
			}
		case 3:
             v=n1->verificar(tope);
            if (v==false){
			cout<<"NO HAY VUELOS REGISTRADOS\n";
        }else{
            n1->mostrar(tope);
        }
			break;
		case 4:
            v=n1->verificar(tope);
            if (v==false){
                cout<<"ESTA OPERACION NO SE PUEDE REALIZAR\n";
            }else{
            tope=n1->borrarprimero(tope);
        
            cout<<endl;
            cout<<endl;
            cout<<endl;
            //n1->mostrar(tope);
        }
    
			break;
			
        }
		n1->menu();
		cin>>i;
	}
}
	
		
             	
			

         
		
