#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

class Phone
{
	int size;
	string color;

public :
	void talk();     // 인터페이스(=접점) : 입력값,이름 반환값만 정의해논 것  , 실제 동작코딩은 클래스 외부에 사용하여 보기 편하게 만들 수 있음.
	void game();     // 인터페이스 정의    ,  인터페이스는 꼭 public이 필요함
};

void Phone::talk()                  // Phone 꺼에있는 talk(=namespace사용한 것)
{
	cout << "전화기로 통화하다." << endl;
}

void Phone::game()    // 인터페이스와 구현분리,  실제 동작코딩
{
	cout << "전화기로 게임하다." << endl;
}

int main()
{
	Phone p1;    // 객체 생성,    인터페이스 상태의 함수는 아직 사용 불가
	
	p1.talk();
	p1.game();
	
	return 0;
}

