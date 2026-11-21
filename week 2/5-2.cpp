#include <iostream>
#include <stdexcept>

int divide(int a, int b) noexcept
{
    if (b == 0)
    {
        throw std::runtime_error("0으로 나눌 수 없음");

        
    }

    return a / b;
}

int main()
{
    try
    {
        std::cout << divide(10, 0) << std::endl;
    }
    catch (const std::exception& eee)
    {
        // 예외 메시지 출력
        std::cout << "오류 발생: " << eee.what();
    }

    /*5-1에서 더 나아간건데 배우다가 안 내용이라 추가함 
    5-1과 달라진점은 noexcept 가 추가된건데 이건 예외를 허용하지 않겠다 즉 반환을 하지 않겠다는 의미임. 
    그래서 throw 를 사용해도 괜찮지만 catch 를 함수 밖에서 받으려 할때 문제가 됨 하지만 
    함수 내에서 catch 를 하려할시 문제가 안됨. 함수 밖으로 예외처리 하지 않겠다 했지 내부에서는 처리해도 
    괜찮기 떄문.  */

    return 0;
}