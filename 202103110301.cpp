// ��д�����࣬Ϊ���ඨ��������Ĺ��캯������Ϣ�����Ա��������Ϣ�����Ա������
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
		cout<<"��ȷ����";
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
	cout<<"������ʵ������";
	cin>>a;
	s1.m_nseta(a);
	cout<<"��������������";
	cin>>b;
	s1.m_nsetb(b);
	cout<<"������1�����ж����Ƿ�Ҫ���";
	cin>>k;
	s1.m_nout(k);
}

 
