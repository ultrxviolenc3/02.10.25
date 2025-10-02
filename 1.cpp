#include <iostream>
using namespace std;
class myclass {
	
	int a,b;
	public:
	
	myclass (int i,int j) : a(i), b(j) {}
	
	friend bool isf(myclass ob);
	
	};

bool isf(myclass ob)
{
	return ob.a%ob.b==0 ;
	}

int main ()
{
	myclass  ob1(4,2),ob2(7,2);
	
	if(isf(ob1)) cout<<"4 делится на 2 без остатка"<<endl;
	else cout<<"4 не делится на 2 без остатка"<<endl;
	
	
	if(isf(ob2)) cout<<"7 делится на 2 без остатка"<<endl;
	else cout<<"7 не делится на 2 без остатка"<<endl;
	
	return 0;
	}
