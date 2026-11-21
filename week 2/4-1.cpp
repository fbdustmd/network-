#include <iostream>
#include <string>
#include <utility>

int main()
{
    std::string data1 = "Hello C++";

    // data1의 내용을 data2로 이동
    std::string data2 = move(data1);

    /*여기서 data1 에 있는 값을 data2에 옮김. 이게 새로운 메모리 영역을 만들어서 
    값을 복사하는게 아니라, data1이 가지고 있는 주소를 data2가 가지고 data1은 아무것도 없어지는거임*/

    std::cout << "data1: " << data1 << std::endl;
    std::cout << "data2: " << data2 << std::endl;

    return 0;
}