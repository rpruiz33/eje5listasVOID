#include <stdio.h>
#include <stdlib.h>
#include "dispositivos.h"

#include "gente.h"
struct GenteE{
char nombre[30];
DispositivoP d;
};

GenteP crearGente(){

GenteP g=malloc(sizeof(struct GenteE));

printf("\ningrese el nombre de la persona\n");
fflush(stdin);
gets(g->nombre);

//g->d=dispositivoXteclado();
return g;


}
void liberaGente(GenteP g){
free(g);
};


void mostraGente(GenteP g){
printf("\nel nombre es %s\n",g->nombre);



}
void crearDispositivcSinNombre(GenteP g){
g->d=dispositivoXteclado();

}
/*char * getNombreDis(GenteP g){
return g->d;


};*/

void getNombrePersona(GenteP g){
return g->nombre;
}
