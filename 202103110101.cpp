//编写矩形类，包括私有数据成员：长和宽，公有函数：设置长和宽，计算面积，计算周长。在主函数中定义两个矩形类对象，分别输出两个对象的面积和周长。
#include<iostream>
#include<iomanip>
using namespace std;
class CSquare
{
	private:
		int m_nlong;
		int m_nwidth;
	public:
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
 };
 
 int main(){
 	CSquare s1,s2;
 	int a,b,c,d;
 	cout<<"请输入第一个矩形的长:"<<endl;
 	cin>>a;
	cout<<"请输入第一个矩形的宽:"<<endl;
	cin>>b;
	cout<<"请输入第二个矩形的长:"<<endl;
	cin>>c;
	cout<<"请输入第二个矩形的宽:"<<endl; 
	cin>>d;
 	s1.SetData(a,b);
 	s2.SetData(c,d);
 	cout<<"第一个矩形的面积为"<<s1.area()<<endl;
 	cout<<"第一个矩形的周长为"<<s1.perimeter()<<endl;
 	cout<<"第一个矩形的面积为"<<s2.area()<<endl;
 	cout<<"第一个矩形的周长为"<<s2.perimeter()<<endl;
	system("pause");
	return 0;
 	
 }
