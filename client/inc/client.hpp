#pragma once
#include <cstdint>
#include <memory>

namespace sc{
    class Client{
    public:
        Client(std::unique_ptr<char> address, uint16_t port);
        int tryConnect();
        int tryDisconnect();

        void setPort(uint16_t port);
        uint16_t getPort();
        void setAddress(std::unique_ptr<char> address);
        std::unique_ptr<char> getAddress();
    private:
        uint16_t port;
        std::unique_ptr<char> address;
        int socketFD;
        bool isConnected;
    };
}