#include <iostream>
#include <memory>

int main()
{
    auto ptr1 = std::make_shared<int>(100);

    /*make_shared 는 3-1에서 사용한 make_unique 처럼 동적영역을 할당함 
    하지만 make_shared 는 소유권을 관리하기 위한 블록을 생성함 또한 여기에 참조 카운트를 
    1로 설정함. 
    
    이걸 사용하는 이유는 그냥 다른 포인터처럼 
    int* ptr1 = new int(100);
    int* ptr2 = ptr1;
    int* ptr3 = ptr1;
    
    이런식으로 선언후 delete ptr1을 할시 ptr2, ptr3 는 여전히 ptr1의 주소값을 가지고 있음. 또한 블록은 소멸됨  
    여기서 make_shared 을 활용할시 이 동적 블록을 가르키고 있는 포인터의 주소를 확인하기 쉽고 
    또한 ptr1이 delete 를 해도 블록이 삭제가 안됨. ptr2, ptr3가 아직도 delete 되지 않았기 떄문 */

    auto ptr2 = ptr1;

    std::cout << ptr1.use_count() << std::endl;

    return 0;
}