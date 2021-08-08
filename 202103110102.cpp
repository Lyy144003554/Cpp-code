//为该类增加一个带有默认参数的构造，并在主函数中调用三种不同参数个数的构造函数定义对象
#include<iostream>
#include<iomanip>
using namespace std;
class CSquare
{
	private:
		int m_nlong;
		int m_nwidth;
		int m_nhight;
	public:
	CSquare(int l,int m,int k);
	void SetData(int l,int m)
	{
		m_nlong=l;
		m_nwidth=m;
	 } 
		int perimeter()
		{
			return (int)(2*(m_nlong+m_nwidth));
		}
		int area()
		{
			return (int)(m_nlong*m_nwidth);
		}
		int v()
		{
		return (int)(m_nlong*m_nwidth*m_nhight);
	    }
 };
 CSquare::CSquare(int l,int m=0,int k=0)
 {
 	cout<<"构造函数使用中..."<<endl;
 	m_nlong=l;
	m_nwidth=m;
	m_nhight=k;
 }
 int main(){
 	int a,b,c,d,e,f,g;
 	cout<<"请输入第一个矩形的长:"<<endl;
 	cin>>a;
	cout<<"请输入第二个矩形的长:"<<endl;
	cin>>c;
	cout<<"请输入第二个矩形的宽:"<<endl; 
	cin>>d;
	cout<<"请输入第三个矩形的长:"<<endl; 
	cin>>e;
	cout<<"请输入第三个矩形的宽:"<<endl; 
	cin>>f;
	cout<<"请输入第三个矩形的高:"<<endl; 
	cin>>g;
 	CSquare s1(a);
	CSquare s2(c,d);
 	CSquare s3(e,f,g);
 	cout<<"第一个矩形的面积为"<<s1.area()<<endl;
 	cout<<"第一个矩形的周长为"<<s1.perimeter()<<endl;
 	cout<<"第一个矩形的体积为"<<s1.v()<<endl;
 	cout<<"第二个矩形的面积为"<<s2.area()<<endl;
 	cout<<"第二个矩形的周长为"<<s2.perimeter()<<endl;
 	cout<<"第二个矩形的体积为"<<s2.v()<<endl;
 	cout<<"第三个矩形的体积为"<<s3.v()<<endl;
	system("pause");
	return 0;
 	
 }
