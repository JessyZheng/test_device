#include "serialport_driver.h"

int main(void)
{
    std::shared_ptr<SerialPortDriver> serial_port = std::make_shared<SerialPortDriver>("/dev/ttyS1");
    serial_port->Init();

    uint8_t send[] = "hello";
    serial_port->SendMessage(send, sizeof(send));
    return 0;
}