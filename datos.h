#ifndef DATOS_H_INCLUDED
#define DATOS_H_INCLUDED
#include "gente.h"
#include "dispositivos.h"

//Lo hice así para no poner los get y set
struct DatoEstructura{

    DispositivoP d;
    GenteP g;


};

typedef struct DatoEstructura * Dato;

Dato crearDato();
Dato crearDatoG();

#endif // DATOS_H_INCLUDED
