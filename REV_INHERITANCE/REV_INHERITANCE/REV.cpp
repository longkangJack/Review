#include<iostream>
#include<string>
using namespace std;
// 实例演示三种继承关系下基类成员的各类型成员访问关系的变化 
//class Person
//{
//public:
//	void Print()
//	{
//		cout << _name << endl;
//	}
//protected:
//	string _name; // 姓名
//private:
//	int _age; // 年龄
//};
//class Student : protected Person
//class Student : private Person
//class Student : public Person
//{
//protected:
//	int _stunum; // 学号
//};
//class  person
//{
//protected:
//	string name;
//	string sex;
//	int age;
//};
//class student : public person
//{
//public:
//	int No;
//};
//void main()
//{
//	student x;
//	// 1.子类对象可以赋值给父类对象/指针/引用
//	person a = x;
//	person *b = &x;
//	person &c = x;
//	//2.基类对象不能赋值给派生类对象
//	// x = a;
//	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针
//	student* ps1 = (student*)b; // 这种情况转换时可以的。
//	ps1->No = 10;
//	b = &x;
//	student* ps2 = (student*)b;
//}
//class Student;
//class Person
//{
//public:
//  friend void Display(const Person &p, const Student& s);
//protected:
//	string _name;//姓名
//};
//class Student :public Person
//{
//protected:
//	int _stuNum;//学号
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;//友元关系不能继承
//}
//void main()
//{
//	Person p;
//	Student s;
//	Display(p, s);
//}
//class Person
//{
//public:
//	string _name;
//};
//class Student :virtual public Person
//{
//protected:
//	int _num;
//};
//class Teacher :virtual public Person
//{
//protected:
//	int _id;
//};
//class Assistant :public Student, public Teacher
//{
//protected:
//	string _majorCourse;
//};
//void main()
//{
//	Assistant a;
//	a._name = "zlk";//虚拟继承解决了二义性和冗余问题
//}
//class A
//{
//public:
//	int _a;
//};
//class B :virtual public A
//{
//public:
//	int _b;
//};
//class C :virtual public A
//{
//public:
//	int _c;
//};
//class D :public B, public C
//{
//public:
//	int _d;
//};
//void main()
//{
//	D d;
//	d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//}
//组合
//class Car{
//protected:
//	string _colour = "白色";//颜色
//	string _num = "陕ABIT00";//车牌号
//};
//class BMW :public Car{
//public:
//	void Drive()
//	{
//		cout << "好开-操控" << endl;
//	}
//};
//class Benz :public Car{
//public:
//	void Drive()
//	{
//		cout << "好坐-舒适" << endl;
//	}
//};
class A
{
public:
	int _name;
};
class B :public A
{
public:
	int _num;
	void putdata()
	{
		cout << "xxx" << endl;
	}
};
class C :public A
{
public:
	int _adress;
};
void main()
{
	B b;
	b._name = 1;
	b._num = 1;
	b.putdata();
}
