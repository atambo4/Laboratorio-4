//problema 2
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;

string linea;
string texto;

int contarpalabras( string );


int main(){

	ifstream archivo ("F://dev c++//laboratorio//prueba labo 4 ej2//archivo.txt");
	
	while(getline(archivo,linea)){
	texto=texto+linea+ " ";	
	}

    archivo.close();
	cout<<"el numero de palabras es: "<<contarpalabras(texto)<<endl;
	ofstream archivo2 ("F://dev c++//laboratorio//prueba labo 4 ej2//Numeropalabras.txt");
	archivo2 << "El archivo de texto tiene "<<contarpalabras(texto) << " palabras";
	system("pause");
		
}

int contarpalabras(string text){
	int palabras=0;
	for(int i=1; text[i]!='\0' ;i++){
	if (text[i-1]==' '&& isalpha(text[i]))
	  ++palabras;	
	}
	if(isalpha(text[0])) {
		++palabras;
	}
	return palabras;
}


