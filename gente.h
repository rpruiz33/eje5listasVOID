#ifndef GENTE_H_INCLUDED
#define GENTE_H_INCLUDED

struct GenteE;
typedef struct GenteE * GenteP;
GenteP crearGente();
void liberaGente(GenteP g);

void mostraGente(GenteP g);
void getNombrePersona(GenteP g);
//*char * getNombre(GenteP g);
#endif // GENTE_H_INCLUDED
