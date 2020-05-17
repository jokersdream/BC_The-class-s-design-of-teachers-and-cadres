#include<iostream>   
using namespace std;
#include<string>   

class Teacher
{
public:
	Teacher(string n, int a, char s, string add, long int te, string ti) {
		name = n;
		age = a;
		sex = s;
		address = add;
		tel = te;
		title = ti;
	}
	void display() {
		cout << "姓名: " << name << endl;
		cout << "年龄: " << age << endl;
		cout << "性别: " << sex << endl;
		cout << "地址: " << address << endl;
		cout << "电话: " << tel << endl;
		cout << "职称: " << title << endl;
	}
protected:
	string name;//姓名
	int age;//年龄
	char sex;//性别
	string address;//地址
	long long tel;//电话
	string title;  //职称
};

class Cadre
{
public:
	Cadre(string n, int a, char s, string add, long int t, string p) {
		name = n;
		age = a;
		sex = s;
		address = add;
		tel = t;
		post = p;
	}
	void display() {
		cout << "姓名: " << name << endl;
		cout << "年龄: " << age << endl;
		cout << "性别: " << sex << endl;
		cout << "地址: " << address << endl;
		cout << "电话: " << tel << endl;
		cout << "职务: " << post << endl;
	}
protected:
	string name;//姓名
	int age;//年龄
	char sex;//性别
	string address;//地址
	long int tel;//电话
	string post;  //职务
};

class Teacher_Cadre :public Teacher, public Cadre
{
public:
	Teacher_Cadre(string n, int a, char s, string add, long int t, string ti, string p, double w) :Teacher(n, a, s, add, t, ti), Cadre(n, a, s, add, t, p)
	{
		wages = w;
	}
	void show() {
		Teacher::display();
		cout << "职务: " << Cadre::post << endl;
		cout << "月薪: " << wages << endl;
	}
protected:
	double wages;
};

int main()
{

	Teacher_Cadre a1("小明", 24, 'm', "湖北", 152999111, "老师", "主播", 20000);
	a1.show();
	return 0;
}