//Ϊ��������һ������Ĭ�ϲ����Ĺ��죬�����������е������ֲ�ͬ���������Ĺ��캯���������
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
 	cout<<"���캯��ʹ����..."<<endl;
 	m_nlong=l;
	m_nwidth=m;
	m_nhight=k;
 }
 int main(){
 	int a,b,c,d,e,f,g;
 	cout<<"�������һ�����εĳ�:"<<endl;
 	cin>>a;
	cout<<"������ڶ������εĳ�:"<<endl;
	cin>>c;
	cout<<"������ڶ������εĿ�:"<<endl; 
	cin>>d;
	cout<<"��������������εĳ�:"<<endl; 
	cin>>e;
	cout<<"��������������εĿ�:"<<endl; 
	cin>>f;
	cout<<"��������������εĸ�:"<<endl; 
	cin>>g;
 	CSquare s1(a);
	CSquare s2(c,d);
 	CSquare s3(e,f,g);
 	cout<<"��һ�����ε����Ϊ"<<s1.area()<<endl;
 	cout<<"��һ�����ε��ܳ�Ϊ"<<s1.perimeter()<<endl;
 	cout<<"��һ�����ε����Ϊ"<<s1.v()<<endl;
 	cout<<"�ڶ������ε����Ϊ"<<s2.area()<<endl;
 	cout<<"�ڶ������ε��ܳ�Ϊ"<<s2.perimeter()<<endl;
 	cout<<"�ڶ������ε����Ϊ"<<s2.v()<<endl;
 	cout<<"���������ε����Ϊ"<<s3.v()<<endl;
	system("pause");
	return 0;
 	
 }
