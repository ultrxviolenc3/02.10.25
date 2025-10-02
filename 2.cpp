#include <iostream>
using namespace std;

class truck;

class car {

int pass,sp;

public:

car(int num1, int num2) : pass(num1), sp(num2) {}

friend int spgr(car c, truck t);

};

class truck {
	
int w,sp;
	
public:
truck(int num1,int num2) : w(num1), sp(num2) {}
	
friend int spgr(car c, truck t);
	
};

int spgr(car c, truck t){
	
	return c.sp-t.sp;
	
	}
	
	int main ()
{
	int r;
	car c1(8,80), c2(4,60);
	truck t1(7000,70), t2(4000,90);
	
	r=spgr(c1,t1);
	
	if(r<0) cout<<"Грузовик быстрее"<<endl;
	else if(r==0) cout<<"Скорости равны"<<endl;
	else cout<<"Легковая машина быстрее"<<endl;
	
		r=spgr(c2,t2);
	
	if(r<0) cout<<"Грузовик быстрее"<<endl;
	else if(r==0) cout<<"Скорости равны"<<endl;
	else cout<<"Легковая машина быстрее"<<endl;
	
	
	
	return 0;
	}
	
	
	
	
	
	
