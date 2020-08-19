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
	//ʹ��push back�����ĸ�����
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	//ʹ�õ��������б�����ӡ
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;
	//ʹ�õ����������޸�����
	it = v.begin();
	while (it != v.end())
	{
		*it *= 3;
		++it;
	}
	PrintVector(v);
	//ʹ�÷�����������б�����ӡ
	vector<int>::reverse_iterator rit = v.rbegin();
	while (rit != v.rend())
	{
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}