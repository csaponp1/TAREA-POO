#include "Persona.cpp"
#include<iostream>

using namespace std;

class Cliente : Persona{
	
	private : string nit;
	
//constructor

	public: Cliente(string nom,string ape,string dir,int tel,string f,string n) : Persona(nom,ape,dir,tel,f){
	 nit = n;
	}
	
	// set (modificar)
	void setNit(string n){nit = n;}
	void setNombre(string nom){nombres = nom;}
	void setApellido(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFN(string f){fn = f;}
	void setTelefono(int tel){telefono = tel;}
	
	// get (mostrar)
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFN(){return fn;}	
	int getTelefono(){return telefono;}

	
	
	void mostrar(){
		cout<<"_______________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Nacimiento:"<<fn<<endl;
		cout<<"Telefono:"<<telefono<<endl;
	}
	
	
	
};
