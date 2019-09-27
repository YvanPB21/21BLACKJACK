#pragma once
#include <stdlib.h>    
#include <time.h>
#include "Apuesta.h"
#include"Cartas.h"
#include "Espadas.h"
#include "Corazones.h"
#include "Diamantes.h"
#include "Trebol.h"
#include "LIsta.h"

#include <stdlib.h>

class Manejador
{
private:
	Lista<Cartas*>*Cartas_Jugador;
	Cartas* cartas_j;
	Cartas*aux;
	int x_j = 100;
	int cont_j=0;
	int suma_j = 0;
	int num = 0;

	Lista<Apuesta*>*Bet_jug;
	Apuesta*bet;
	Apuesta*aux2;
	int x_b = 250;
	int cont_b = 0;
	int suma_b=0;
public:
	Manejador() {
		Cartas_Jugador = new Lista<Cartas*>();
		aux = new Cartas(5,40,40);
		Bet_jug = new Lista<Apuesta*>();
		aux2 = new Apuesta(3, 3, 3);
	}
	~Manejador() {}
//-----------------------------JUGADOR----------------------------
	void Insertar_Cartas_Jugador(int tipo,bool bjk) {
		srand(time(NULL));
		if (bjk == false) {
			cont_j++;
			num = rand() % 12 + 1;
			switch (tipo)
			{
			case 1:	 cartas_j = new Espadas  (num, x_j, 350); break;
			case 2:	 cartas_j = new Corazones(num, x_j, 350); break;
			case 3:	 cartas_j = new Diamantes(num, x_j, 350); break;
			case 4:	 cartas_j = new Trebol	 (num, x_j, 350); break;
			}
			Cartas_Jugador->agregaInicial(cartas_j);
			x_j = x_j + 110;
			suma_j += cartas_j->getNum();
		}
	}
	void Dibuja_Cartas_Jugador(BufferedGraphics^buffer) {
		for (int i = 0; i < cont_j; i++) {
			aux = Cartas_Jugador->obtenerPos(i);
			aux->Mostrar(buffer);
		}
		cartas_j->Mostrar(buffer);
	}
	int getSuma_J() { return suma_j; }
	bool GA() {
		if (getContJug() > 0) return true;
		else return false;
	}
	//------------------------
	void Insertar_Apuesta(int n) {
		cont_b++;
		bet = new Apuesta(n, x_b, 700);
		x_b = x_b + 50;
		Bet_jug->agregaInicial(bet);
		suma_b += bet->getTotalBet();
	}
	void Dibuja_Apuesta(BufferedGraphics^buffer) {
		for (int i = 0; i < cont_b; i++) {
			aux2 = Bet_jug->obtenerPos(i);
			aux2->Mostrar(buffer);
		}
		bet->Mostrar(buffer);
	}
	int getContJug() {
		return cont_j;
	}
	int getContApu() {
		return cont_b;
	}
	bool GA2() {
		if (getContApu() > 0) return true;
		else return false;
	}
	int getBEt() { return suma_b; }
};


