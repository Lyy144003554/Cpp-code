//在主函数中定义1个复数对象，再用其初始化另外一个复数对象，并进行必要的输出。 
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
	complex s3=s1;
	s3.show_complex();
} 
