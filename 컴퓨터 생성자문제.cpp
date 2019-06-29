/*
Computer
price, company, ram
컴퓨터 2대 초기화(가격만 or 회사이름만 or 가격+회사이름 or 가격+회사이름+ram용량 을 알 때)
전체 내용 출력

컴퓨터 부품을 쓰지 않으면
apple컴퓨터를 껐습니다.
banana컴퓨터를 껐습니다.
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Computer
{
public:
	int price, ram;
	string company;

	Computer()
	{
	}        // 여러 개의 생성자를 만들 때는 기본 생성자를 보통 만듦.
	Computer(int p)
	{
		price = p;
	}
	Computer(string c)
	{
		company = c;
	}
	Computer(int p, string c)
	{
		price = p;
		company = c;
	}
	Computer(int p, string c, int r)
	{
		price = p;
		company = c;
		ram = r;
	}

	~Computer()
	{
		cout << company << "컴퓨터를 껐습니다." << endl;
	}

	void print()
	{
		cout << "가격은 : " << price << " 회사는 : " << company << " ram 용량은 : " << ram << "GB" << endl;
	}
};

int main()
{
	Computer c;
	Computer apple{ 1000000, "apple",16 };
	Computer banana{ 700000, "banana", 16 };
	apple.print();
	banana.print();

	return 0;
}

