#include<iostream>
#include<vector>
using namespace std;
void PrintVector(const vector<int>& v)
{
	vector<int>::const_iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
}
void main()
{
	//使用push back插入四个数据
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//使用迭代器进行遍历打印
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	//使用迭代器进行修改内容
	it = v.begin();
	while (it != v.end())
	{
		*it *= 3;
		++it;
	}
	PrintVector(v);
	//使用反向迭代器进行遍历打印
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}