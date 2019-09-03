#include<iostream>
using namespace std;

class Arco{
	public:
		char letra;
		int peso;
		Arco* siguiente;
		
		Arco* crearArco(Arco* cab,char L,int P){
			Arco* nuevo=new Arco();
			nuevo->letra=L;
			nuevo->peso=P;
			nuevo->siguiente=NULL;
			cab=nuevo;
			return cab;
		}
		
		void insertarArco(Arco* cab,char L,int P){
			Arco* nuevo=new Arco();
			nuevo->letra=L;
			nuevo->peso=P;
			Arco* aux=cab;
			
			while(aux->siguiente!=NULL){
				aux=aux->siguiente;
			}
			aux->siguiente=nuevo;			
			nuevo->siguiente=NULL;
		}
		
		Arco* elimLista(Arco* cab){
			Arco* tmp=cab;	
			Arco* aux;
			while(tmp->siguiente!=NULL){
				aux=tmp;
				tmp=tmp->siguiente;
				delete aux;
			}
			delete tmp;
			cab=NULL;			
			return cab;
		}
		
		
		Arco* elimArco(Arco* cab, char L){
			Arco* tmp=cab;
			Arco* aux;
			if(cab->letra==L){
				cab=tmp->siguiente;
				delete tmp;
			}else{
				while(tmp->letra!=L){
					aux=tmp;
					tmp=tmp->siguiente;
				}
				aux->siguiente=tmp->siguiente;
				delete tmp;
			}
			return cab;
		}
		bool buscarArco(Arco* cab, int L){
			bool existe=false;
			Arco*aux=cab;
			while(aux!=NULL){
				if(aux->letra==L){
					existe=true;
				}
				aux=aux->siguiente;
			}
			return existe;
		}
		
};

class Nodo{
	
	public:
		char letra;
		Arco* sec;
		Nodo* sig;
		
		Nodo* crearNodo(Nodo* cab, char L){
			Nodo* nuevo = new Nodo();
			nuevo->letra=L;
			nuevo->sig=NULL;
			nuevo->sec=NULL;
			cab=nuevo;
			return cab;
		}
		
		void insertarNodo(Nodo* cab,int L){
			Nodo* nuevo = new Nodo();
			nuevo->letra=L;
			Nodo* aux=cab;				
			while(aux->sig!=NULL){
				aux=aux->sig;				
			}
			aux->sig=nuevo;
			nuevo->sig=NULL;
			nuevo->sec=NULL;
		}
		
		bool buscarNodo(Nodo* cab, int L){
			bool existe=false;
			Nodo*aux=cab;
			while(aux!=NULL){
				if(aux->letra==L){
					existe=true;
				}
				aux=aux->sig;
			}
			return existe;
		}
		
		Nodo* buscarId(Nodo* cab, int l){
			Nodo* aux=cab;
				while(aux->letra!=l){
					aux=aux->sig;
				}
				//cout<<"ID Nodo:  "<<aux->letra<<endl;
			return aux;
		}
		void mostrar(Nodo* cab){
			
			Nodo*aux=cab;
			Arco*aux2;
			
			if (cab==NULL){
				cout<<"\n\tNo se ha ingresado ningun Nodo. Intentelo de nuevo\n";
			}else{
			cout<<"\n\t------------Lista de Adyacencia--------------\n\n";		
				
				while(aux!=NULL){
					cout<<"\tNodo '"<<aux->letra;
					aux2=aux->sec;
					if(aux->sec==NULL){
						cout<<"' -> No hay ningun arco de este Nodo.";
					}else{					
						while(aux2!=NULL){
							cout<<"' -> ("<<aux2->letra ;
							cout<<"|"<<aux2->peso<<")->";
							aux2=aux2->siguiente;
						}
						cout<<"NULL";
					}
				cout<<endl;
				aux=aux->sig;
				}	
			}
		}
		
		
		void recorrerLista(Nodo * cab, char L, Arco obj2){
			Nodo* tmp=cab;
			while(tmp!=NULL){
				if(tmp->letra!=L){
					tmp->sec=obj2.elimArco(tmp->sec,L);
				}
				tmp=tmp->sig;
			}
		}
		
		Nodo* elimNodo(Nodo* cab, char L){
			Nodo* tmp=cab;
			Nodo* aux;
			if(cab->letra==L){
				cab=tmp->sig;
				delete tmp;
			}else{
				while(tmp->letra!=L){
					aux=tmp;
					tmp=tmp->sig;
				}
				aux->sig=tmp->sig;
				delete tmp;
			}
			return cab;
		}
		
