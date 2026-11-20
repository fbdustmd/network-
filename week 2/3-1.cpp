#include <iostream>
#include <memory>

class Test
{
public:
    Test()
    {
        std::cout << "객체 생성" << std::endl;
    }

    ~Test()
    {
        std::cout << "객체 소멸" << std::endl;
    }
};

int main()
{
    std::cout << "시작" << "\n";

    auto ptr = std::make_unique<Test>(); 
    /*스마트 포인터입니다. 여기서 auto 를 활용해서 컴파일러가 ptr의 자료형을 자동으로 추측하게끔 했고 
    그후 make_unique<test>를 통해 test 객체를 동적으로 생성하고 이를 소유하는 스마트 포인터를 반환하게끔 
    했습니다.
    
    스마트 포인터는 main 함수가 종료후 자동으로 할당받은 메모리 공간을 반납합니다. 이때 따로 명령어를 적지 않아도 
    자동으로 반환이됩니다 */

    std::cout << "프로그램 종료" << std::endl;

    return 0;
}