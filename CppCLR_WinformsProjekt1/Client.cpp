////#include "stdafx.h"
#include "pch.h"
#include "client.h"


void client::serial_port_open() {

	SerialPort^ serial_port = gcnew SerialPort();


	//try {
		//serial_port->PortName = ;
		//serial_port->BaudRate = ;
		//serial_port->Parity = ;
		//serial_port->DataBits = ;
		//serial_port->StopBits = ;
		//serial_port->Handshake = ;

		serial_port->ReadTimeout = 500;
		serial_port->WriteTimeout = 500;

		serial_port->Open();

		if (serial_port->IsOpen) {

		}
	//}
	//catch (Exception e) {

	//}
}

void client::serial_data_send(char data) {

}

void client::serial_data_receive() {

}

