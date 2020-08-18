#include<iostream>
#include<assert.h>
using namespace std;
//STRING ģ��ʵ��
class String
{
public:
	/*String()
	:_str(new char[1])
	{*_str = '\0';}
	*/
	//String(const char* str = "\0") ����ʾ��
	//String(const char* str = nullptr) ����ʾ��
	String(const char* str = "")
	{
		// ����string�����ʱ���������nullptrָ�룬��Ϊ����Ƿ����˴�������
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