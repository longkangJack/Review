#include<iostream>
#include<string>
using namespace std;
//string����
/*void main()
{
	//C����
	char str1[] = { 'a', 'b', 'c', '\0' };
	cout << str1 << endl;
	char *str2 = "bit";
	cout << str2 << endl;
	string str3("abc");
	cout << "str1 len=" << strlen(str1) << endl;
	cout << "str3 len=" << str3.size() << endl;
	cout << "str3 len=" << str3.length() << endl;
}*/
//����Ĺ���
/*void main()
{
	//string()
	string str1;//����һ���մ�
	cout << str1 << endl;
	//string(const char* s)
	const char *s = "Hello world";//��Cstring����string�����
	//string str2(s);
	cout << "str2 = " << str2 << endl;
	//string(const char* s)
	string str3("hello bit");//ֱ�ӹ���
	cout << "str3 = " << str3 << endl;
	//string(size_t n,char *s)
	string str4(10, 'a');//string������а���n���ַ�a
	cout << "str4 = " << str4 << endl;
	//string(const string&s)
	string str5(str3);//��������
	cout << "str5 = " << str5 << endl;
}*/
//������������������
/*void main()
{
	string str("Hello world");
	cout << "size = " << str.size() << endl;//�ַ�������Ч��С ������\0
	cout << "length = " << str.length() << endl;//�ַ�������Ч����
	cout << "capacity = " << str.capacity() << endl;
	cout << "empty = " << str.empty() << endl;//����Ƿ�Ϊ��
	str.clear();//��str�е��ַ�����գ�ע�����ʱֻ�ǽ�size��0�����ı�ײ�ռ�Ĵ�С
	cout << "size = " << str.size() << endl;
	cout << "capacity = " << str.capacity() << endl;//�ײ㿪�ٵĿռ�
	const char *str2 = "Hello";
	string str3(str2);
	str3.resize(10, 'b');// ��s����Ч�ַ��������ӵ�10�������λ����'b'�������,�����ӿ���С
	cout << "str3 = " << str3 << endl;
	str3.reserve(100);//
	cout << "size = " << str3.size() << endl;
	cout << "capacity = " << str3.capacity() << endl;
	//����reserve����С��string�ĵײ�ռ��Сʱ���Ƿ�Ὣ�ռ���С
	str3.reserve(50);
	cout << "size = " << str3.size() << endl;
	cout << "capacity = " << str3.capacity() << endl;
}*/
//string�����ķ��ʼ���������
/*void main()
{
	string str = "hello world";
	cout << "str = " << str << endl;//ֱ�����
	//operator[] �ײ�ʵ���������
	for (int i = 0; i < str.size(); i++)
		cout << str[i];
	cout << endl;

	//C++11������� �ײ�ʵ�ֵ�����++
	for (auto &e : str)//���������ڱ��� ��str���ݾ��ǵײ�ı�,����&ֻ�ı���ֵ,��Ҫ���¿��ٿռ䣬Ч�ʴ�󽵵�.
		cout << e;
	cout << endl;
  //������ iteraror
	string::iterator it = str.begin();//��������
	while (it != str.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
	//���������
	/*string::reverse_iterator rit = str.rbegin();//�������
	while(rit != str.rend())
	{
		cout << *rit;
		++rit;
	}
	cout << endl;
}*/
//string�������޸Ĳ���
/*void main()
{
	string str;
	str.push_back('a');//���ַ�
	str.append("a");//���ַ���
	str += 'b';
	str += "b";
	cout << str << endl;
	cout << str.c_str() << endl; // ��C���Եķ�ʽ��ӡ�ַ���
	string email("1030269471@qq.com");
	size_t pos = email.find('@');//�����ַ���λ��,���ظ����ҵ�һ�γ��ֵ�λ��.
	if (pos != string::npos)
	{
		cout << "pos = " << pos << endl;
	}
	else
		cout << "not find" << endl;
	//��ȡ
	string email_type;
	size_t strat_pos = email.find('@');
	size_t end_pos = email.rfind('.');
	email_type = email.substr(strat_pos+1, end_pos-strat_pos-1);
	cout << email_type << endl;
}*/
//string��ǳ�Ա����
//void main()
//{
//	string s1;
//	getline(cin, s1);//��ȡ�ַ�����
//	cout << s1 << endl;
//}
//void main()
//{
//	string s1("hello");
//	string s2("world");
//	bool res = (s1 > s2);//���ݷ���ֵ�ж�
//}
