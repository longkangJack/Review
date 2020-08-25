
#include <iostream>       // std::cout
#include <stack>  // std::stack
#include<queue>
using namespace std;
/*int main()
{
	std::stack<int> mystack;
	int sum(0);
	for (int i = 1; i <= 10; i++) mystack.push(i);
	while (!mystack.empty())
	{
		sum += mystack.top();
		mystack.pop();
	}
	std::cout << "total: " << sum << '\n';
	return 0;
}*/
/*int main()
{
	std::stack<int> mystack;
	for (int i = 0; i<5; ++i) mystack.push(i);
	std::cout << "Popping out elements...";
	while (!mystack.empty())
	{
		std::cout << ' ' << mystack.top();
		mystack.pop();
	}
	std::cout << '\n';
	return 0;
}*/
/*int main()
{
	stack<int> mystack;
	for (int i = 0; i < 5; i++)
	{
		mystack.push(i);
	}
	while (!mystack.empty())
	{
		cout << ' ' << mystack.top();
		mystack.pop();
	}
	return 0;
}*/
//ÓÃvector ÊµÏÖstack
/*#include<vector>
namespace mlk
{
	template<class T>
	class stack
	{
	public:
		stack() {}
		void push(const T& x) { _c.push_back(x); }
		void pop() { _c.pop_back(); }
		T& top() { return _c.back(); }
		const T& top()const { return _c.back(); }
		size_t size()const { return _c.size(); }
		bool empty()const { return _c.empty(); }
		private£º
			std::vector<T> _c;
	};
}*/
/*void main()
{
	queue<int> foo, bar;
	foo.push(11);
	foo.push(22);
	bar.push(33), bar.push(44);
	foo.swap(bar);
	while (!foo.empty())
	{
		foo.pop();
		cout << " " << foo.front();
	}
}*/
#include <list>
namespace mlk
{
	template<class T>
	class queue
	{
	public:
		queue() {}
		void push(const T& x) { _c.push_back(x); }
		void pop() { _c.pop_front(); }
		T& back() { return _c.back(); }
		const T& back()const { return _c.back(); }
			T& front() { return _c.front(); }
		const T& front()const { return _c.front(); }
		size_t size()const { return _c.size(); }
		bool empty()const { return _c.empty(); }
	private:
		std::list<T> _c;
	};
}