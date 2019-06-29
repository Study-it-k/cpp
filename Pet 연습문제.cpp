/*
Pet
이름, 나이
멍멍이(3),
야옹이(5)
-이름, 나이프린트
-짖다, 먹다
-짖다("dog",3)
  => 멍멍짖다.
-짖다("cat")
  => 야옹야옹
*/


#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Pet
{
public:

	string name;
	int age;

	void speak(string s, int k)
	{
		cout << "멍멍짖다." << endl;
	}
	void speak(string s)
	{
		cout << "야옹야옹" << endl;
	}

	void eat()
	{
		cout << "사료를 먹는다." << endl;
	}

	void print()
	{
		cout << "이름은 " << name << ", 나이는 " << age << endl;
	}
};

int main()
{
	Pet dog, cat;
	dog.name = "멍멍이";
	dog.age = 3;
	cat.name = "야옹이";
	cat.age = 5;

	dog.print();
	cout << "----------------------" << endl;
	cat.print();

	dog.speak("dog", 3);
	cat.speak("cat");
	
	dog.eat();
	cat.eat();
	
	return 0;
}

