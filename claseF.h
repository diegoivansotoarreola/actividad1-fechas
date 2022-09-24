#pragma once
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

class Fecha{
	private:
		int dia,mes,anio;
		string date;
	public:
	Fecha();
	~Fecha();
	void setDia(int);
	void setMes(int);
	void setAnio(int);
	void setDate(string);
	int getDia();
	int getMes();
	int getAnio();
	string getDate();
};

void Fecha::setDate(string _date){
	date=_date;
}
void Fecha::setAnio(int _anio){
	anio=_anio;
}
void Fecha::setMes(int _mes){
	mes=_mes;
}
void Fecha::setDia(int _dia){
	dia=_dia;
}
int Fecha::getDia(){
	return dia;
}
int Fecha::getMes(){
	return mes;
}
int Fecha::getAnio(){
	return anio;
}
string Fecha::getDate(){
	return date;
}
Fecha::Fecha(){
	
}
Fecha::~Fecha(){
	
}



