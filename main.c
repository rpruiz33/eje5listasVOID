#include <stdio.h>
#include <stdlib.h>
#include "datos.h"
#include "persona.h"
#include "dispositivos.h"


int main()
{
    int pos=0;
int op=0;
char marca[30];

/*DispositivoP a1 = crearDispositivc("tech","sansung","a1", 222.33,1234);
DispositivoP a2 = crearDispositivc("tech","sansung","a2", 222.33,1234);
DispositivoP a3= crearDispositivc("tech","sansung","a3" ,222.33,1234);*/
   int r;
   char  busco[30];
DispositivoP a0;
GenteP a7;
    ListaEnc lista = crearLista();
ListaEnc lista1=crearLista();

  /*  insertarInicio(lista, crearDato(a1) );


    insertarFin(lista, crearDato(a2));

    insertarInicio(lista,crearDato(a3) );
*/

do{
         printf("\ningrese 0 para ingresar la persona\n");
        printf("ingrese 1 para comprar dispositivo\n");
        printf("ingrese 2 para vender dispositivo\n");
        printf("ingrese 3 para buscar dipositivos\n");
        printf("ingrese 4 para ver la lista de dispositivos\n");
        scanf("%d",&op);
        switch(op){
         case 0:
            a7=crearGente();

            insertarInicio(lista1,crearDatoG(a7));
            break;
         case 1:
            a0=dispositivoXteclado();
            insertarInicio(lista,crearDato(a0));
            break;
         case 2:
             printf("ingrese el codigo del dispositivo");
             fflush(stdin);
             gets(busco);
           pos= busqueda(lista,busco);




             remover(lista,a0,pos);
            break;
         case 3:
             printf("ingrese el codigo de dipositivo que desea buscar");
             fflush(stdin);
             gets(busco);
             r= busqueda (lista,busco);
             printf("el dipositivo esta en la pos : %d",r);
             break;
         case 4:
                imprimir(lista, lista1);
                break;

            }




}while(op!=-1);






    return 0;
}
