#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Variables Globales
int i;

//Funciones
int validarString(char stringValidar[]){
	int lngtd;
	
	lngtd=strlen(stringValidar);
	
	for(i=0;i<lngtd;i++){
		if(!isalpha(stringValidar[i])&&stringValidar[i]!=' '){//Filtra aquello que no sea espacio ni letra
			printf("Ingresa solo Caracteres\n");
			printf("_____________________________\n");
			return 0;
		}
	}
	return 1;
}

int validarRUT(int aux, int rutValidar){
	if(!aux||rutValidar<111111111||rutValidar>999999999){//Scanf devuelve la cantidad de datos leidos correctamente (en este caso deberia ser 1)
		printf("RUT Incorrecto\n");
		printf("_____________________________\n");
		return 0;
	}
	else{
		return 1;	
	}
}

int validarFecha(int aux, int diaValidar, int mesValidar, int anioValidar){
	if(aux!=3||(diaValidar<01||diaValidar>31)||(mesValidar<01||mesValidar>12)||(anioValidar<1950||anioValidar>2021)){//Scanf devuelve la cantidad de datos leidos correctamente (en este caso deberian ser 3)
		printf("Fecha Incorrecta\n");
		printf("_____________________________\n");
		return 0;
	}
	else{
		return 1;
	}
}

int validarPrevision(char previsionValidar[]){
	int lngtd;
		
	lngtd=strlen(previsionValidar);
		
		for(i=0;i<lngtd;i++){
			previsionValidar[i]=toupper(previsionValidar[i]);//pasamos todo a MAYUS para comparar
		}
		if(strcmp(previsionValidar,"FONASA")&&strcmp(previsionValidar,"ISAPRE")&&strcmp(previsionValidar,"PARTICULAR")){
			printf("Prevision Incorrecta\n");
			printf("_____________________________\n");
			return 0;
		}
		else{
			return 1;
		}
}

int validarSueldo(int aux, int sueldoValidar){
	if(!aux||sueldoValidar<326500){//Sueldo minimo
		printf("Sueldo Incorrecto\n");
		printf("_____________________________\n");
		return 0;
	}
	else{
		return 1;	
	}		
}

int validarEntero(int aux, int enteroValidar){
	if(!aux||enteroValidar<=0){//Sueldo minimo
		printf("Numero Incorrecto\n");
		printf("_____________________________\n");
		return 0;
	}
	else{
		return 1;	
	}		
}
