//Gustavo Chiguichon Larios 5990-13-21853
#include "alumnos.cpp"
#include <iostream>
#include <windows.h>
#include <conio.h>  
using namespace std;

void gotoxy(int x,int y){  
  HANDLE hcon;  
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
  COORD dwPos;  
  dwPos.X = x;  
  dwPos.Y= y;  
  SetConsoleCursorPosition(hcon,dwPos);  
} //Main 
main(){
	
	Alumnos* al;
	int num, op;
	 
	do{
		system("cls");
		gotoxy(50,2);cout<<"SISTEMA BASE DE DATOS DE ALUMNOS"<<endl;
		gotoxy(50,3);cout<<"1. -----INGRESO DE ALUMNOS-----"<<endl;
		gotoxy(50,4);cout<<"2.-----RESULTANTE DE LOS ALUMNOS-----"<<endl;
		gotoxy(50,5);cout<<"3.-----SALIR DE BASE DE DATOS-----"<<endl;
		gotoxy(50,6);cout<<"OPCION QUE NESECITA: "<<endl;
		gotoxy(70,6);cin>>op;
	
		if(op == 1){
		system("cls");
		gotoxy(50,1);cout<<"CUANTOS ESTUDIANTRES NESECITA: ";
		cin>>num;
		
		
		if(num !=0){
				
			al = new Alumnos[num];
			string nombre1,nombre2,apellido1,apellido2,curso;
		 	int codigo,n1,n2,n3,n4;
			
			for(int i = 0; i < num; i++) //que la variable salte lineas como vector
			{
				system("cls");
				gotoxy(50,2);cout<<"DATOS DE ALUMNOS "<<endl;
				gotoxy(50,3);cout<<"ESCRIBA PRIMER NOMBRE DEL ALUMNO No: "<<i+1<<": ";
				cin>>nombre1;
				gotoxy(50,4);cout<<"ESCRIBA EL SEGUNDO NOMBRE DEL ALUMNO No: "<<i+1<<": ";
				cin>>nombre2;
				gotoxy(50,5);cout<<"ESCRIBA EL PRIMER APELLIDO No: "<<i+1<<": ";
				cin>>apellido1;
				gotoxy(50,6);cout<<"ESCRIBA SEGUNDO APELLIDO No: "<<i+1<<": ";
				cin>>apellido2;
				gotoxy(50,7);cout<<"ESCRIBA CURSO DEL ALUMNO No: "<<i+1<<": ";
				cin>>curso;
				gotoxy(50,8);cout<<"ESCRIBA CODIGO DE ALUMNO No: "<<i+1<<": ";
				cin>>codigo;
				gotoxy(50,9);cout<<"INGRESE NOTA 1 DEL ALUMNO No: "<<i+1<<": ";
				cin>>n1;
				gotoxy(50,10);cout<<"INGRESE NOTA 2 DEL ALUMNO No: "<<i+1<<": ";
				cin>>n2;
				gotoxy(50,11);cout<<"INGRESE LA NOTA 3 DEL ALUMNO No: "<<i+1<<": ";
				cin>>n3;
				gotoxy(50,12);cout<<"INGRESE LA NOTA 4 DEL ALUMNO No: "<<i+1<<": ";
				cin>>n4;
				al[i] = Alumnos(nombre1,nombre2,apellido1,apellido2,curso,codigo,n1,n2,n3,n4);
			}
			
			}
			
			else{
			cout<<"El Numero No puede ser Menor a 0";
			}
	
	}
	if(op == 2){
		system("cls");
	
		if(num > 0){
			gotoxy(50,3);cout<<"RESULTADO DE ALUMNOS SON LOS SIGUIENTES: "<<endl;
			int col = 4;
			for(int i =0;i<num; i++){			
			gotoxy(25,col);al[i].Verificador();
			col++;
			}
		}else{
			gotoxy(50,3);cout<<"NO HAY INFORMACION  EN LA BASE DE DATOS";
			getch();
		}
			
		
	}
		
	}while(op != 3);
		
}
