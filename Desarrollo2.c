#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int opc, a, da, d,seleccion,pago,gp,gp1;
float sueldo_liquido;

struct academico
{
     char nombre[30];
     char apellido[30];
     int documento;
     int diaIngreso;
     char mesIngreso[30];
     int anioIngreso;
     char prevision[30];
     int sueldo;
     char facultad[30];
} academico1 = {"Miguel", "Acuna", 0, 1, "Abril", 2014, "vacio", 2627921, "CienciasJuridicas"}, academico2 = {"Carmen", "Aguirre", 0, 6, "Abril", 1998, "vacio", 3246764, "DepartamentoEnergia"}, academico3 = {"Karina", "Albornoz", 0, 1, "Marzo", 2014, "vacio", 2682882, "DepartamentoKinesiologia"}, academico4 = {"Veronica", "Aliaga", 0, 1, "Septiembre", 1995, "vacio", 3809854, "Depto.Educ.Parvularia"};
	
struct administrativo
{
     char nombreA[30];
     char apellidoA[30];
     int documentoA;
     int diaIngresoA;
     char mesIngresoA[30];
     int anioIngresoA;
     char previsionA[30];
     int sueldoA;
     char UnidadA[30];
     char cargoA[30];
} administrativo1 = {"NATALIA","ACUNA", 0, 11, "Agosto", 2000, "vacio", 1228662, "CRIDESAT","ASISTENTE ADMINISTRATIVO"},administrativo2 = {"CESAR","AGUIRRE", 0, 02, "Octubre", 1986, "vacio", 1084551, "BIBLIOTECA","ATENCION DE PUBLICO"},administrativo3 = {"JOCELYN","ALFARO",0, 02, "Mayo", 1990, "vacio", 881011, "BIBLIOTECA","ATENCION DE PUBLICO"},administrativo4 = {"SONIA","ALVAREZ",0, 21, "Junio", 1978, "vacio", 1865535, "VICERECTORIA ACADEMICA","SECRETARIA"};

struct profesional
{
     char nombre[30];
     char apellido[30];
     int documento;
     int diaIngreso;
     char mesIngreso[30];
     int anioIngreso;
     char prevision[30];
     int sueldo;
     char unidadServicio[30];
     char tipoServicio[30];
} profesional1 = {"Luis", "Alfaro", 0, 8, "Abril", 1992, "vacio", 1076048, "Movilizacion", "Chofer"}, profesional2 = {"Herman", "Araya", 0, 31, "Marzo", 1998, "vacio", 752338, "ServiciosGenerales", "Aseo"}, profesional3 = {"Huberto", "Contreras", 0, 1, "Abril", 1996, "vacio", 975184, "Movilizacion", "Chofer"}, profesional4 = {"Raul", "Cortes", 0, 1, "Septiembre", 1980, "vacio", 984780, "ServiciosGenerales", "Gasfiter"};
		
	
void opcion_1();
void opcion_2();
void opcion_3();
void opcion_4();
void opcion_5();
void opcion_6();
void condiciones();

int main() {
	do{
		system("cls");
		printf("Menu de navegacion \n\n");
		printf("1.- Gestion de personal Academicos\n");
		printf("2.- Gestion de personal Administrativo\n");
		printf("3.- Gestion de profesionales externos  \n");
		printf("4.- Pago del personal \n");
		printf("5.- Busquedas de sistemas\n");
		printf("6.- Salir\n");
		printf("Opcion a escoger: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				opcion_1();
				break;
			case 2:
				opcion_2();
				break;
			case 3 :
				opcion_3();
				break;
			case 4:
				opcion_4();
				break;	
			case 5:
				opcion_5();
				break;
			case 6:
				opcion_6();
				break;	
			default:	
				system("cls");
				printf("La opcion que ingreso es incorrecta.\n");
				printf("Ingrese un valor de 1 a 6.");
				getch();
				break;
					
		}
	}while(opc !=6);
	
	return 0;
}