		int gradoGrafo(Nodo* cab){
			Nodo*aux=cab;
			Arco*aux2;
			int cont=0;
			while(aux!=NULL){			
				cont++;	
				aux=aux->sig;				
			}
			cout<<"\n\tEl grado del GRAFO es: "<<cont<<endl;
		}
	
		void gradoNodo(Nodo* cab, char L){
			Nodo*aux=cab;
			Arco*aux2;
			int cont=0;
			while(aux->letra!=L){			
				aux=aux->sig;
			}	
			aux2=aux->sec;		
			while(aux2!=NULL){
				cont++;
				aux2=aux2->siguiente;
			}
			cout<<"\n\tEl grado del Nodo "<<L<<" es: "<<cont<<endl;	
		}
		void* mayorPeso(Nodo* cab){
			Arco* mayor=cab->sec;
			Nodo* origen;
			Nodo*aux=cab;
			Arco*aux2;		
			
			while(aux!=NULL){
			
				aux2=aux->sec;
				if(aux->sec!=NULL){
				
					while(aux2!=NULL){
					if (aux2->peso>=mayor->peso){
						mayor=aux2;
						origen= aux;
												
					}	
					aux2=aux2->siguiente;
				}
				
			}
					aux=aux->sig;
			}
			if(mayor!=NULL){
			
				cout<<"\n\tEl arco con mayor peso es: \n"
					<<"\tNodo '"<<origen->letra<<"' a '"<<mayor->letra<<"' con un peso de '"
				 	<<mayor->peso<<"'\n";
			
			}else{
				cout<<"\n\tNo se encontraron arcos a evaluar.\n";
			}
		}
		void* menorPeso(Nodo* cab){
			Arco* menor=cab->sec;
			Nodo* origen;
			Nodo*aux=cab;
			Arco*aux2;		
			
			while(aux!=NULL){
			
				aux2=aux->sec;
				if(aux->sec!=NULL){
					
					while(aux2!=NULL){
						if (aux2->peso<=menor->peso){
							menor=aux2;
							origen= aux;
													
						}
						aux2=aux2->siguiente;
					}
				}
				
					aux=aux->sig;
			}
			if(menor!=NULL){
				cout<<"\n\tEl arco con menor peso es: \n"
				<<"\tNodo '"<<origen->letra<<"' a '"<<menor->letra<<"' con un peso de '"
			 	<<menor->peso<<"'\n";
			}else{
				cout<<"\n\tNo se encontraron arcos a evaluar.\n";
			}
			
		}
		
};

