#pragma once
#include "Cartas.h"
class Trebol :
	public Cartas
{
public:
	Trebol(int _num, int _x, int _y);
	~Trebol();
	void Mostrar(BufferedGraphics ^g);
};

Trebol::Trebol(int _num, int _x, int _y) : Cartas(_num, _x, _y)
{
	num = _num;
	x = _x;
	y = _y;
}


Trebol::~Trebol()
{
}

void Trebol::Mostrar(BufferedGraphics ^ g)
{
	switch (num)
	{
	case 0 :indx = 0 ; indy = 3;break;
	case 1 :indx = 1 ; indy = 3;break;
	case 2 :indx = 2 ; indy = 3;break;
	case 3 :indx = 3 ; indy = 3;break;
	case 4 :indx = 4 ; indy = 3;break;
	case 5 :indx = 5 ; indy = 3;break;
	case 6 :indx = 6 ; indy = 3;break;
	case 7 :indx = 7 ; indy = 3;break;
	case 8 :indx = 8 ; indy = 3;break;
	case 9 :indx = 9 ; indy = 3;break;
	case 10:indx = 10; indy = 3;break;
	case 11:indx = 11; indy = 3;break;
	case 12:indx = 12; indy = 3;break;
	case 13:indx = 13; indy = 3;break;
	}
	Bitmap^img = gcnew Bitmap("baraja3.png");
	Rectangle porcionAUsar = Rectangle(ancho*indx, alto*indy, ancho, alto);
	Rectangle reducirSprite = Rectangle(x, y, ancho*0.5, alto*0.5);
	g->Graphics->DrawImage(img, reducirSprite, porcionAUsar, GraphicsUnit::Pixel);
	delete img;
}
