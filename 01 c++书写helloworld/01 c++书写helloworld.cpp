#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "hello world!" << endl;
	cout << sizeof(int) << endl;
	
	float f1 = 3.141592653f;
	cout << f1 << endl;
	double d1 = 3.14;
	cout << d1 << endl;

	char ch = 'a';
	cout << "char�Ŀռ�" << sizeof(char)<<endl;
	cout << "char��ascii" <<(int)ch << endl;

	string str = "hello";
	cin >> str;
	cout << str << endl;
	system("pause");
}