#include<iostream>
using namespace std;
class time{
	public:
		int hour=00,minute=00,second=00,time;
		int a,b,c,d;
		
		Details();
		Displayresult();
		
};

time::Details(){
	cout<<"Enter time :-"<<endl;

	cout<<"Hour : ";
	cin>>hour;
	a = 60*60*hour;
    cout<<"\nMinute : ";
	cin>>minute;
	b = 60*hour;
	cout<<"\nSecond : ";
	cin>>second;
	c = second;
	d= a+b+c;
	
};

time::Displayresult(){
	cout<<(hour<10? "0":" ")<<hour<<" : "<<(minute<10? "0":" ")<<minute<<" : "<<(second<10? "0":" ")<<second<<endl;
	cout<<"Total time in second is : "<<d;
};

main()
{
	time t;
	t.Details();
	t.Displayresult();
}
	
