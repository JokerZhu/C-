#include <iostream>

using namespace std;

//#define ITEM 10
int main(int argc ,char *argv[])
{
	const unsigned short ITEM = 10;

	int Interl[ITEM];
	int i = 0;
	int sum = 0;

	cout << "请输入" << ITEM <<"个整数："<< endl;

	for( i = 0;i< ITEM;i ++){
		while( !(cin >> Interl[i])){
			cin.clear();
			cin.ignore(100,'\n');
			cout << "请输入一个合法的值"<<endl;
			break;
		}
		sum += Interl[i];
	}

	cout << "和 ：" << sum << "\n"<<"平均值:"<<float(sum/ITEM)<<endl;
	


	return 0;
}
