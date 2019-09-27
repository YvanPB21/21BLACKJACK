#pragma once
using namespace System::Drawing;
class Cartas
{
protected:
	int num;
	int tipo;//1->espadas||2->trebol||3->corazones||4->diamantes
	int x, y;
	int ancho, alto;
	int indx,indy;

	
public:
	Cartas(int _num,int _x,int _y);
	~Cartas();
	virtual void Mostrar(BufferedGraphics ^g);
	int getNum();
};

Cartas::Cartas(int _num, int _x, int _y )
{
	Bitmap^img = gcnew Bitmap("baraja3.png");
	ancho = img->Width /13 ;
	alto = img->Height/4;

}


Cartas::~Cartas()
{
}

void Cartas::Mostrar(BufferedGraphics ^ g){}

int Cartas::getNum() { return num+1; }
