//编写一个学术类，成员变量和成员方法自拟。
#include<iostream>
#include<iomanip>
using namespace std;
class CAcademy
{
private:
	int m_nArt;
	int m_nMath;
	int m_nPE;
public:
	void SetData(int a,int m,int p)
	{
		m_nArt=a;
		m_nMath=m;
		m_nPE=p;
	 } 
	int Total()
	{
		return (int)(0.4*m_nArt+0.5*m_nMath+0.1*m_nPE);
	}
};

int main()
{  
	CAcademy a1;
	a1.SetData(118,109,150);
	cout<<a1.Total()<<endl;
	system("pause");
	return 0; 
}