void opcion_1(){
	
	system("cls");
	printf("Gestion personal academico\n");
	printf("no Academico / (1) Nombre / (2) Apellido / (3) Documento de identidad / (4) dia ingreso / (5) mes ingreso / (6) anio ingreso / (7) p. salud / (8) sueldo b. / (9) facultad\n\n");
	printf("Academico 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
	printf("Academico 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
	printf("Academico 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
	printf("Academico 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
	
	
	printf("\nDesea cambiar los datos de los academicos? NO (0), SI (1): ");
	scanf("%i", &a);
	while((a<0 || a>1)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nDesea cambiar los datos de los academicos? NO (0), SI (1): ");
		scanf("%i", &a);	
	}
	while(a==1){
		printf("A que academico desea cambiar datos? 1, 2, 3 o 4: ");
		scanf("%i", &da);
		while((da<1 || da>4)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nA que academico desea cambiar datos? 1, 2, 3 o 4: ");
		scanf("%i", &da);	
		}
		
		//----------------------------------DATOS DEL ACADEMICO 1-------------------------------------------------
		
		if (da==1){
			printf("\nCual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>9)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del academico 1: ");
				scanf("%s", academico1.nombre);
				printf("\n Datos del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del academico 1: ");
				scanf("%s", academico1.apellido);
				printf("\n Datos del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del academico 1 si termina en k reemplacelo por un 0:  ");
				scanf("%i", &academico1.documento);
				printf("\n Datos del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==4){
				printf("\n Ingrese el dia de ingreso del academico 1: ");
				scanf("%i", &academico1.diaIngreso);
				printf("\n Datos del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del academico 1: ");
				scanf("%s", academico1.mesIngreso);
				printf("\n Datos del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del academico 1: ");
				scanf("%i", &academico1.anioIngreso);
				printf("\n Datos del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del academico 1: ");
				scanf("%s", academico1.prevision);
				printf("\n Datos del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==8){
				printf("\n Ingrese sueldo bruto del academico 1: ");
				scanf("%i", &academico1.sueldo);
				printf("\n Datos ahora del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==9){
				printf("\n Ingrese facultad del academico 1: ");
				scanf("%s", academico1.facultad);
				printf("\n Datos ahora del Academico 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
		}
		
		//--------------------------DATOS DEL ACADEMICO 2---------------------------------
		
		if (da==2){
			printf("\nCual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>9)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del academico 2: ");
				scanf("%s", academico2.nombre);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del academico 2: ");
				scanf("%s", academico2.apellido);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del academico 2 si termina en k reemplacelo por un 0: ");
				scanf("%i", &academico1.documento);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==4){
				printf("\n Ingrese el dia de ingreso del academico 2: ");
				scanf("%i", &academico2.diaIngreso);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del academico 2: ");
				scanf("%s", academico2.mesIngreso);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del academico 2: ");
				scanf("%i", &academico2.anioIngreso);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del academico 2: ");
				scanf("%s", academico2.prevision);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==8){
				printf("\n Ingrese sueldo bruto del academico 2: ");
				scanf("%i", &academico2.sueldo);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==9){
				printf("\n Ingrese facultad del academico 2: ");
				scanf("%s", academico2.facultad);
				printf("\n Datos del Academico 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
		}
		
		//-------------------------------DATOS DEL ACADEMICO 3--------------------------------------------------
		if (da==3){
			printf("\nCual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>9)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del academico 3: ");
				scanf("%s", academico3.nombre);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del academico 3: ");
				scanf("%s", academico3.apellido);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del academico 3 si termina en k reemplacelo por un 0: ");
				scanf("%i", &academico3.documento);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==4){
				printf("\n Ingrese el dia de ingreso del academico 3: ");
				scanf("%i", &academico3.diaIngreso);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del academico 3: ");
				scanf("%s", academico3.mesIngreso);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del academico 3: ");
				scanf("%i", &academico3.anioIngreso);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del academico 3: ");
				scanf("%s", academico3.prevision);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==8){
				printf("\n Ingrese sueldo bruto del academico 3: ");
				scanf("%i", &academico3.sueldo);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==9){
				printf("\n Ingrese facultad del academico 3: ");
				scanf("%s", academico3.facultad);
				printf("\n Datos del Academico 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
		}
		
		//-----------------------------DATOS DEL ACADEMICO 4----------------------------------------
		
		if (da==4){
			printf("\nCual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>9)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del academico 4: ");
				scanf("%s", academico4.nombre);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del academico 4: ");
				scanf("%s", academico4.apellido);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del academico 4 si termina en k reemplacelo por un 0: : ");
				scanf("%i", &academico4.documento);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
				
			else if (d==4){
				printf("\n Ingrese el dia de ingreso del academico 4: ");
				scanf("%i", &academico4.diaIngreso);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del academico 4: ");
				scanf("%s", academico4.mesIngreso);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del academico 4: ");
				scanf("%i", &academico4.anioIngreso);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del academico 4: ");
				scanf("%s", academico4.prevision);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==8){
				printf("\n Ingrese sueldo bruto del academico 4: ");
				scanf("%i", &academico4.sueldo);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
			else if (d==9){
				printf("\n Ingrese facultad del academico 4: ");
				scanf("%s", academico4.facultad);
				printf("\n Datos del Academico 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
				printf("\n\n Desea cambiar los datos de los academicos? NO (0), SI (1): ");
				scanf("%i", &a);
				}
		}
	}
	
	getch();
}

void opcion_2(){
	system("cls");
	printf("Gestion de personal administrativo\n");
	printf("administrativo /(1) Nombre /(2) Apellido /(3) Documento de identidad /(4) dia ingreso /(5) mes ingreso /(6) anio ingreso /(7) p. salud /(8) sueldo b. /(9) Unidad administrativa /(10) Cargo\n\n");
	printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
	printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
	printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
	printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
	
	printf("\nDesea cambiar los datos de los administrativo? NO (0), SI (1): ");
	scanf("%i", &a);
	while((a<0 || a>1)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nDesea cambiar los datos de los administrativo? NO (0), SI (1): ");
		scanf("%i", &a);	
	}
	while(a==1){
		printf("A que administrativo desea cambiar datos? Seleccione numero de 1 a 4: ");
		scanf("%i", &da);
		while((da<1 || da>4)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nA que administrativo desea cambiar datos? Seleccione numero de 1 a 4: ");
		scanf("%i", &da);
		}
		printf("Que desea cambiar? Seleccione de 1 a 10: ");
		scanf("%i", &seleccion);
		while ((seleccion<1 || seleccion>10)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nQue desea cambiar? Seleccione de 1 a 10: ");
				scanf("%i", &seleccion);
			}
		//-------------------------------------------------------NOMBRE---------------------------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==1)){ 
			printf("\nIngrese nombre del administrativo 1: ");
			scanf("%s",administrativo1.nombreA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			
		}
		else if ((da==2) && (seleccion==1)){
			printf("\nIngrese nombre del administrativo 2: ");
			scanf("%s", administrativo2.nombreA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==1)){
			printf("\nIngrese nombre del administrativo 3: ");
			scanf("%s", administrativo3.nombreA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			
		}
		else if ((da==4) && (seleccion==1)){
			printf("\nIngrese nombre del administrativo 4: ");
			scanf("%s", administrativo4.nombreA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//--------------------------------------------------------------------NOMBRE----------------------------------------------------------------------------------------------
		
		//-------------------------------------------------------------------APELLIDO---------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==2)){ 
			printf("\nIngrese el apellido del administrativo 1: ");
			scanf("%s", administrativo1.apellidoA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
		
		}
		else if ((da==2) && (seleccion==2)){
			printf("\nIngrese el apellido del administrativo 2: ");
			scanf("%s", administrativo2.apellidoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==2)){
			printf("\nIngrese el apellido del administrativo 3: ");
			scanf("%s", administrativo3.apellidoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
		
		}
		else if ((da==4) && (seleccion==2)){
			printf("\nIngrese el apellido del administrativo 4: ");
			scanf("%s", administrativo4.apellidoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//-------------------------------------------------------------------APELLIDO---------------------------------------------------------------------------------------------
		
		//-------------------------------------------------------------------DOCUMENTO---------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==3)){ 
			printf("\nIngrese el documento del administrativo 1 si termina en k reemplacelo por un 0: ");
			scanf("%i",&administrativo1.documentoA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
		
		}
		else if ((da==2) && (seleccion==3)){
			printf("\nIngrese el documento del administrativo 2 si termina en k reemplacelo por un 0: ");
			scanf("%i",&administrativo2.documentoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==3)){
			printf("\nIngrese el documento del administrativo 3 si termina en k reemplacelo por un 0: ");
			scanf("%i",&administrativo3.documentoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			
		}
		else if ((da==4) && (seleccion==3)){
			printf("\nIngrese el documento del administrativo 4 si termina en k reemplacelo por un 0: ");
			scanf("%i",&administrativo4.documentoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//-------------------------------------------------------------------DOCUMENTO---------------------------------------------------------------------------------------------
		//-------------------------------------------------------------------DIA---------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==4)){ 
			printf("\nIngrese el dia del administrativo 1: ");
			scanf("%i",&administrativo1.diaIngresoA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			
		}
		else if ((da==2) && (seleccion==4)){
			printf("\nIngrese el dia del administrativo 2: ");
			scanf("%i",&administrativo2.diaIngresoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==4)){
			printf("\nIngrese el dia del administrativo 3: ");
			scanf("%i",&administrativo3.diaIngresoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			
		}
		else if ((da==4) && (seleccion==4)){
			printf("\nIngrese el dia del administrativo 4: ");
			scanf("%i",&administrativo4.diaIngresoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//-------------------------------------------------------------------DIA---------------------------------------------------------------------------------------------
		//---------------------------------------------------------------MES-------------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==5)){ 
			printf("\nIngrese el mes del administrativo 1: ");
			scanf("%s", administrativo1.mesIngresoA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			
		}
		else if ((da==2) && (seleccion==5)){
			printf("\nIngrese el mes del administrativo 2: ");
			scanf("%s", administrativo2.mesIngresoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==5)){
			printf("\nIngrese el mes del administrativo 3: ");
			scanf("%s", administrativo3.mesIngresoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
		
		}
		else if ((da==4) && (seleccion==5)){
			printf("\nIngrese el mes del administrativo 4: ");
			scanf("%s", administrativo4.mesIngresoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//-------------------------------------------------------------------MES---------------------------------------------------------------------------------------------
		//-------------------------------------------------------------------AÑO---------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==6)){ 
			printf("\nIngrese el anio del administrativo 1: ");
			scanf("%i",&administrativo1.anioIngresoA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			
		}
		else if ((da==2) && (seleccion==6)){
			printf("\nIngrese el anio del administrativo 2: ");
			scanf("%i",&administrativo2.anioIngresoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==6)){
			printf("\nIngrese el anio del administrativo 3: ");
			scanf("%i",&administrativo3.anioIngresoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
		
		}
		else if ((da==4) && (seleccion==6)){
			printf("\nIngrese el anio del administrativo 4: ");
			scanf("%i",&administrativo4.anioIngresoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//-------------------------------------------------------------------AÑO---------------------------------------------------------------------------------------------
		//---------------------------------------------------------------salud-------------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==7)){ 
			printf("\nIngrese la prevision de salud del administrativo 1: ");
			scanf("%s", administrativo1.previsionA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			
		}
		else if ((da==2) && (seleccion==7)){
			printf("\nIngrese la prevision de salud del administrativo 2: ");
			scanf("%s", administrativo2.previsionA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==7)){
			printf("\nIngrese la prevision de salud del administrativo 3: ");
			scanf("%s", administrativo3.previsionA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			
		}
		else if ((da==4) && (seleccion==7)){
			printf("\nIngrese la prevision de salud del administrativo 4: ");
			scanf("%s", administrativo4.previsionA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
		
		}
		//-------------------------------------------------------------------salud---------------------------------------------------------------------------------------------
		//-------------------------------------------------------------------SUELDO---------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==8)){ 
			printf("\nIngrese el sueldo del administrativo 1: ");
			scanf("%i",&administrativo1.sueldoA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
		
		}
		else if ((da==2) && (seleccion==8)){
			printf("\nIngrese el sueldo del administrativo 2: ");
			scanf("%i",&administrativo2.sueldoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==8)){
			printf("\nIngrese el sueldo del administrativo 3: ");
			scanf("%i",&administrativo3.sueldoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			
		}
		else if ((da==4) && (seleccion==8)){
			printf("\nIngrese el sueldo del administrativo 4: ");
			scanf("%i",&administrativo4.sueldoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//-------------------------------------------------------------------SUELDO---------------------------------------------------------------------------------------------
		//-------------------------------------------------------UNIDAD ADMINISTRATIVA---------------------------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==9)){ 
			printf("\nIngrese unidad administrativa del administrativo 1: ");
			scanf("%s", administrativo1.UnidadA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			
		}
		else if ((da==2) && (seleccion==9)){
			printf("\nIngrese unidad administrativa del administrativo 2: ");
			scanf("%s", administrativo2.UnidadA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==9)){
			printf("\nIngrese unidad administrativa del administrativo 3: ");
			scanf("%s", administrativo3.UnidadA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			
		}
		else if ((da==4) && (seleccion==9)){
			printf("\nIngrese unidad administrativa del administrativo 4: ");
			scanf("%s", administrativo4.UnidadA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
		
		}
		//--------------------------------------------------------------------UNIDAD ADMINISTRATIVA----------------------------------------------------------------------------------------------
		//-------------------------------------------------------------------CARGO---------------------------------------------------------------------------------------------
		if ((da==1) && (seleccion==10)){ 
			printf("\nIngrese el cargo del administrativo 1: ");
			scanf("%s", administrativo1.cargoA);
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			
		}
		else if ((da==2) && (seleccion==10)){
			printf("\nIngrese el cargo del administrativo 2: ");
			scanf("%s", administrativo2.cargoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			
		}
		else if ((da==3) && (seleccion==10)){
			printf("\nIngrese el cargo del administrativo 3: ");
			scanf("%s", administrativo3.cargoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			
		}
		else if ((da==4) && (seleccion==10)){
			printf("\nIngrese el cargo del administrativo 4: ");
			scanf("%s", administrativo4.cargoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			
		}
		//-------------------------------------------------------------------CARGO---------------------------------------------------------------------------------------------	
		printf("\n\nDesea cambiar los datos de los administrativo? NO (0), SI (1): ");
		scanf("%i", &a);
		while((a<0 || a>1)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nDesea cambiar los datos de los administrativo? NO (0), SI (1): ");
		scanf("%i", &a);	
	}
	}
	
	getch();
}

void opcion_3(){
	system("cls");
	printf("Gestion profesional externos\n");
	printf("no Profesional / (1) Nombre / (2) Apellido / (3) Documento de identidad / (4) dia ingreso / (5) mes ingreso / (6) anio ingreso / (7) p. salud / (8) sueldo b. / (9) unidad a la que presta servicios / (10) Tipo de servicio\n\n");
	printf("Profesional externo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
	printf("Profesional externo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
	printf("Profesional externo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
	printf("Profesional externo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional3.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
	
	
	printf("\n Desea cambiar los datos de los profesionales? NO (0), SI (1): ");
	scanf("%i", &a);
	while((a<0 || a>1)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nDesea cambiar los datos de los profesionales? NO (0), SI (1): ");
		scanf("%i", &a);	
	}
	while(a==1){
		printf(" A que profesional desea cambiar datos? 1, 2, 3 o 4: ");
		scanf("%i", &da);
		while((da<1 || da>4)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nA que profesional desea cambiar datos? 1, 2, 3 o 4: ");
		scanf("%i", &da);	
		}
		
		//----------------------------------DATOS DEL PROFESIONAL 1-------------------------------------------------
		
		if (da==1){
			printf("\n Cual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>10)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del profesional 1: ");
				scanf("%s", profesional1.nombre);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del profesional 1: ");
				scanf("%s", profesional1.apellido);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del profesional 1: ");
				scanf("%i", &profesional1.documento);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
				
			else if (d==4){
				printf("\n Ingrese dia de ingreso del profesional 1: ");
				scanf("%i", &profesional1.diaIngreso);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
			
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del profesional 1: ");
				scanf("%s", profesional1.mesIngreso);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del profesional 1: ");
				scanf("%i", &profesional1.anioIngreso);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del profesional 1: ");
				scanf("%s", profesional1.prevision);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
			else if (d==8){
				printf("\n Ingrese sueldo del profesional 1: ");
				scanf("%i", &profesional1.sueldo);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
			else if (d==9){
				printf("\n Ingrese unidad a la que presta servicio el profesional 1: ");
				scanf("%s", profesional1.unidadServicio);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
				
				}
			else if (d==10){
				printf("\n Ingrese tipo de servicio del profesional 1: ");
				scanf("%s", profesional1.tipoServicio);
				printf("\n Datos del Profesional 1: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
			
				}
		}
		
		//-------------------------------------------DATOS DEL PROFESIONAL 2 ---------------------------------------------
		
		if (da==2){
			printf("\n Cual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>10)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del profesional 2: ");
				scanf("%s", profesional2.nombre);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del profesional 2: ");
				scanf("%s", profesional2.apellido);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del profesional 2: ");
				scanf("%i", &profesional2.documento);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
				
			else if (d==4){
				printf("\n Ingrese dia de ingreso del profesional 2: ");
				scanf("%i", &profesional2.diaIngreso);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del profesional 2: ");
				scanf("%s", profesional2.mesIngreso);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del profesional 2: ");
				scanf("%i", &profesional2.anioIngreso);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del profesional 2: ");
				scanf("%s", profesional2.prevision);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
			else if (d==8){
				printf("\n Ingrese sueldo del profesional 2: ");
				scanf("%i", &profesional2.sueldo);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
			else if (d==9){
				printf("\n Ingrese unidad a la que presta servicios el profesional 2: ");
				scanf("%s", profesional2.unidadServicio);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
			else if (d==10){
				printf("\n Ingrese tipo de servicio del profesional 2: ");
				scanf("%s", profesional2.tipoServicio);
				printf("\n Datos del Profesional 2: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
				
				}
		}
		
		//-------------------------------------------DATOS DEL PROFESIONAL 3 -----------------------------------------------------
		if (da==3){
			printf("\n Cual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>10)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del profesional 3: ");
				scanf("%s", profesional3.nombre);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del profesional 3: ");
				scanf("%s", profesional3.apellido);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del profesional 3: ");
				scanf("%i", &profesional3.documento);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
				
			else if (d==4){
				printf("\n Ingrese dia de ingreso del profesional 3: ");
				scanf("%i", &profesional3.diaIngreso);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del profesional 3: ");
				scanf("%s", profesional3.mesIngreso);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del profesional 3: ");
				scanf("%i", &profesional3.anioIngreso);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del profesional 3: ");
				scanf("%s", profesional3.prevision);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
			else if (d==8){
				printf("\n Ingrese sueldo del profesional 3: ");
				scanf("%i", &profesional3.sueldo);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
			else if (d==9){
				printf("\n Ingrese unidad a la que presta servicio el profesional 3: ");
				scanf("%s", profesional3.unidadServicio);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
			else if (d==10){
				printf("\n Ingrese tipo de servicio del profesional 3: ");
				scanf("%s", profesional3.tipoServicio);
				printf("\n Datos del Profesional 3: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
				
				}
		}
		
		//-------------------------------------------DATOS DEL PROFESIONAL 4 -----------------------------------------------
		
		if (da==4){
			printf("\n Cual dato desea cambiar? (numero): ");
			scanf("%i", &d);
			while ((d<1 || d>10)){
				printf("numero incorrecto vuelva ingresar el valor");
				printf("\nCual dato desea cambiar? (numero): ");
				scanf("%i", &d);
			}
			
			if (d==1){
				printf("\n Ingrese nombre del profesional 4: ");
				scanf("%s", profesional4.nombre);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
			
			else if (d==2){
				printf("\n Ingrese apellido del profesional 4: ");
				scanf("%s", profesional4.apellido);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
				
			else if (d==3){
				printf("\n Ingrese documento de identidad del profesional 4: ");
				scanf("%i", &profesional4.documento);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
				
			else if (d==4){
				printf("\n Ingrese dia de ingreso del profesional 4: ");
				scanf("%i", &profesional4.diaIngreso);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
			else if (d==5){
				printf("\n Ingrese mes de ingreso del profesional 4: ");
				scanf("%s", profesional4.mesIngreso);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
			else if (d==6){
				printf("\n Ingrese anio de ingreso del profesional 4: ");
				scanf("%i", &profesional4.anioIngreso);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
			else if (d==7){
				printf("\n Ingrese tipo de prevision de salud del profesional 4: ");
				scanf("%s", profesional4.prevision);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
			else if (d==8){
				printf("\n Ingrese sueldo del profesional 4: ");
				scanf("%i", &profesional4.sueldo);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				
				}
			else if (d==9){
				printf("\n Ingrese unidad a la que presta servicio el profesional 4: ");
				scanf("%s", profesional4.unidadServicio);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				}
			else if (d==10){
				printf("\n Ingrese tipo de servicio del profesional 4: ");
				scanf("%s", profesional4.tipoServicio);
				printf("\n Datos del Profesional 4: / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional4.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);
				}
		}
		
		printf("\n Desea cambiar los datos de los profesionales? NO (0), SI (1): ");
		scanf("%i", &a);
		while((a<0 || a>1)){
			printf("numero incorrecto vuelva ingresar el valor");
			printf("\nDesea cambiar los datos de los profesionales? NO (0), SI (1): ");
			scanf("%i", &a);	
		}
	}
	getch();
}

void opcion_4(){
	system("cls");
	printf("Pago del personal\n");
	printf("\nDesea gestionar el pago del personal? NO (0), SI (1): ");
	scanf("%i", &pago);
	while ((pago<0 || pago >1)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nDesea gestionar el pago del personal? NO (0), SI (1): ");
		scanf("%i", &pago);
	}
	while(pago==1){
		printf("A que departamento desea gestionar el pago? (1) Academico (2) Administrativo (3) Profesional externo: ");
		scanf("%i", &gp);
		while ((gp<1 ||  gp>3)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nA que departamento desea gestionar el pago? (1) Academico (2) Administrativo (3) Profesional externo: ");
		scanf("%i", &gp);
		}
		if (gp==1){
			printf("\nGestion personal academico\n");
			printf("no Academico / (1) Nombre / (2) Apellido / (3) Documento de identidad / (4) dia ingreso / (5) mes ingreso / (6) anio ingreso / (7) p. salud / (8) sueldo b. / (9) facultad\n\n");
			printf("Academico 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
			printf("Academico 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
			printf("Academico 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
			printf("Academico 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
		}
		else if (gp==2){
			printf("\nGestion de personal administrativo\n");
			printf("administrativo /(1) Nombre /(2) Apellido /(3) Documento de identidad /(4) dia ingreso /(5) mes ingreso /(6) anio ingreso /(7) p. salud /(8) sueldo b. /(9) Unidad admirativa /(10) Cargo\n\n");
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
						
		}	
		else if (gp==3){
			printf("\nGestion profesional externos\n");
			printf("no Profesional / (1) Nombre / (2) Apellido / (3) Documento de identidad / (4) dia ingreso / (5) mes ingreso / (6) anio ingreso / (7) p. salud / (8) sueldo b. / (9) unidad a la que presta servicios / (10) Tipo de servicio\n\n");
			printf("Profesional externo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
			printf("Profesional externo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
			printf("Profesional externo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
			printf("Profesional externo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional3.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);	
		}
		printf("\nA que personal desea gestinar el pago?: ");
		scanf("%i", &gp1);
		while ((gp1<1 ||  gp1>4)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nA que personal desea gestinar el pago?: ");
		scanf("%i", &gp1);
		}
		//-------------------------------------------------------------------------------ACADEMICOS---------------------------------------------------------------------------------------
		if ((gp==1) && (gp1==1)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Academico 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico1.nombre, academico1.apellido, academico1.documento, academico1.diaIngreso, academico1.mesIngreso, academico1.anioIngreso, academico1.prevision, academico1.sueldo, academico1.facultad);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(academico1.sueldo)-(academico1.sueldo*(0.10+0.07-0.05));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==1) && (gp1==2)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Academico 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico2.nombre, academico2.apellido, academico2.documento, academico2.diaIngreso, academico2.mesIngreso, academico2.anioIngreso, academico2.prevision, academico2.sueldo, academico2.facultad);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(academico2.sueldo)-(academico2.sueldo*(0.10+0.07-0.05-0.05));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==1) && (gp1==3)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Academico 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico3.nombre, academico3.apellido, academico3.documento, academico3.diaIngreso, academico3.mesIngreso, academico3.anioIngreso, academico3.prevision, academico3.sueldo, academico3.facultad);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(academico3.sueldo)-(academico3.sueldo*(0.10+0.07-0.05));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==1) && (gp1==4)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Academico 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s \n", academico4.nombre, academico4.apellido, academico4.documento, academico4.diaIngreso, academico4.mesIngreso, academico4.anioIngreso, academico4.prevision, academico4.sueldo, academico4.facultad);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(academico4.sueldo)-(academico4.sueldo*(0.10+0.07-0.05-0.05));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		//-------------------------------------------------------------------------------ACADEMICOS---------------------------------------------------------------------------------------
		//-------------------------------------------------------------------------------ADMINISTRATIVO---------------------------------------------------------------------------------------
		if ((gp==2) && (gp1==1)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("administrativo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo1.nombreA,administrativo1.apellidoA, administrativo1.documentoA, administrativo1.diaIngresoA, administrativo1.mesIngresoA, administrativo1.anioIngresoA, administrativo1.previsionA, administrativo1.sueldoA, administrativo1.UnidadA,administrativo1.cargoA);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(administrativo1.sueldoA)-(administrativo1.sueldoA*(0.10+0.07-0.03-0.05));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==2) && (gp1==2)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("administrativo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo2.nombreA,administrativo2.apellidoA, administrativo2.documentoA, administrativo2.diaIngresoA, administrativo2.mesIngresoA, administrativo2.anioIngresoA, administrativo2.previsionA, administrativo2.sueldoA, administrativo2.UnidadA,administrativo2.cargoA);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(administrativo2.sueldoA)-(administrativo2.sueldoA*(0.10+0.07-0.03-0.07));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==2) && (gp1==3)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("administrativo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo3.nombreA,administrativo3.apellidoA, administrativo3.documentoA, administrativo3.diaIngresoA, administrativo3.mesIngresoA, administrativo3.anioIngresoA, administrativo3.previsionA, administrativo3.sueldoA, administrativo3.UnidadA,administrativo3.cargoA);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(administrativo3.sueldoA)-(administrativo3.sueldoA*(0.10+0.07-0.03-0.07));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==2) && (gp1==4)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("administrativo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s \n", administrativo4.nombreA,administrativo4.apellidoA, administrativo4.documentoA, administrativo4.diaIngresoA, administrativo4.mesIngresoA, administrativo4.anioIngresoA, administrativo4.previsionA, administrativo4.sueldoA, administrativo4.UnidadA,administrativo4.cargoA);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(administrativo4.sueldoA)-(administrativo4.sueldoA*(0.10+0.07-0.03-0.07));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		//-------------------------------------------------------------------------------ADMINISTRATIVO---------------------------------------------------------------------------------------
		//-------------------------------------------------------------------------------PROFESIONAL EXTERNO---------------------------------------------------------------------------------------
		if ((gp==3) && (gp1==1)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Profesional externo 1 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional1.nombre, profesional1.apellido, profesional1.documento, profesional1.diaIngreso, profesional1.mesIngreso, profesional1.anioIngreso, profesional1.prevision, profesional1.sueldo, profesional1.unidadServicio, profesional1.tipoServicio);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(profesional1.sueldo)-(profesional1.sueldo*(0.10+0.07));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==3) && (gp1==2)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Profesional externo 2 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional2.nombre, profesional2.apellido, profesional2.documento, profesional2.diaIngreso, profesional2.mesIngreso, profesional2.anioIngreso, profesional2.prevision, profesional2.sueldo, profesional2.unidadServicio, profesional2.tipoServicio);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(profesional2.sueldo)-(profesional2.sueldo*(0.10+0.07));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==3) && (gp1==3)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Profesional externo 3 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional3.nombre, profesional3.apellido, profesional3.documento, profesional3.diaIngreso, profesional3.mesIngreso, profesional3.anioIngreso, profesional3.prevision, profesional3.sueldo, profesional3.unidadServicio, profesional3.tipoServicio);
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(profesional3.sueldo)-(profesional3.sueldo*(0.10+0.07));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		else if ((gp==3) && (gp1==4)){
			system("cls");
			printf("\nSu seleccion fue: ");
			printf("Profesional externo 4 / (1) %s / (2) %s / (3) %i / (4) %i / (5) %s / (6) %i / (7) %s / (8) %i / (9) %s / (10) %s\n", profesional4.nombre, profesional4.apellido, profesional4.documento, profesional4.diaIngreso, profesional4.mesIngreso, profesional3.anioIngreso, profesional4.prevision, profesional4.sueldo, profesional4.unidadServicio, profesional4.tipoServicio);	
			printf("\nEl pago del personal esta sujeto a las siguientes condiciones\n\n");
			condiciones();
			sueldo_liquido=(profesional4.sueldo)-(profesional4.sueldo*(0.10+0.07));
			printf("El sueldo liquido a pagar es de: %.f",sueldo_liquido);
		}
		
		//-------------------------------------------------------------------------------PROFESIONAL EXTERNO---------------------------------------------------------------------------------------
		printf("\n\nDesea gestionar el pago del personal? NO (0), SI (1): ");
		scanf("%i", &pago);	
		while ((pago<0 || pago >1)){
		printf("numero incorrecto vuelva ingresar el valor");
		printf("\nDesea gestionar el pago del personal? NO (0), SI (1): ");
		scanf("%i", &pago);
		}
	}
	
	
	getch();
}

void opcion_5(){
	system("cls");
	printf("Busquedas de sistemas\n");
	getch();
}

void opcion_6(){
}

void condiciones(){
	printf("-AFP descuento del 10 porciento\n\n");
	printf("-Salud descuento del 7 porciento\n\n");
	printf("-Si lleva mas de 20 años prestando servicios tendra una bonificacion del 5 porciento\n\n");
	printf("-Si lleva mas de 30 años prestando servicios tendra una bonificacion de 7 porciento\n\n");
	printf("-Si es personal administrativo bonificacion del 3 porciento\n\n");
	printf("-Si es personal docente bonificacion del 5 porciento\n\n");
	printf("-Importante mencionar que el descuento por años de servicio y tipo de personal no se aplican al profesional externo\n\n");

}


