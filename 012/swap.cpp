#include <iostream>
using namespace std;


int swap(int *a,int *b )
{
	int c = 0;
	c = *a;
	*a = *b;
	*b =c;	
}

int swap2(int *a,int *b )
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;

}
/*引用传递*/
int swap3(int &a,int &b)
{

	int c = 0;
	c = a;
	a = b;
	b =c;	

}

int main()
{
	int a = 10;
	int b = 12;

	cout<< "a = "<<a<< " b = "<<b<<endl;
	swap(&a,&b);
	cout<< "a = "<<a<< " b = "<<b<<endl;
	swap2(&a,&b);
	cout<< "a = "<<a<< " b = "<<b<<endl;
	swap3(a,b);


	cout<< "a = "<<a<< " b = "<<b<<endl;
}
