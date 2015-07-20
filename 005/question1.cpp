#include <iostream>


int main()
{
	char answer;

	std::cout << "请问可以吗？【Y/N】 \n";

	std::cin>>answer;

	switch(answer){
		case 'y':
		case 'Y':
			std::cout << "好的 OK "<< "\n";
			break;
		case 'n':
		case 'N':
			std::cout << "oh you chose n "<< "\n";
			break;
		default:
			std::cout << "不符合要求 "<< "\n";
			break;

	}

	return 0;

}
