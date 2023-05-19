#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
#include "dispositivos.h"



struct DispositivoE{
    char codigo[5];
    char tipo[20];
    char marca[20];
    float precio;
    int memoria;


};




DispositivoP crearDispositivc(char tipo[20], char marca[20],char codigo[5], float precio, int memoria){

    DispositivoP a = malloc(sizeof(struct DispositivoE));


    strcpy(a->tipo, tipo);
    strcpy(a->marca, marca);
     strcpy(a->codigo, codigo);
    a->precio = precio;
    a->memoria = memoria;

    return a;
};
DispositivoP dispositivoXteclado(){

   char codigo[5]; char tipo[20]; char marca[20]; float precio; int memoria;

    printf("-----Cargando dispositivoo----- 'n");

    printf("\nIntroducir el codigo:\n");
    fflush(stdin);
    gets(codigo);

    printf("\nIntroducir el tipo:\n");
    fflush(stdin);
    gets(tipo);

    printf("\nIntroducir la marca:\n");
    fflush(stdin);
    gets(marca);



    printf("\nIntroducir el precio\n");
    scanf("%f", &precio);

    printf("\nIntroducir la memoria\n");
    scanf("%d", &memoria);



    return crearDispositivc(tipo,marca,codigo,precio,memoria);
};

void mostrardispositivo(DispositivoP a){

    printf("\n\n---------dipositivo-----------%s--\n",a->codigo);
    printf("TIPO: %s  marca: %s,precio %f, memoria %d----%s\n", a->tipo, a->marca,a->precio,a->memoria,a->codigo);




};

/*char * getTipo(Animal a){
return a->tipo;};

char * getSubtipo(Animal a){
return a->subtipo;};
*/
char * getCodigo(DispositivoP a){
return a->codigo;
}
/*
float getPeso(Animal a){
return a->peso;};

float getEdad(Animal a){
return a->edad;};

char getSexo(Animal a){
return a->sexo;}


void setTipo(Animal a, char nuevo[20]){

    strcpy(a->tipo, nuevo);

};

void setSubtipo(Animal a, char nuevo[20]){

    strcpy(a->subtipo, nuevo);

};

void setNombre(Animal a, char nuevo[20]){

    strcpy(a->nombre, nuevo);

};

void setPeso(Animal a, float nuevo){

   a->peso =  nuevo;

};

void setEdad(Animal a, int nuevo){

   a->edad =  nuevo;

};

void setSexo(Animal a, char nuevo){

   a->sexo =  nuevo;

};
*/
