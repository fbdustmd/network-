#include <iostream>
#include <string>
#include <utility>

int main()
{
    std::string data1 = "Hello C++";

    std::string data2 = data1;
    std::string data3 = std::move(data1);

    /*위에 세 줄을 실행후 data1 ~ 3 순으로 출력을 해볼시 
    data1 : 
    data2 : Hello C++
    data3 : Hello C++ 
    
    이렇게 나올걸로 예측됩니다. data2 는 data1 에 있는 값을 move로 한게 아니라 그대로 복사했습니다 
    즉 새로운 메모리 영역을 만들어서 거기에 Hello C++ 이라는 값을 넣은겁니다. 
    하지만 data3 는 data1에 있는 주소값 즉 data1이 가르키고 있는 주소값을 data3에 옮긴겁니다 
    새로운 메모리 주소를 할당한게 아니라 주소값만 옮긴겁니다 즉 현제 data1에는 아무것도 없고 
    data3 는 Hello C++ 즉 data1 이 가르키고 있던 메모리 영역을 가르키고 있습니다*/
}