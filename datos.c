#include <stdio.h>
#include <stdlib.h>
#include "datos.h"






Dato crearDato(Dato a){

    Dato d = malloc(sizeof(struct DatoEstructura));

    d->d= a;


    return d;


};
Dato crearDatoG(Dato a){

    Dato d = malloc(sizeof(struct DatoEstructura));

    d->g= a;


    return d;


};
