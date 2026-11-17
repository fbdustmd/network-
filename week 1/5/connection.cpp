#include "connection.hpp" // connection.hpp에 선언된 클래스를 사용할수 있게 해주는 명령어. 
#include <iostream>

Connection::Connection(std::string inputIp, int inputPort) {
    ip = inputIp;
    port = inputPort;
}

//여기서 나오는 Connection::Connection 에서 :: 은 범위지정 연산자임. 

void Connection::printInfo() const {
    std::cout << "IP: " << ip << std::endl;
    std::cout << "Port: " << port << std::endl;
}