void menu(Nodo* cab, Nodo obj, Arco obj2){
	
	int opc, peso;
	char letra, letra2;
	bool existe1, existe2;
	Nodo* busqueda1, *busqueda2;
	cout<<"\n------------------------ M  E  N  U ------------------------\n\n"
		<<"1. Ingresar nodos\n"
		<<"2. Ingresar arista y su peso\n"
		<<"3. Mostrar grafo.\n"
		<<"4. Eliminar nodo.\n"
		<<"5. Eliminar arista o arco.\n"
		<<"6. Mostrar el grado de un nodo.\n"
		<<"7. Mostrar el orden del grafo.\n"
		<<"8. Determinar el arco con mayor peso.\n"
		<<"9. Determinar el arco con menor peso.\n"
		<<"10. Salir.\n";
	cin>>opc;
	switch(opc)	{
		case 1:{
			system("cls");
			cout<<"\n\tIngrese la Letra del nuevo nodo: "; cin>> letra;
			if (cab==NULL){
				cab=obj.crearNodo(cab,letra);
			}else{
				obj.insertarNodo(cab,letra);
			}
			//obj.mostrar(cab);
			menu(cab,obj,obj2);
			break;
		}
		case 2:{
			system("cls");
			if (cab==NULL){
				cout<<"\n\tNo se ha ingresado ningun Nodo. Intentelo de nuevo\n";
			}else{
				cout<<"\n\tIngrese la letra del Nodo origen: "; cin>> letra;
				existe1=obj.buscarNodo(cab, letra);
				cout<<"\n\tIngrese la letra del Nodo destino: "; cin>> letra2;
				existe2=obj.buscarNodo(cab, letra2);
				if(existe1 == true && existe2 == true){
					cout<<"\n\tIngrese el peso del Arco: "; cin>> peso;
					busqueda1=obj.buscarId(cab,letra);
					busqueda2=obj.buscarId(cab,letra2);
					if (busqueda1->sec==NULL){
						busqueda1->sec=obj2.crearArco(busqueda1->sec,letra2,peso);	
					}else{
						obj2.insertarArco(busqueda1->sec, letra2,peso);
					}
					if (busqueda2->sec==NULL){
						busqueda2->sec=obj2.crearArco(busqueda2->sec,letra,peso);
					}else{
						obj2.insertarArco(busqueda2->sec, letra,peso);
					}
				}else{
					cout<<"\n\tAlguno o ambos de los nodos no existe.\n";
				}
			}
			//obj.mostrar(cab);
			menu(cab,obj,obj2);
			break;
		}
		case 3:{
			system("cls");
			obj.mostrar(cab);
			menu(cab,obj,obj2);
			break;
		}
		case 4:{
			system("cls");
			if (cab==NULL){
				cout<<"\n\tNo se ha registrado ningun Nodo. Intentelo de nuevo\n";
			}else{
				cout<<"\n\tIngrese el Nodo que desea eliminar: "; cin>> letra;
				existe1=obj.buscarNodo(cab, letra);
				if(existe1 == true){
					busqueda1=obj.buscarId(cab,letra);
					if(busqueda1->sec==NULL){
						cab=obj.elimNodo(cab, busqueda1->letra);
					}else{
						busqueda1->sec=obj2.elimLista(busqueda1->sec);
						
						obj.recorrerLista(cab, busqueda1->letra, obj2);	
						cab=obj.elimNodo(cab, busqueda1->letra);
					}
				}else{
					cout<<"\n\tNo se encontro este Nodo. Intentelo de nuevo.\n";
				}
			}
			menu(cab,obj,obj2);
			break;
		}
		case 5:{
			system("cls");
			if (cab==NULL){
				cout<<"\n\tNo se ha registrado ningun Nodo. Intentelo de nuevo\n";
			}else{
				cout<<"\n\tIngrese la letra del Nodo origen: "; cin>> letra;
				existe1=obj.buscarNodo(cab, letra);
				cout<<"\n\tIngrese la letra del Nodo destino: "; cin>> letra2;
				existe2=obj.buscarNodo(cab, letra2);
				if(existe1 == true && existe2 == true){
					busqueda1=obj.buscarId(cab,letra);
					busqueda2=obj.buscarId(cab,letra2);
					if(busqueda1->sec==NULL){
						cout<<"\n\tNo hay arcos entre "<<letra<<" y "<<letra2<<"\n";
					}else{
						existe1=obj2.buscarArco(busqueda1->sec, letra2);
						if(existe1==true){
							busqueda1->sec=obj2.elimArco(busqueda1->sec,letra2);
							busqueda2->sec=obj2.elimArco(busqueda2->sec,letra);
							cout<<"\n\tArco eliminado!\n";
						}else{
							cout<<"\n\tNo hay arcos entre "<<letra<<" y "<<letra2<<"\n";
						}
					}
				}else{
					cout<<"\n\tAlguno o ambos de los nodos no existe.\n";
				}
			}
			menu(cab,obj,obj2);
			break;
		}
		case 6:{
			system("cls");
			if (cab==NULL){
				cout<<"\n\tNo se ha registrado ningun Nodo. Intentelo de nuevo\n";
			}else{
				cout<<"\n\tIngrese la letra del Nodo que desea consultar: "; cin>> letra;
				existe1=obj.buscarNodo(cab, letra);
				if(existe1==true){
					obj.gradoNodo(cab,letra);
				}else{
					cout<<"El nodo "<<letra<<" no existe.\n";
				}
			}
			menu(cab,obj,obj2);
			break;
		}
		case 7:{
			system("cls");
			if (cab==NULL){
				cout<<"\n\tNo se ha registrado ningun Nodo. Intentelo de nuevo\n";
			}else{
				obj.gradoGrafo(cab);
				
			}
			menu(cab,obj,obj2);
			break;
		}
		case 8:{
			system("cls");
			if (cab==NULL){
				cout<<"\n\tNo se ha registrado ningun Nodo. Intentelo de nuevo\n";
			}else{
				obj.mayorPeso(cab);
				
			}
			
			menu(cab,obj,obj2);
			break;
		}
		case 9:{
			system("cls");
			if (cab==NULL){
				cout<<"\n\tNo se ha registrado ningun Nodo. Intentelo de nuevo\n";
			}else{
				obj.menorPeso(cab);
				
			}
			
			menu(cab,obj,obj2);
			break;
		}
		default:{
			system("cls");
			cout<<"\n\tNo ingreso una opcion correcta.\n";
			menu(cab,obj,obj2);
			break;
		}
		case 10:{
			system("cls");
			cout<<"Hasta Luego!\n";
			break;
		}
	}
}

int main(){
	
	Nodo* cab=NULL;
	Nodo obj;
	Arco obj2;
	
	menu(cab, obj, obj2);
	system("pause");
	return 0;
}
