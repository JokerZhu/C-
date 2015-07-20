#include <iostream>
#include<fstream>
using namespace std;


int main(int argc,char* argv[] )
{
	ifstream in;
	ofstream out;
	in.open("test.txt",ios::in);
	if(!in){
		cout<< "打开文件失败" << endl;
		return -1;
	}
	


	char x;
	while(in >> x)
		cout<<x;

	cout<<endl;
	in.close();


	return 0;

}
