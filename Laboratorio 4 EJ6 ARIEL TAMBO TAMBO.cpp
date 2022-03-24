//PREGUNTA 6
#include<iostream>
using namespace std;

int main(){
	
	int H, HE, S;
	
	cout<<"Introducir horas de trabajo cumplidos:"<<endl;
	cin>>H;
	
	if(H<=0){
		S=20*H;
		
		cout<<"\n Su sueldo semanal es : $ "<< S <<endl;
		
	}
	else{
		HE=H-40;
		S = 800 +(HE*25);
		cout<<"\n Su sueldo semanal es : $ "<< S <<endl;
		
	}
 return 0;		
}


