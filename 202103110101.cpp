//��д�����࣬����˽�����ݳ�Ա�����Ϳ����к��������ó��Ϳ���������������ܳ������������ж���������������󣬷ֱ�������������������ܳ���
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
 	cout<<"�������һ�����εĳ�:"<<endl;
 	cin>>a;
	cout<<"�������һ�����εĿ�:"<<endl;
	cin>>b;
	cout<<"������ڶ������εĳ�:"<<endl;
	cin>>c;
	cout<<"������ڶ������εĿ�:"<<endl; 
	cin>>d;
 	s1.SetData(a,b);
 	s2.SetData(c,d);
 	cout<<"��һ�����ε����Ϊ"<<s1.area()<<endl;
 	cout<<"��һ�����ε��ܳ�Ϊ"<<s1.perimeter()<<endl;
 	cout<<"��һ�����ε����Ϊ"<<s2.area()<<endl;
 	cout<<"��һ�����ε��ܳ�Ϊ"<<s2.perimeter()<<endl;
	system("pause");
	return 0;
 	
 }
