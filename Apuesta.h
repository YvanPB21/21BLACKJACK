#pragma once
using namespace System::Drawing;
class Apuesta
{
private:
	int x, y;
	int num;
	int ancho, alto;
	int indx, indy;
public:
	Apuesta(int _num, int _x, int _y);
	~Apuesta();
	void Mostrar(BufferedGraphics^g);
	int getTotalBet();
};
Apuesta::Apuesta(int _num, int _x, int _y)
{
	Bitmap^img = gcnew Bitmap("fichas.png");
	ancho = img->Width / 4;
	alto = img->Height / 3;
	num = _num;
	x = _x;
	y = _y;

}
Apuesta::~Apuesta(){}

void Apuesta::Mostrar(BufferedGraphics^g)
{
	switch (num)
	{
	
	case 1  :indx = 2; indy = 0;break;
	case 5  :indx = 0; indy = 1;break;
	case 10 :indx = 1; indy = 1;break;
	case 25 :indx = 2; indy = 1;break;
	case 100:indx = 3; indy = 1;break;
	}
	Bitmap^img = gcnew Bitmap("fichas.png");
	Rectangle porcionAUsar = Rectangle(ancho*indx, alto*indy, ancho, alto);
	Rectangle reducirSprite = Rectangle(x, y, ancho*0.5, alto*0.5);
	g->Graphics->DrawImage(img, reducirSprite, porcionAUsar, GraphicsUnit::Pixel);
}
int Apuesta::getTotalBet()
{
	return num;
}