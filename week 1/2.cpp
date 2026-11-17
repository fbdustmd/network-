#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> a; // 정수형 백터 선언

    a = {10, 20, 30, 40, 50};

    cout << "백터의 값 모두 출력 : ";
 
    for(int i = 0;i<5;i++){ // 전체 데이터 출력 
        cout << a[i] << " ";
    }

    cout << "\n" << "백터의 개수 출력 : " << a.size() << "\n"; // 데이터 개수 출력 

    a.erase(a.begin() + 1); // 벡터의 특정 값 삭제 

    cout << "특정 값을 삭제후 출력 : ";

    for(int x : a){
        cout << x << " ";
    }

    vector<int> b;

    cout << "\n";

    if (b.empty()) cout << "백터 B 는 비어있습니다.";
    else cout << "백터 B 는 비어있지 않습니다.";

    return 0;
}   