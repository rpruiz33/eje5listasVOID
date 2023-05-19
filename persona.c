#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "persona.h"

struct NodoE{
  Dato item;
  Nodo prox;
};



 struct ListaEncE {
  Nodo inicio;
  int tam;
};



ListaEnc crearLista() {
    ListaEnc lista = malloc(sizeof(struct ListaEncE));


    if (lista == NULL){
        return NULL;}


    lista->inicio = NULL;
    lista->tam = 0;


    return lista;
}




int liberarLista(ListaEnc lista) {
    if (lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}

    // remove todos os elementos da lista
    while(!estaVacia(lista)){
        remover(lista, NULL, 0);}

    free(lista);
    lista->inicio = NULL; //El tama�po ya quedo en cero por los remove tam--



    return OK;
}


int estaVacia(ListaEnc lista) {
    if (lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}

    if (lista->inicio == NULL){
        return TRUE;}

    return FALSE;
}

Nodo crearNodo(Dato item, Nodo prox) {


	Nodo nodo = malloc(sizeof(struct NodoE));


	if (nodo == NULL){
        return NULL;}

	nodo->item = item;
	nodo->prox = prox;

	return nodo;


}

int insertarInicio(ListaEnc lista, Dato item) {
    if (lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}

    Nodo nuevoNodo= crearNodo(item, lista->inicio);

    if (nuevoNodo== NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}

    lista->inicio = nuevoNodo;
    lista->tam++;

    return OK;
}

int insertar(ListaEnc lista, Dato item, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (pos < 0 || pos > lista->tam)
        return INDICE_INVALIDO;

    Nodo nuevoNodo;
    if (pos == 0) {
        return insertarInicio(lista, item);
    } else {
        // prepara para inserir
        Nodo aux;
        aux = lista->inicio;
        for(int i = 0; i < pos - 1; i++) {
            aux = aux->prox;
        }

        // adiciona o n�
        nuevoNodo= crearNodo(item, aux->prox);
        if (nuevoNodo== NULL)
            return ESTRUCTURA_NO_INICIALIZADA;
        aux->prox = nuevoNodo;
    }
    lista->tam++;
    return OK;
}

int insertarFin(ListaEnc lista, Dato item) {
    return insertar(lista, item, lista->tam);
}

int removerInicio(ListaEnc lista, Dato* item) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    Nodo aux = lista->inicio;
    if (item != NULL)
        *item = aux->item;
    lista->inicio = aux->prox;
    free(aux);
    aux = NULL;
    lista->tam--;
    return OK;

}

int remover(ListaEnc lista, Dato* item, int pos) {
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;

    Nodo ant, atual;
    if (pos == 0) {
        return removerInicio(lista, item);
    } else {
        // prepara para remover
        ant = NULL;
        atual = lista->inicio;
        for(int i = 0; i < pos; i++) {
            ant = atual;
            atual = atual->prox;
        }

        // remove o n� atual
        ant->prox = atual->prox;
        if (item != NULL)
            *item = atual->item;
        free(atual);
        atual = NULL;
    }
    lista->tam--;
    return OK;
}

int removerFin(ListaEnc lista, Dato* item) {
    return remover(lista, item, lista->tam - 1);
}

int obtenerElemento(ListaEnc lista, Dato* item, int pos) {

    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;

    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;


    if (item == NULL)
        return PARAMETRO_INVALIDO;

    Nodo aux;
    aux = lista->inicio;
    for(int i = 0; i < pos; i++) {
        aux = aux->prox;
    }
    *item = aux->item;

    return OK;
}

int obtenerTamanio(ListaEnc lista, int* tam) {




    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (tam == NULL)
        return PARAMETRO_INVALIDO;

    *tam = lista->tam;




    return OK;
}

void imprimir(ListaEnc lista,ListaEnc lista1) {
    int cantidad;

  printf("-------persona----------");
    printf("[");
Dato e;
    obtenerElemento(lista1, &e, 0);
    mostraGente(e->g);
     obtenerTamanio(lista, &cantidad);
    for(int i = 0;i < cantidad; i++) {

        Dato el;
        obtenerElemento(lista, &el, i);
        mostrardispositivo(el->d);


    }
    printf("]\n");
}
int busqueda (ListaEnc lista,char  busco[30]){
int encontrado=-1;
int tam;
obtenerTamanio(lista,&tam);
Nodo actual=lista->inicio;
for (int i=0;i<tam;i++){
    if (strcmp(getCodigo(actual->item->d),busco)==0){
        encontrado=i;
        i=tam;
    }
    actual=actual->prox;

}
return encontrado;


}

