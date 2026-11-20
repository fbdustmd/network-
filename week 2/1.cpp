#include <iostream>

void on_complete(int result)
{
    std::cout << "작업 완료: " << result << std::endl;
}

void execute(int value, void(* callback)(int)) // int, float 와같은 형식 외에도 함수자체를 포인터로 주소를 가르키며 활용함 
{
    int result = value * 2;

    return callback(result);
}

int main()
{
    execute(10, on_complete);

    return 0;
}