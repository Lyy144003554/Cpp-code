//定义的拷贝构造函数，并在拷贝构造函数中加入输出语句，观察该函数何时被调用。 
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
	cout<<"正在判断拷贝构造函数的出现时间"<<endl;
	cout<<m_na<<"i+"<<m_nb<<endl;
}

int main(){
	int a;
	int b;
	int k;
	cout<<"请输入实数部分";
	cin>>a;
	cout<<"请输入虚数部分";
	cin>>b;
	complex s1(a,b);
	complex s2(s1);
	s1.show_complex();
	s2.show_complex();
}
