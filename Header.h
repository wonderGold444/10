#pragma once
#include < iostream>
#include<string>
using namespace std;
class Human
{
protected:
	int age;
	string name, surname, midname;
public:
	Human (string name,string midname , string surname , int age)
	{
		this->age = age;
		this->name = name;
		this->midname = midname;
		this->surname = surname;
	}
	Human ()
	{
	}
	virtual void Print()
	{
		cout << "Name : " << name <<"\t" << "Midname : " << midname <<"\t" << "Surname : " << surname <<"\t" << "Age : " << age << endl;
	}
	~Human (){}
	
};
class Boss :public Human
{
	int number_of_workers;
public:
	Boss()
	{
	}
	Boss(string name, string midname, string surname, int age , int number_of_workers):Human( name,  midname,  surname,  age)
	{
		this->number_of_workers = number_of_workers;
	}
	~Boss(){}
	void Print() override
	{
		cout << "Name : " << name << "\t" << "Midname : " << midname << "\t" << "Surname : " << surname << "\t" << "Age : " << age << "\t" <<
			"Workers : " << number_of_workers << endl;
	}
};
class Student:public Human 
{
	bool on_lesson;
public:
	Student(){}
	Student(string name, string midname, string surname, int age , bool on_lesson):Human(name, midname, surname, age)
	{
		this->on_lesson = on_lesson;
	}
	void Print() override
	{
		cout << "Name : " << name << "\t" << "Midname : " << midname << "\t" << "Surname : " << surname << "\t" << "Age : " << age <<"\t" <<"On the lesson ? : " 
			<<on_lesson<< endl;
		if (on_lesson) cout << "Yes.";
		else cout << "No.";
	}
	~Student (){}
};