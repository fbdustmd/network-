#include <iostream>
using namespace std;

void execute(int value, void(*callback)(int))
{
    int result = value * 2;
    callback(result);
}

int main()
{
    int value;
    cin >> value;

    execute(value, [](int result) {
        cout << result << endl;
    });


    /*람다 표현식, 및 콜백함수를 활용한 방법임. 
    콜백 및 람다표현식에 대해 설명을 하자면 
    
    콜백함수 : 쉽게 말해 내가 실행할 함수를 전달할테니 처리후 그 함수를 돌려줘 라 이해하면 편함 
    
    람다 표현식 : [](){} 이런식으로 구성되어있음 []는 캡처목록, ()는 매개변수, {}는 안에 실행할 명령어 
    
    그걸 활용하여 푼 문제임. */
    return 0;
}