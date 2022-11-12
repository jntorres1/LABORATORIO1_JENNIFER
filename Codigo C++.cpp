
#include<iostream>
using namespace std;

int main() {
	string apellido,contra1,contrasena,idestu,linea,nombre;
	string pausa;
	int id,id1,nrc,nrc1,nrc2,opcmd,opcme,opcmp;
	float nota1,nota2,nota3,promedio,total;
	bool repite;
	bool repite2;
	string usuario;
	// DEFINIENDO LAS VARIABLES
	repite = true;
	repite2 = true;
	usuario = "jennifer";
	contrasena = "21";
	idestu = "jennifer";
	contra1 = "1311";
	do {
		cout << " BIENVENIDO ESTIMADO USUARIO " << endl;
		cout << "================" << endl;
		cout << "MENU PRINCIPAL" << endl;
		cout << "================" << endl;
		cout << " Opcion 1 : Sección Docente" << endl;
		cout << " Opcion 2 : Sección Estuduante" << endl;
		cout << " Opcion 3 : Salir" << endl;
		cout << "Selecciona una Opión : " << endl;
		cin >> opcmp;
		switch (opcmp) {
		case 1:
			do {
				// ---------------------------------------------------------menu docente---------------------------------------------------
				cout << "======================" << endl;
				cout << "   MENÚ DEL DOCENTE   " << endl;
				cout << "======================" << endl;
				cout << " Opcion 1 : Iniciar sección" << endl;
				cout << " Opcion 2 : Registro" << endl;
				cout << " Opcion 3 : Salir" << endl;
				cout << "Selecciona una Opión : " << endl;
				cin >> opcmd;
				switch (opcmd) {
				case 1:
					do {
						cout << "============================" << endl;
						cout << "usuario=jennifer;contra:21" << endl;
						cout << "============================" << endl;
						cout << "Introduzca su usuario" << endl;
						cin >> usuario;
						cout << "Introduzca su contrasena" << endl;
						cin >> contrasena;
					} while (!(usuario=="jennifer" && contrasena=="21"));
					cout << "============================" << endl;
					cout << "Los datos son correctos, esta en linea!" << endl;
					cout << "======================================" << endl;
					cout << "Ingrese  ID del Estudiante" << endl;
					cin >> id;
					cout << "Ingrese  NRC de la materia" << endl;
					cin >> nrc;
					cout << "Ingrese su primera nota" << endl;
					cin >> nota1;
					cout << "Ingrese su segunda nota" << endl;
					cin >> nota2;
					cout << "Ingrese su tercera nota" << endl;
					cin >> nota3;
					total = (nota1+nota2+nota3)/3;
					cout << "Estudiente con ID : " << id << endl;
					cout << "NRC  de Materia  : " << nrc << endl;
					cout << "Su promedio es: " << total << endl;
					if ((total>=14)) {
						cout << "APROBADO" << endl;
					} else {
						cout << "REPROBADO:(" << endl;
					}
					
					break;
				case 2:
					cout << "======================================" << endl;
					cout << " REGISTRO DE DATOS  DE DOCENTE" << endl;
					cout << "======================================" << endl;
					cout << "Ingrese  nombre" << endl;
					cin >> nombre;
					cout << "Ingrese  apellido" << endl;
					cin >> apellido;
					cout << "Ingrese  NRC de la materia que instruye" << endl;
					cin >> nrc1;
					cout << "======================================" << endl;
					cout << "             DATOS INGRESADOS          " << endl;
					cout << "======================================" << endl;
					cout << "Su nombre es :" << nombre << endl;
					cout << "Su apellido es :" << apellido << endl;
					cout << "Su NRC :" << nrc1 << endl;
					cout << "======================================" << endl;
					cin >> pausa;
					break;
				case 3:
					cout << "Gracias, vuelva prontos" << endl;
					repite = false;
						return 0;
					break;
					
				}
			} while ((repite!=false));
			cin >> pausa;
			break;
		case 2:
			// ----------------------------------------menú estudiante ----------------------------------------------
			do {
				cout << "======================" << endl;
				cout << "   MENU DEL ESTUDIANTE   " << endl;
				cout << "======================" << endl;
				cout << " Opcion 1 : Iniciar sección" << endl;
				cout << " Opcion 2 : Registro" << endl;
				cout << " Opcion 3 : Salir" << endl;
				cout << "Selecciona una Opión : " << endl;
				cin >> opcme;
				switch (opcme) {
				case 1:
					do {
						cout << "============================" << endl;
						cout << "ID=2525;contra:1311" << endl;
						cout << "============================" << endl;
						cout << "Introduzca su ID" << endl;
						cin >> idestu;
						cout << "Introduzca su contrasena" << endl;
						cin >> contra1;
					} while (!(idestu=="jennifer" && contra1=="1311"));
					cout << "============================" << endl;
					cout << "Los datos son correctos, esta en linea!" << endl;
					cout << "======================================" << endl;
					cout << "Ingrese  NRC de la materia" << endl;
					cin >> nrc2;
					cout << "nota 1 " << nota1 << endl;
					cout << "nota 2 " << nota2 << endl;
					cout << "nota 3 " << nota3 << endl;
					cout << "Estudiente con ID : " << idestu << endl;
					cout << "NRC  de Materia  : " << nrc2 << endl;
					cout << "Su promedio es: " << promedio << endl;
					if ((promedio>=14)) {
						cout << "APROBADO" << endl;
					} else {
						cout << "REPROBADO:(" << endl;
					}
					cin >> pausa;
					break;
				case 2:
					cout << "======================================" << endl;
					cout << " REGISTRO DE DATOS  DE ESTUDIANTE" << endl;
					cout << "======================================" << endl;
					cout << "Ingrese  nombre" << endl;
					cin >> nombre;
					cout << "Ingrese  apellido" << endl;
					cin >> apellido;
					cout << "Ingrese  NRC de la materia " << endl;
					cin >> nrc1;
					cout << "======================================" << endl;
					cout << "             DATOS INGRESADOS          " << endl;
					cout << "======================================" << endl;
					cout << "Su nombre es :" << nombre << endl;
					cout << "Su apellido es :" << apellido << endl;
					cout << "Su NRC :" << nrc1 << endl;
					cout << "======================================" << endl;
					cin >> pausa;
					break;
				case 3:
					cout << "Gracias, vuelva prontos" << endl;
					repite = false;
					break;
						return 0;
				}
			} while ((repite!=false));
			cin >> pausa;
			break;
		case 3:
			cout << "Gracias, vuelva prontos" << endl;
			repite = false;
			break;
		}
	} while ((repite!=false));
	return 0;
}

