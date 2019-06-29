#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

//부품을 만들기
//부품은 틀만 만든다. (class)
//부품의 정적특징, 동적특징을 표현한다.
//정적특징 : 색, 속도, 기어  (멤버변수)
//동적특징 : 출발하기, 정지하기, 가속하기, 감속하기 => 추상화(그림을 글로 표현한 것)  (맴버함수)
//함수를 만들 때는 반환값, 입력값 고려

class Car
{
	public:    // 모든 곳에서 사용가능, 안쓰면 이 프로젝트에서만 사용가능
		string color;                         // 선언의 위치(변수의 생존범위 ex) 지역변수 )
		int speed;
		int gear;


		void start(int n)
		{
			cout << n << "의 차가 출발하였습니다." << endl;
		}
		int stop(int n)
		{
			cout << n << "의 차가 정지하였습니다." << endl;
			return 0;
		}
		

		int speedUp(int s)           
		{
			return s + speed;
		}
		int speedDown(int s)
		{
			return s - speed;
		}
		int speedDown(int s, int t)           // 다형셩 : 입력값을 다르게 하여 함수이름이 중복될 수 있음.
		{
			return s * t - 10;
		}


		void print()
		{
			cout << color << ", " << speed << ", " << gear << endl;
 		}
};

int main()
{
	Car car1, car2; // 객체생성       , Car는 클래스, car1, car2는 객체(원래 프로그래밍 목적인 객체(클래스를 복사한 것)) 객체는 Car의 실제값(instance)

	   // 객체생성 시 맴버변수의 초기 값을 넣어주는 생성자를 배울 것임.

	car1.color = "red";      // . : 접근연산자  , color라는 메모리에 접근  car1에 color의 메모리 주소값이 들어있음
	car1.speed = 100;  
	car1.gear = 2;

	car2.color = "blue";
	car2.speed = 200;
	car2.gear = 1;

	car1.start(1);
	car2.start(2);

	car1.print();
	car2.print();

	int up = car1.speedUp(100);
	int down = car2.speedDown(200);

	cout << "속도 Up : " << up << endl;
	cout << "속도 Down : " << down << endl;

	car1.stop(1);
	car2.stop(2);

	return 0;
}

