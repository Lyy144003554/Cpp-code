// 编写复数类，为该类定义带参数的构造函数、信息输入成员函数和信息输出成员函数。
#include <iostream>
#include <iomanip>

using namespace std;
class complex{
	public:
	int m_na;
	int m_nb;
	//the cliam of the members 
	void m_nseta(int a);
	void m_nsetb(int b);
	void m_nout(int d);
}; 
void complex::m_nout(int d)
{ if(d=1)
	{
		cout<<m_na<<"i+"<<m_nb;
	}
else
	{
		cout<<"你确定吗？";
	}
}
void complex::m_nseta(int a)
{
	m_na=a;
}
void complex::m_nsetb(int b)
{
	m_nb=b;
}
int main(){
	complex s1;
	int a;
	int b;
	int k;
	cout<<"请输入实数部分";
	cin>>a;
	s1.m_nseta(a);
	cout<<"请输入虚数部分";
	cin>>b;
	s1.m_nsetb(b);
	cout<<"请输入1用来判定你是否要输出";
	cin>>k;
	s1.m_nout(k);
}

 
