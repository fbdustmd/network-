#include <iostream>
using namespace std;

void func1(int value){
    value = 10;
    cout << "func1 의 값 : "<< value << "\n";
}

void func2(int* value){
    *value = 20;
    cout << "func2 의 값 : "<< *value << "\n";
}

void func3(int& value){
    value = 30;
    cout << "func3 의 값 : "<< value << "\n";
}

void func4(const int& value){
    cout << "func4 의 값 : "<< value << "\n";
}

int main (void) {
    int a = 1;

    cout << "a의 초기값 : " << a << "\n";
    func1(a);
    cout << "func1 이후의 a의 값 : " << a << "\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n";
    a = 1;

    //func1 은 둘다 지역변수임. 즉 func1 은 main 함수에 있는 a의값을 복사하기 때문에 a의값이 변하지 않음. 
  
    cout << "a의 초기값 : " << a << "\n";
    func2(&a);
    cout << "func2 이후의 a의 값 : " << a << "\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n";
    a = 1;

    //func2 는 main의 지역변수 a의 주소를 보내고 포인터로 그 주소를 통해 직접 수정을 하므로 a의 값이 변함. 

    cout << "a의 초기값 : " << a << "\n";
    func3(a);
    cout << "func3 이후의 a의 값 : " << a << "\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n";
    a = 1;

    //func3 은 참조자임, int& value 라는건 a와 value 가 가르키는 값은 다름. 즉 서로 똑같은걸 이름만 다르게 부르는느낌. 

    cout << "a의 초기값 : " << a << "\n";
    func4(a);
    cout << "func4 이후의 a의 값 : " << a << "\nㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n";
    a = 1;

    //func4 는 func3에서 나아간 개념. 여기서 나오는 const 는 읽기전용 모드로 const 를 사용시 읽기만 할수 있고 수정은 불가능함. 

}