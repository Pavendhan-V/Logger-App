
#include<thread>

using namespace System;
using namespace System::IO::Ports;
using namespace System::Threading;





public ref class client
{

public:
	void serial_port_open();
	void serial_data_send(char data);
	void serial_data_receive();



};

