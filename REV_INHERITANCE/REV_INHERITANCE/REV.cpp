#include<iostream>
#include<string>
using namespace std;
// ʵ����ʾ���ּ̳й�ϵ�»����Ա�ĸ����ͳ�Ա���ʹ�ϵ�ı仯 
//class Person
//{
//public:
//	void Print()
//	{
//		cout << _name << endl;
//	}
//protected:
//	string _name; // ����
//private:
//	int _age; // ����
//};
//class Student : protected Person
//class Student : private Person
//class Student : public Person
//{
//protected:
//	int _stunum; // ѧ��
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
//	// 1.���������Ը�ֵ���������/ָ��/����
//	person a = x;
//	person *b = &x;
//	person &c = x;
//	//2.��������ܸ�ֵ�����������
//	// x = a;
//	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��
//	student* ps1 = (student*)b; // �������ת��ʱ���Եġ�
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
//	string _name;//����
//};
//class Student :public Person
//{
//protected:
//	int _stuNum;//ѧ��
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;//��Ԫ��ϵ���ܼ̳�
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
//	a._name = "zlk";//����̳н���˶����Ժ���������
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
//���
//class Car{
//protected:
//	string _colour = "��ɫ";//��ɫ
//	string _num = "��ABIT00";//���ƺ�
//};
//class BMW :public Car{
//public:
//	void Drive()
//	{
//		cout << "�ÿ�-�ٿ�" << endl;
//	}
//};
//class Benz :public Car{
//public:
//	void Drive()
//	{
//		cout << "����-����" << endl;
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
