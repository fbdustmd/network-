#include <iostream>
#include <stdexcept>

int divide(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("0으로 나눌 수 없음");

        /*여기서 말하는 throw 는 c언어에서 하던 return 과 비슷함 걍 똑같다 하면 되나? 차이점은 뒤에서 나옴*/
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

    /*여기서 차이점이 나옴. 
    throw 로 반환한 값을 catch에서 받음. 즉 반환이 되면 catch 로 이동되면서 catch 에 있는 명령어들을 실행함. 
    여기서 exception 은 라이브러리에 포함되어있는 변수형임. runtime_error 의 부모 변수형임 
    여기서 말하는 부모란 부모 변수형이 가지고 있는 기능들을 상속받음 
    예를들어 animain 에 eat 이라는 기능이 있고 자식형 dog 에 bark 기능이 있을시 dog를 animal 의 자식형으로 만들시 
    dog 에 eat 이라는 기능도 활용 가능. 즉 중복되는 기능을 줄이려고 하는 것임 
    
    또한 여기서 나온 exception& eee 는 아까 말한대로  runtime_error 의 부모형임. 여기서 eee라는 exception의 자료형을
    만들고 exception 내에 있는 기능인 what() 을 실행함. 이때 what 에는 runtime_error 반환할떄 적은 값이 저장되어
    있으므로 이렇게 됨. */

    return 0;
}