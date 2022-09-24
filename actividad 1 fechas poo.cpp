#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include"claseF.h"
#include<string>
#include<sstream>
using namespace std;

int validacion(int y,int m, int d);

int main(){	

string dia,mes,anio,datos;
int fecha,resultado,di,me,an,opc;
bool opc2=false;
Fecha fecha1;


  cout<<"\nEscribe la fecha: (dd/mm/yyyy)"<<endl;cin>>datos;
  fecha1.setDate(datos);
  istringstream ss(fecha1.getDate());
  getline(ss,dia,'/');
  istringstream (dia)>>di;
  fecha1.setDia(di);
  getline(ss,mes,'/');
  istringstream (mes)>>me;
  fecha1.setMes(me);
  getline(ss,anio,'/');
  istringstream(anio)>>an;
  fecha1.setAnio(an);
  validacion(fecha1.getAnio(),fecha1.getMes(),fecha1.getDia());
  fecha1.~Fecha();
  
  do{
  
  cout<<"\nQuieres volver a revisar otra fecha? Si=1  No=2"<<endl;cin>>opc;

  if(opc==1){
  	system("cls");
  	return main();
  }
  else if(opc==2){
  	system("cls");
  	cout<<"\nHasta luego......."<<endl;
  	exit(0);
  }
  else{
  	system("cls");
  	cout<<"\nEsta opcion no existe,elige otro."<<endl;
    opc2=true;
  }
  } while(opc2==true);
	return 0;	
}

int validacion(int y,int m, int d){
	
	
	bool bisiesto;
	if(y%4==0 && y%100!=100 || y%400==0)
        bisiesto = true;
	if(d>0 && d<32 && m>0 && m<13 && y>0){
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
    	cout<<"\nla fecha es valida."<<endl;
	}
	else{
		if(m==2 && d<30 && bisiesto){
			cout<<"\nla fecha es valida y es año bisiesto"<<endl;
		}
		else if(m==2 && d<29 && !bisiesto){
			cout<<"\nla fecha es valida."<<endl;
		}
		else if(m!=2 && d<31){
			cout<<"\nla fecha es valida."<<endl;
		}
		else{
			cout<<"\nla fecha no es valida o no existe."<<endl;
		}
	}

    }
	else{
		cout<<"\nla fecha no es valida o no existe."<<endl;
	}
	
	
}
