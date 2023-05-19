#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

struct FechaE;
typedef struct FechaE *FechaP;
FechaP crearFecha();
void mostrarFecha(FechaP f);
void destructorFecha(FechaP f);

#endif // FECHA_H_INCLUDED
