//which is an app to calculate and analyze the phone,s quality
#include<iostream>
#include<iomanip> 
using namespace std;
//while evaluating the phone's property,the main factors among the codes are illustrated,they are shown on the following annotation
//CPU[cpu]3
//the charging efficiency[tce]1
//the battery,s component[tbc]1
//pixel[p]2
//Refresh Rate[r] 1
//price[m]2
class CPhone
{   private:
	float m_nCPU;
	float m_nCharging;
	float m_nBattery;
	float m_nPixel;
	float m_nRefresh;
	float m_nPrice;
	float a;
	float b;
	float c;
	float d;
	float e;
    float f;
	public:
		void SetData(float cpu,float tce,float tbc,float p,float r,float m,float a1,float b1,float c1,float d1,float e1,float f1)
		{
			m_nCPU=cpu;
		    m_nCharging=tce;
	        m_nBattery=tbc;
            m_nPixel=p;
            m_nRefresh=r;
            m_nPrice=m;
            a=a1;
            b=b1;
            c=c1;
            d=d1;
            e=e1;
            f=f1;    
		}
		int evaluation()
		{
			return (float)((a*m_nCPU+b*m_nCharging+c*m_nBattery+d*m_nPixel+e* m_nRefresh+f* m_nPrice)/(a*888+b*55+c*6000+d*10800+e*144+f*1500));
		}
};

int main()

{   
	cout<<"This is a software for you to evaluate the property of a phone and make choice if you want to buy"<<endl;
	cout<<"First we will ask u a few questions to have a known of your self perferred factors" <<endl;
	cout<<"If you are ready please say '1' and click enter"<<endl;
	int click1=0;
	cin>>click1;
	float a2;
	float b2;
	float c2;
	float d2;
	float e2;
	float f2;
	if(click1=1)
	{
		cout<<"If you are asked to evaluate the factors of the 'CPU' when you are ready to by a phone"<<endl;
		cout<<"And you must use a number between 1-10 to evaluate this weight"<<endl;
		cout<<"Which number do you want to choose?"<<endl;
		cin>>a2;
	}
	else
	{
		return 0;
	}
	cout<<"If you are asked to evaluate the factors of the 'the charging efficiency' when you are ready to by a phone"<<endl;
		cout<<"And you must use a number between 1-10 to evaluate this weight"<<endl;
		cout<<"Which number do you want to choose?"<<endl;
		cin>>b2;
		
	cout<<"If you are asked to evaluate the factors of the 'the battery,s component' when you are ready to by a phone"<<endl;
		cout<<"And you must use a number between 1-10 to evaluate this weight"<<endl;
		cout<<"Which number do you want to choose?"<<endl;
		cin>>c2;
		
	cout<<"If you are asked to evaluate the factors of the 'pixel' when you are ready to by a phone"<<endl;
		cout<<"And you must use a number between 1-10 to evaluate this weight"<<endl;
		cout<<"Which number do you want to choose?"<<endl;
		cin>>d2;
		
	cout<<"If you are asked to evaluate the factors of the 'Refresh Rate' when you are ready to by a phone"<<endl;
		cout<<"And you must use a number between 1-10 to evaluate this weight"<<endl;
		cout<<"Which number do you want to choose?"<<endl;
		cin>>e2;
		
	cout<<"If you are asked to evaluate the factors of the 'price' when you are ready to by a phone"<<endl;
		cout<<"And you must use a number between 1-10 to evaluate this weight"<<endl;
		cout<<"Which number do you want to choose?"<<endl;
		cin>>f2;
//All of the code above is making a user's favor evaluation 
	int k;
	int i;
	int num;
	int temp1;
	int temp2;
	cout<<"Please enter the total amount of the phone added to the comparation"; 
	cin>>k;
	CPhone ppp[num];
	int phone[num];
	float cpu[num];
	float tec[num];
	float tbc[num];
	float p[num];
	float r[num];
	float m[num];
	float m1[num];
	for(num=0;num<k;num++)
	{   	
			cout<<"The name of the phone" <<" "<<num+1<<" "<<"is:"<<endl;
			cin>>phone[num];
			cout<<"Please enter"<<phone[num]<<"'s"<<"CPU number"<<endl;
			cout<<"Example:"<<"Xiaofloat 888 is'888'"<<endl;
			cin>>cpu[num];
			cout<<"Please enter"<<phone[num]<<"'s"<<"charging efficiency's number"<<endl;
			cout<<"Example:"<<"33W is'33'"<<endl;
			cin>>tec[num];
			cout<<"Please enter"<<phone[num]<<"'s"<<"component's number"<<endl;
			cout<<"Example:"<<"4520mh is'4520'"<<endl;
			cin>>tbc[num];
			cout<<"Please enter"<<phone[num]<<"'s"<<"pixel's number"<<endl;
			cout<<"Example:"<<"1080P is'10800'"<<endl;
			cin>>p[num];
			cout<<"Please enter"<<phone[num]<<"'s"<<"Refresh Rate's number"<<endl;
			cout<<"Example:"<<"144hz is'144'"<<endl;
			cin>>r[num];
			cout<<"Please enter"<<phone[num]<<"'s"<<"price's number"<<endl;
			cout<<"Example:"<<"3299$ is'3299'"<<endl;
			cin>>m1[num];
			m[num]=10000-m1[num];
			ppp[num].SetData(cpu[num],tec[num],tbc[num],p[num],r[num],m[num],a2,b2,c2,d2,e2,f2);
	}
		for(i=0;i<k;i++)
	{
		for(num=0;num<k-1-i; num++)
		if (ppp[num].evaluation()<ppp[num+1].evaluation())
		{
			temp1=ppp[num].evaluation();
			ppp[num].evaluation()==ppp[num+1].evaluation();
			ppp[num+1].evaluation()==temp1;
			temp2==phone[num];
			phone[num]==phone[num+1];
			phone[num+1]==temp2;
		}
	}
		for(num=0;num<k;num++)
		{
		cout<<"the best chioce is"<<num+1<<"with number is"<<phone[num]<<endl;
		cout<<"which score is"<<ppp[num].evaluation()<<endl;
	    }
	system("pause");
	return 0;
}

