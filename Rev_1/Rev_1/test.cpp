#include<iostream>
#include<string>
using namespace std;
//string入门
/*void main()
{
	//C数组
	char str1[] = { 'a', 'b', 'c', '\0' };
	cout << str1 << endl;
	char *str2 = "bit";
	cout << str2 << endl;
	string str3("abc");
	cout << "str1 len=" << strlen(str1) << endl;
	cout << "str3 len=" << str3.size() << endl;
	cout << "str3 len=" << str3.length() << endl;
}*/
//对象的构造
/*void main()
{
	//string()
	string str1;//构造一个空串
	cout << str1 << endl;
	//string(const char* s)
	const char *s = "Hello world";//用Cstring构造string类对象
	//string str2(s);
	cout << "str2 = " << str2 << endl;
	//string(const char* s)
	string str3("hello bit");//直接构造
	cout << "str3 = " << str3 << endl;
	//string(size_t n,char *s)
	string str4(10, 'a');//string类对象中包括n个字符a
	cout << "str4 = " << str4 << endl;
	//string(const string&s)
	string str5(str3);//拷贝构造
	cout << "str5 = " << str5 << endl;
}*/
//函数类对象的容量操作
/*void main()
{
	string str("Hello world");
	cout << "size = " << str.size() << endl;//字符串的有效大小 不包含\0
	cout << "length = " << str.length() << endl;//字符串的有效长度
	cout << "capacity = " << str.capacity() << endl;
	cout << "empty = " << str.empty() << endl;//检测是否为空
	str.clear();//将str中的字符串清空，注意清空时只是将size清0，不改变底层空间的大小
	cout << "size = " << str.size() << endl;
	cout << "capacity = " << str.capacity() << endl;//底层开辟的空间
	const char *str2 = "Hello";
	string str3(str2);
	str3.resize(10, 'b');// 将s中有效字符个数增加到10个，多出位置用'b'进行填充,可增加可缩小
	cout << "str3 = " << str3 << endl;
	str3.reserve(100);//
	cout << "size = " << str3.size() << endl;
	cout << "capacity = " << str3.capacity() << endl;
	//测试reserve参数小于string的底层空间大小时，是否会将空间缩小
	str3.reserve(50);
	cout << "size = " << str3.size() << endl;
	cout << "capacity = " << str3.capacity() << endl;
}*/
//string类对象的访问及遍历操作
/*void main()
{
	string str = "hello world";
	cout << "str = " << str << endl;//直接输出
	//operator[] 底层实现了这个类
	for (int i = 0; i < str.size(); i++)
		cout << str[i];
	cout << endl;

	//C++11输出方法 底层实现迭代器++
	for (auto &e : str)//用引用属于别名 改str内容就是底层改变,不用&只改变了值,需要重新开辟空间，效率大大降低.
		cout << e;
	cout << endl;
  //迭代器 iteraror
	string::iterator it = str.begin();//区间内容
	while (it != str.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
	//反向迭代器
	/*string::reverse_iterator rit = str.rbegin();//反向输出
	while(rit != str.rend())
	{
		cout << *rit;
		++rit;
	}
	cout << endl;
}*/
//string类对象的修改操作
/*void main()
{
	string str;
	str.push_back('a');//插字符
	str.append("a");//插字符串
	str += 'b';
	str += "b";
	cout << str << endl;
	cout << str.c_str() << endl; // 以C语言的方式打印字符串
	string email("1030269471@qq.com");
	size_t pos = email.find('@');//查找字符的位置,有重复查找第一次出现的位置.
	if (pos != string::npos)
	{
		cout << "pos = " << pos << endl;
	}
	else
		cout << "not find" << endl;
	//截取
	string email_type;
	size_t strat_pos = email.find('@');
	size_t end_pos = email.rfind('.');
	email_type = email.substr(strat_pos+1, end_pos-strat_pos-1);
	cout << email_type << endl;
}*/
//string类非成员函数
//void main()
//{
//	string s1;
//	getline(cin, s1);//获取字符函数
//	cout << s1 << endl;
//}
//void main()
//{
//	string s1("hello");
//	string s2("world");
//	bool res = (s1 > s2);//根据返回值判断
//}
