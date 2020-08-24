#include<iostream>
#include<list>
using namespace std;
/*void main()
{
	std::list<int> l1;  //����յ�l1
	std::list<int> l2(4, 100); //l2�з��ĸ�ֵΪ100��Ԫ��.
	std::list<int> l3(l2);  //�������캯��
	std::list<int> l4(l2.begin(), l2.end()); //l2������ҿ����乹��l4
	//������Ϊ���������乹��l5
	int a[] = { 16, 2, 77, 29 };
	std::list<int> l5(a, a + sizeof(a) / sizeof(int));
	//�Ե�������ʽ��ӡl5�е�Ԫ��
	std::list<int>::iterator it = l5.begin();
	while (it != l5.end())
	{
		if (it != l5.end())
		{
			std::cout << *it << " ";
			++it;
		}
	}
	std::cout <<std::endl;
	//C++11��ʽ����
	for (auto &e : l5)
		std::cout << e << " ";
	std::cout << std::endl;
}*/
/*void main()
{
	int a[] = { 10, 20, 30, 40 };
	list<int> l(a,a+sizeof(a)/sizeof(int));
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
		cout << *it << " ";
	cout << endl;
	list<int> l1(l);
	for (std::list<int>::reverse_iterator rit = l1.rbegin(); rit != l1.rend(); ++rit)
		cout << *rit << " ";
	cout << endl;
}*/
/*int main()
{
	std::list<int> mylist;
	int sum(0);
	for (int i = 1; i <= 10; ++i) 
		mylist.push_back(i);
	while (!mylist.empty())
	{
		sum += mylist.front();
		mylist.pop_front();
	}
	std::cout << "total: " << sum << '\n';
	return 0;
}*/
/*void main()
{
	list<int> l1;
	l1.push_back(22);
	l1.push_back(77);
	l1.front() -= l1.back();
	cout << "l1.front now is" << l1.front() << endl;
}*/
//��ӡ
/*void PrintList (list<int>&l)
{
	for (auto &e : l)
		cout << e << " ";
	cout << endl;
}*/
/*int main ()
{
std::list<int> mylist;

// set some initial content:
for (int i=1; i<10; ++i) mylist.push_back(i);

mylist.resize(8);
//mylist.resize(8,100);
//mylist.resize(12);
std::cout << "mylist contains:";
for (std::list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
std::cout << ' ' << *it;

std::cout << '\n';

return 0;
}*/
void TestListIterator1()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
	auto it = l.begin();
	while (it != l.end())
	{
			// erase()����ִ�к�it��ָ��Ľڵ��ѱ�ɾ�������it��Ч������һ��ʹ��itʱ�������ȸ��丳ֵ
			l.erase(it);
		++it;
	}
}
// ����
void TestListIterator()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
	auto it = l.begin();
	while (it != l.end())
	{
		l.erase(it++); // it = l.erase(it);
	}
}