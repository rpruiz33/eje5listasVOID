#ifndef DISPOSITIVOS_H_INCLUDED
#define DISPOSITIVOS_H_INCLUDED

struct DispositivoE;

typedef struct DispositivoE * DispositivoP;

DispositivoP crearDispositivc(char tipo[20], char marca[20],char codigo[3], float precio, int memoria);
DispositivoP dispositivoXteclado();

void mostrardispositivo(DispositivoP a);

char  * getCodigo(DispositivoP a);

#endif // DISPOSITIVOS_H_INCLUDED
