#include <iostream>
using namespace std;

main (){
	string nombre;
	int dato;
	cout<<"Ingrese dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"ingrese Nombre completo: ";
	getline(cin,nombre);
	
	cout<<nombre<<endl;
	
	system("pause");
}
