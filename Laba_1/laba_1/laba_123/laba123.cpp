#include <iostream>;
#include <math.h>// подключение математической библиотеки 
#include <Windows.h>
using namespace std;


void P(int x, int y,double &res)//функция отвечающая за заштрихованную область фигуры в 1 четверти
{
if((x>=0)&&(x<=2)&&(y>=-2)&&(y<=0)&&(x*x+y*y>=1))
res=1;
return;
}

void S(int x, int y,double &res)//функция отвечающая за заштрихованную область фигуры в 2 четверти
{
if((x>=-2)&&(x<=0)&&(y>=0)&&(y<=2)&&(x*x+y*y>=1))
res=1;
return;
}

void L(int x, int y,double &res)//функция отвечающая за заштрихованную область фигуры в 3 четверти
{
if((x<=0)&&(y<=0)&&(x*x+y*y<=1))
res=1;
return;
}

void D(int x, int y,double &res)//функция отвечающая за заштрихованную область фигуры в 4 четверти
{
if((x>=0)&&(y>=0)&&(x*x+y*y<=1))
res=1;
return;
}

int main()
{
	SetConsoleOutputCP(1251);
	int x,y;
	double res;// переменная отвечающая за попадание точки в заштрихованную область
	cout<<"Введите координаты точки";
	cout<<"Введите x--";
	cin>>x;
	cout<<"Введите y--";
	cin>>y;
	res=0;//инициализация переменной 
    P(x, y,res);
	S(x, y,res);
	L(x, y,res);
	D(x, y,res);
	if(res==1){cout<<"Точка попала в заштрихованую область";}
    else cout<<"Точка не попала в заштрихованую область"<<endl;
	return 0;
}

