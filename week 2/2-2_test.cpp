#include <iostream>
using namespace std;

int main() {
    int value = 10;
    int another = 30;

    int* value2 = &value;

    // 이때 답을 캡처한후 예상값은 10 
    auto func1 = [value]() {
        cout << "값 캡처: " << value << "\n";
    };

    // 이때 예상값은 10 하지만 value2의 주소를 참고하고 있으므로 변동가능 
    auto func2 = [&value2]() {
        cout << "포인터 참조 캡처: " << *value2 << "\n";
    };

    // 여기는 func2와 다르게 value2의값 즉 value 의 주소값을 가르키고 있으므로 달라질수있다 
    auto func3 = [value2]() {
        cout << "포인터 값 캡처: " << *value2 << "\n";
    };

    cout << "[초기 상태]\n";
    func1(); //value 의 값을 캡처해놔서 변동가능성 X 10나옴 
    func2(); // value2의 주소값을 가르킴. 하지만 value2는 value의 주소를 가르킴. 현제 value는 변동 없으므로 10이나옴
    func3(); // value2를 가르킴. func2와 같이 10나옴 

    value = 20;

    cout << "\n[value를 20으로 변경]\n";
    func1(); // 여전히 10 
    func2(); // 20
    func3(); // 20

    // 포인터가 가리키는 대상을 변경
    value2 = &another;

    cout << "\n[value2가 another를 가리키도록 변경]\n";
    func1();
    func2();//value2으 주소를 가르킴. 근데 이떄 가르키는 주소가 달라졌으므로 값이 변경 
    func3();//value2 자체를 가르키는데 이떄 value2는 value 의 주소값을 가르킴. func3는 value 의 주소값을 캡처해놔서 그대로임 

    return 0;
}