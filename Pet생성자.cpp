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

	//맴버변수 초기화를 넣어주는 함수가 따로있다. 
	//클래스를 복사(=객체생성)
	//객체생성 시 자동으로 호출되는 함수 : 생성자             
	//생성자는 반환값이 없음. -> 무조건 void이므로
	//생성자(함수)는 class이름과 동일하다(대문자로 시작하는 유일한 함수)
	//생성자는 자동으로 호출!, 명시적으로 호출X.
	
	Pet()
	{
		// 입력값이 없이 자동으로 생성되는 생성자 : 기본생성자
	}
	Pet(string n)
	{
		name = n;
	}
	Pet(int a)
	{
		age = a;
	}
	Pet(string n, int a)   // 생성자 다형성
	{
		name = n;
		age = a;
	}
	/*
	Pet(string n,int a) : name{n}, age{a}{}           // {}를 ()로써도됌. n이라는 입력값을 name에다가 넣는다.  위의 코드를 한줄로 줄인 것
	*/

	~Pet()     // 소멸자 : ~  , stream을 끊을 때 사용 함.
	{
		cout << name << ": 객체 소멸됨 " << endl;
	}

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
	Pet dog{ "멍멍이",3 };                    // Pet dog{}  => 최신 버전, 생성자를 호출하는 방법 중 많이 선호하는 방법
	Pet cat{ "야옹이",5 };


	dog.print();
	cout << "----------------------" << endl;
	cat.print();

	dog.speak("dog", 3);
	cat.speak("cat");

	dog.eat();
	cat.eat();

	return 0;
}

