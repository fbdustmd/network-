#include <iostream>
#include <string>

using namespace std;

class Connection {
private:
    string ip;
    int port;

public:
    Connection(string inputIp, int inputPort) {
        ip = inputIp;
        port = inputPort;
    }

    string getIp() const {
        return ip;
    }

    int getPort() const {
        return port;
    }
};

void member(const Connection& a) {
    cout << "IP: " << a.getIp() << endl;
    cout << "Port: " << a.getPort() << endl;
}

int main(void) {
    Connection a("193.186.4.167", 123);

    member(a);

    return 0;
}