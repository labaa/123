#include <iostream>;
#include <math.h>// ����������� �������������� ���������� 
#include <Windows.h>
using namespace std;


void P(int x, int y,double &res)//������� ���������� �� �������������� ������� ������ � 1 ��������
{
if((x>=0)&&(x<=2)&&(y>=-2)&&(y<=0)&&(x*x+y*y>=1))
res=1;
return;
}

void S(int x, int y,double &res)//������� ���������� �� �������������� ������� ������ � 2 ��������
{
if((x>=-2)&&(x<=0)&&(y>=0)&&(y<=2)&&(x*x+y*y>=1))
res=1;
return;
}

void L(int x, int y,double &res)//������� ���������� �� �������������� ������� ������ � 3 ��������
{
if((x<=0)&&(y<=0)&&(x*x+y*y<=1))
res=1;
return;
}

void D(int x, int y,double &res)//������� ���������� �� �������������� ������� ������ � 4 ��������
{
if((x>=0)&&(y>=0)&&(x*x+y*y<=1))
res=1;
return;
}

int main()
{
	SetConsoleOutputCP(1251);
	int x,y;
	double res;// ���������� ���������� �� ��������� ����� � �������������� �������
	cout<<"������� ���������� �����";
	cout<<"������� x--";
	cin>>x;
	cout<<"������� y--";
	cin>>y;
	res=0;//������������� ���������� 
    P(x, y,res);
	S(x, y,res);
	L(x, y,res);
	D(x, y,res);
	if(res==1){cout<<"����� ������ � ������������� �������";}
    else cout<<"����� �� ������ � ������������� �������"<<endl;
	return 0;
}

