#include <iostream>

using namespace std; 

int main () {
    string a; // 문자열 선언

    a = "Hello World!"; // 문자열 초기화 

    cout << a.length() << "\n" ; // 문자열 길이 출력 

    string b = "Hello", c = "World!" ;

    string d = b + " " +  c;

    cout << d << "\n"; // 두 문자열 결합 

    cout << d.at(0) << " " << d.at(2) << "\n"; 
    
    // 특정 문자열 출력 .at
    // c언어처럼 a[0] 같은거 활용 가능하지만 []은 문자열 길이 확인등을 안하고 출력을 함 scanf 와의 문제점과 비슷 
    //하지만 .at 는 문자열 길이 검사 등을 진행해 더욱 안전해서 이걸로 처리함  

    string boool = "";

    cout << boool.empty() << "\n"; // .empty 활용해 비어있을시 1

    cout << a.empty() << "\n"; // 문자열이 있을시 0 true, false 개념임 

    return 0;
}