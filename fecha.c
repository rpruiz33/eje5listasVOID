#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "fecha.h"

struct FechaE{
int anio;
int mes;
int dia;
int edad;
};

FechaP crearFecha(){
FechaP f=malloc(sizeof(struct FechaE));
int anio, mes,dia;
printf("ingrese el anio  dia y mes de nacimiento \n");

scanf("%d",&anio);
scanf("%d",&mes);
scanf("%d",&dia);
    struct tm fecha_nacimiento = {
        .tm_year =   anio-1900, // año de nacimiento (se resta 1900 para obtener el valor correcto)
        .tm_mon =  mes-1, // mes de nacimiento (se resta 1 para obtener el valor correcto)
        .tm_mday = dia // día de nacimiento
    };

      time_t tiempo_actual = time(NULL);

      time_t tiempo_nacimiento = mktime(&fecha_nacimiento);
      double segundos_transcurridos = difftime(tiempo_actual, tiempo_nacimiento);
          f->edad = segundos_transcurridos / (365.25 * 24 * 60 * 60);

      return f;


}

void mostrarFecha(FechaP f){

printf("la fecha de edad es %d\n",f->edad);

}

void destructorFecha(FechaP f){
free(f);
}
