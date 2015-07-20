#include <iostream>


using namespace std;

/*	----------------函数的重载练习--------------
*	利用函数的重载的方法设计一个程序，该程序通过函数‘calc()’进行计算并返回显示结果。
*	当传入一个参数时：计算该参数的平方
*	当传入两个参数时：计算两个参数的积
*	当传入三个参数时：计算三个参数的和
*/

void calc(double arg1 )
{
	cout << "only arg1 !!"<<endl;

	cout << "the result is :"<< arg1 * arg1<<endl;
}

void calc(double arg1,double arg2 )
{
	cout << "there are two args !!"<<endl;

	cout << "the result is :"<< arg1 * arg2<<endl;
}

void calc(double arg1,double arg2 ,double arg3)
{
	cout << "there are three args !!"<<endl;

	cout << "the result is :"<< arg1 + arg2 + arg3<<endl;
 
}
int main(int argc,char *argv[])
{

	double arg1,arg2,arg3;

	arg1 = 1.1;
	arg2 = 2.2;
	arg3 = 3.3;

	calc(arg1);
	calc(arg1,arg2);

	calc(arg1,arg2,arg3);

	return 0;


}

