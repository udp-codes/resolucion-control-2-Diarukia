#include <iostream>
//Problema 1
// Pablo Contreras
void insert(Data x){
	nodo *aux= new nodo(x):
	aux->next= head;
	head= aux;	
}
Data saca(){
	if(head== nullptr){
		return;	
	}
	else{
		nodo aux= head;
		head= aux->next;
		aux->next= nullptr;
		return aux;	
	}
}
bool estavacio(){
	if(head= nullptr){
		return false;
	}
	return true;
}
bool percetene(Data x){
	if(estavacio()== nullptr){
		return false
	}
	else{
	nodo aux= new nodo();
	while(aux->next != nullptr){
		if(aux->data== x){
			return ture;
		}
		aux= aux->next;	
	}
	return false;
	}	
	
}
//problema 2
class item{
	public:
	string m_valor;
	int cant_llamados;
	item *next;
	item *head;
	item(){
		next= nullptr;
		head= nullptr;
		m_valor= " ";
		cant_llamados= 0;
	}
	void agregar(item i){
		i->next= head;
		head=i;
	}
	int probabilidad(string valor){
		item aux=head;
		float prob;
		float total;
		while(aux->next != nullptr){
			total++;
			if(m_valor=valor){
				prob++;
			}
		}
		return (prob/total)*100;
	}	
};
using namespace std;
int main(){
	
}

