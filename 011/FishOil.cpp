#include <iostream>
#include <fstream>
using namespace std;

#define FILENAME "FishOil.txt"

struct FishOil
{
	string name;
	string id;
	char sex;
};


int PrintData()
{
	ifstream file;
	string tmp;
	char ch;
	file.open(FILENAME,ios::in);
	if(file == NULL){
		
		cout<< "当前没有数据\n"<<endl;
		return -1;
	}
	cout<<"name  id  sex"<<endl;
	while(getline(file,tmp) ){
		cout<< tmp<<endl;
	}
	file.close();
	return 0;
}

int InsertData(FishOil Data)
//int InsertData()
{
	fstream file;
	file.open(FILENAME,ios::in|ios::out|ios::app);
	if(file == NULL){
		cout<< "打开文件失败\n"<<endl;
		return -1;
	}else{
		cout<< "打开文件成功\n"<<endl;
	}
	file << Data.name<<" ";
	file << Data.id<< " ";
	file << Data.sex<< endl;

 
	file.close();
	return 0;
}

int GetData()
{
	FishOil tmp;
	char chose;

	while(1){
		cout<< "请输入name:"<<endl;
		cin>>tmp.name;
		cout<< "请输入id:"<<endl;
		cin>>tmp.id;
		cout<< "请输入sex:"<<endl;
		cin>>tmp.sex;

		InsertData(tmp);
		//memset(tmp,0x00,sizeof(tmp));

		cout<< "是否继续输入(Y/N):";
		cin>>chose;
		switch(chose){
			case 'Y':
			case 'y':
				break;
			default:
				return 0;
		}
	}

}

int InitFishOileFile()
{
	FishOil Admin;
	Admin.name = "zhu";
	Admin.id = "0001";
	Admin.sex='M';
	return InsertData(Admin);
	
}


int main()
{
	char chose;
	while(1){
		cout<< "请输入你想做的事："<<endl;
		cout<< "1：输出数据"<<endl;
		cout<< "2：插入数据"<<endl;
		cout<< "3：退出程序"<<endl;
		cin >> chose;
		switch( chose ){
			case '1':
				PrintData();
				break;
			case '2':
				GetData();
				break;
			case '3':
				return 0;
			default:
				cout<< "请按提示输入！！"<<endl;
				break;
		}
	}
	


	return 0;
}
