#include <iostream>
using namespace std;

int main()
{
	int value = 10;

    void (*value2)();

	auto func1 = [value]() {
	    cout << value << "\n";
	};

	auto func2 = [&value]() {
	    cout << value << "\n";
	};

	value = 20;

    

	func1(); // 예상값 10 
	func2(); // 예상값 20 

    // 2-1.cpp 파일에서 말했듯이 람다 표현식은 그 순간을 캡처함. 이떄 func1 은 func1이 실행되는 순간의 value 값을 저장함
    //하지만 func2는 func2 가 실행되는 순간의 value 의 주소값을 저장을 함. 
}   