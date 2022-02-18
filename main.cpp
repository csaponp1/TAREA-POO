//UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA
//INGENIERIA EN SISTEMAS DE INFORMACION
//NOMBRE: Christian Fernando Sapón Pérez
//CARNET: 1290-21-16654
//PROGRAMACION ORIENTADA A OBJETOS
#include "Cliente.cpp"
#include <iostream>
#include<conio.h>

using namespace std;
main(){
	string n,nom,ape,dir,fn;
	int tel;
	cout<<"Ingrese Nit:";
	cin>>n;
	cout<<"Ingrese Nombres:";
	cin>>nom;
	cout<<"Ingrese Apellidos:";
	cin>>ape;
	cout<<"Ingrese Direccion:";
	cin>>dir;
	cout<<"Ingrese Nacimiento:";
	cin>>fn;
	cout<<"Ingrese Telefono:";
	cin>>tel;
	
	// instancia
	Cliente obj = Cliente(nom,ape,dir,tel,fn,n);
	obj.mostrar();
	cout<<"_________________"<<endl;
	
	
	

	cout<<"_________________"<<endl;
	cout<<"Modificar Nit:";
	cin>>n;
	cout<<"Modificar Nombres:";
	cin>>nom;
	cout<<"Modificar Apellidos:";
	cin>>ape;
	cout<<"Modificar Direccion:";
	cin>>dir;
	cout<<"Modificar Nacimiento:";
	cin>>fn;
	cout<<"Modificar Telefono:";
	cin>>tel;
	
	
	obj.setNit(n);
	obj.setNombre(nom);
	obj.setApellido(ape);
	obj.setDireccion(dir);
	obj.setFN(fn);
	obj.setTelefono(tel);
	
	cout<<"\n__________________"<<endl;
	cout<<"Nit:"<<obj.getNit()<<endl;
	cout<<"Nombres:"<<obj.getNombres()<<endl;
	cout<<"Apellidos:"<<obj.getApellidos()<<endl;
	cout<<"Direccion:"<<obj.getDireccion()<<endl;
	cout<<"Fecha Nacimiento:"<<obj.getFN()<<endl;
	cout<<"Telefono:"<<obj.getTelefono()<<endl;

	system("pause");
	
}
