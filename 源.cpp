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
		cout << "����: " << name << endl;
		cout << "����: " << age << endl;
		cout << "�Ա�: " << sex << endl;
		cout << "��ַ: " << address << endl;
		cout << "�绰: " << tel << endl;
		cout << "ְ��: " << title << endl;
	}
protected:
	string name;//����
	int age;//����
	char sex;//�Ա�
	string address;//��ַ
	long long tel;//�绰
	string title;  //ְ��
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
		cout << "����: " << name << endl;
		cout << "����: " << age << endl;
		cout << "�Ա�: " << sex << endl;
		cout << "��ַ: " << address << endl;
		cout << "�绰: " << tel << endl;
		cout << "ְ��: " << post << endl;
	}
protected:
	string name;//����
	int age;//����
	char sex;//�Ա�
	string address;//��ַ
	long int tel;//�绰
	string post;  //ְ��
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
		cout << "ְ��: " << Cadre::post << endl;
		cout << "��н: " << wages << endl;
	}
protected:
	double wages;
};

int main()
{

	Teacher_Cadre a1("С��", 24, 'm', "����", 152999111, "��ʦ", "����", 20000);
	a1.show();
	return 0;
}