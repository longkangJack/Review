#include<iostream>
#include<assert.h>
using namespace std;
//STRING 模拟实现
class String
{
public:
	/*String()
	:_str(new char[1])
	{*_str = '\0';}
	*/
	//String(const char* str = "\0") 错误示范
	//String(const char* str = nullptr) 错误示范
	String(const char* str = "")
	{
		// 构造string类对象时，如果传递nullptr指针，认为程序非法，此处断言下
		if (nullptr == str)
		{
			assert(false);
			return;
		}

		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}
	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}
private:
	char* _str;
};
void main()
{
	string s("hello bit");
	string s1(s);
}