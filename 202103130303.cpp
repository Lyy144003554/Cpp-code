//���������ж���1�����������������ʼ������һ���������󣬲����б�Ҫ������� 
#include <iostream>
#include <iomanip>

using namespace std;
class complex{
private:
	int m_na;
	int m_nb;
public:
	//the cliam of the members 
	complex(int a,int b);
    void show_complex();
}; 
complex::complex(int a,int b)
{
	m_na=a;
	m_nb=b;
}
void complex::show_complex()
{
	cout<<"�����жϿ������캯���ĳ���ʱ��"<<endl;
	cout<<m_na<<"i+"<<m_nb<<endl;
}

int main(){
	int a;
	int b;
	int k;
	cout<<"������ʵ������";
	cin>>a;
	cout<<"��������������";
	cin>>b;
	complex s1(a,b);
	complex s3=s1;
	s3.show_complex();
} 
