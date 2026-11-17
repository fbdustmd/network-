#ifndef CONNECTION_HPP
#define CONNECTION_HPP 

//위에 두줄은 헤더파일이 중복으로 포함되는것을 방지하기 위한 코드. 

#include <string>

class Connection {
private:
    std::string ip;
    int port;

public:
    Connection(std::string inputIp, int inputPort); // 

    void printInfo() const;
};

#endif