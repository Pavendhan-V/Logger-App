#pragma once

#include "LoggerApp.h"
#include "Client.h"
#include <ctime>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;	

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
		LoggerApp* objApp = new LoggerApp();
		client^ objClient = gcnew client();

		System::String^ tbLogText = gcnew System::String("");

		//System::Threading::Thread^ asdf = gcnew System::Threading::Thread(gcnew ThreadStart(serial_port)); //&serial_port);
		//Thread^ t = gcnew Thread(gcnew ThreadStart(&serial_port));
		//t->Start();

		private: System::Windows::Forms::GroupBox^ groupBox1;
		private: System::Windows::Forms::TextBox^ tbLog;
		private: System::Windows::Forms::TextBox^ tbData;


		private: System::Windows::Forms::Label^ lblData;
		private: System::Windows::Forms::Label^ lblBaudRate;
		private: System::Windows::Forms::Label^ lblComPort;
		private: System::Windows::Forms::ComboBox^ comboBoxBaudRate;
		private: System::Windows::Forms::ComboBox^ comboBoxComPort;



		time_t dateTime;
	private: System::Windows::Forms::ComboBox^ comboBoxSerialDevice;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::Button^ btnConnect;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItemDevice;
	private: System::Windows::Forms::ToolStripMenuItem^ cAMERADEVICEToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wEBCAMToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cAM1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cAM2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem1;


		private: System::Windows::Forms::Timer^ timer1;
		
		public:
			Form1(void)
			{
				InitializeComponent();
			}

		protected:
			~Form1()
			{
				if (components)
				{
					// Incase the application is closed While is camera opened, make the while loop condition false
					objApp->IsImageCaptured = true; 
					delete components;
				}
			}

		private: System::Windows::Forms::GroupBox^ gbStatus;
		protected:

		private: System::Windows::Forms::Label^ lblTxRxData;
		private: System::Windows::Forms::Label^ lblTxRx;
		protected:


		private: System::Windows::Forms::CheckBox^ cbCommunication;
		private: System::Windows::Forms::CheckBox^ cbInputSignal;


		private: System::Windows::Forms::CheckBox^ cbOutputSignal;

		private: System::Windows::Forms::CheckBox^ cbLogged;

		private: System::Windows::Forms::CheckBox^ cbComponentScanned;

		private: System::Windows::Forms::CheckBox^ cbImageCaptured;
		private: System::Windows::Forms::Label^ lblVersionNo;
		private: System::Windows::Forms::Label^ label1;







		private: System::Windows::Forms::TextBox^ tbScanDetails;

		private: System::Windows::Forms::PictureBox^ pbImage;
		private: System::Windows::Forms::GroupBox^ gbControl;


		private: System::Windows::Forms::Button^ btnSave;

		private: System::Windows::Forms::Button^ btnScan;

		private: System::Windows::Forms::Button^ btnCapture;
		private: System::ComponentModel::IContainer^ components;


		private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->gbStatus = (gcnew System::Windows::Forms::GroupBox());
			this->lblVersionNo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblTxRxData = (gcnew System::Windows::Forms::Label());
			this->lblTxRx = (gcnew System::Windows::Forms::Label());
			this->cbCommunication = (gcnew System::Windows::Forms::CheckBox());
			this->cbInputSignal = (gcnew System::Windows::Forms::CheckBox());
			this->cbOutputSignal = (gcnew System::Windows::Forms::CheckBox());
			this->cbLogged = (gcnew System::Windows::Forms::CheckBox());
			this->cbComponentScanned = (gcnew System::Windows::Forms::CheckBox());
			this->cbImageCaptured = (gcnew System::Windows::Forms::CheckBox());
			this->tbScanDetails = (gcnew System::Windows::Forms::TextBox());
			this->pbImage = (gcnew System::Windows::Forms::PictureBox());
			this->gbControl = (gcnew System::Windows::Forms::GroupBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnScan = (gcnew System::Windows::Forms::Button());
			this->btnCapture = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->btnConnect = (gcnew System::Windows::Forms::Button());
			this->tbData = (gcnew System::Windows::Forms::TextBox());
			this->lblData = (gcnew System::Windows::Forms::Label());
			this->lblBaudRate = (gcnew System::Windows::Forms::Label());
			this->lblComPort = (gcnew System::Windows::Forms::Label());
			this->comboBoxBaudRate = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSerialDevice = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxComPort = (gcnew System::Windows::Forms::ComboBox());
			this->tbLog = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItemDevice = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cAMERADEVICEToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wEBCAMToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cAM1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cAM2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gbStatus->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->BeginInit();
			this->gbControl->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// gbStatus
			// 
			this->gbStatus->Controls->Add(this->lblVersionNo);
			this->gbStatus->Controls->Add(this->label1);
			this->gbStatus->Controls->Add(this->lblTxRxData);
			this->gbStatus->Controls->Add(this->lblTxRx);
			this->gbStatus->Controls->Add(this->cbCommunication);
			this->gbStatus->Controls->Add(this->cbInputSignal);
			this->gbStatus->Controls->Add(this->cbOutputSignal);
			this->gbStatus->Controls->Add(this->cbLogged);
			this->gbStatus->Controls->Add(this->cbComponentScanned);
			this->gbStatus->Controls->Add(this->cbImageCaptured);
			this->gbStatus->Location = System::Drawing::Point(12, 503);
			this->gbStatus->Name = L"gbStatus";
			this->gbStatus->Size = System::Drawing::Size(972, 112);
			this->gbStatus->TabIndex = 0;
			this->gbStatus->TabStop = false;
			this->gbStatus->Text = L"Status";
			// 
			// lblVersionNo
			// 
			this->lblVersionNo->AutoSize = true;
			this->lblVersionNo->Location = System::Drawing::Point(415, 79);
			this->lblVersionNo->Name = L"lblVersionNo";
			this->lblVersionNo->Size = System::Drawing::Size(40, 17);
			this->lblVersionNo->TabIndex = 1;
			this->lblVersionNo->Text = L"1.0.0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(349, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Version :";
			// 
			// lblTxRxData
			// 
			this->lblTxRxData->AutoSize = true;
			this->lblTxRxData->Location = System::Drawing::Point(77, 79);
			this->lblTxRxData->Name = L"lblTxRxData";
			this->lblTxRxData->Size = System::Drawing::Size(100, 17);
			this->lblTxRxData->TabIndex = 1;
			this->lblTxRxData->Text = L"0 0 0 0 0 0 0 0";
			// 
			// lblTxRx
			// 
			this->lblTxRx->AutoSize = true;
			this->lblTxRx->Location = System::Drawing::Point(22, 79);
			this->lblTxRx->Name = L"lblTxRx";
			this->lblTxRx->Size = System::Drawing::Size(51, 17);
			this->lblTxRx->TabIndex = 1;
			this->lblTxRx->Text = L"Tx Rx :";
			// 
			// cbCommunication
			// 
			this->cbCommunication->AutoSize = true;
			this->cbCommunication->Enabled = false;
			this->cbCommunication->Location = System::Drawing::Point(25, 37);
			this->cbCommunication->Name = L"cbCommunication";
			this->cbCommunication->Size = System::Drawing::Size(126, 21);
			this->cbCommunication->TabIndex = 0;
			this->cbCommunication->Text = L"Communication";
			this->cbCommunication->UseVisualStyleBackColor = true;
			// 
			// cbInputSignal
			// 
			this->cbInputSignal->AutoSize = true;
			this->cbInputSignal->Enabled = false;
			this->cbInputSignal->Location = System::Drawing::Point(843, 37);
			this->cbInputSignal->Name = L"cbInputSignal";
			this->cbInputSignal->Size = System::Drawing::Size(104, 21);
			this->cbInputSignal->TabIndex = 0;
			this->cbInputSignal->Text = L"Input Singal";
			this->cbInputSignal->UseVisualStyleBackColor = true;
			// 
			// cbOutputSignal
			// 
			this->cbOutputSignal->AutoSize = true;
			this->cbOutputSignal->Enabled = false;
			this->cbOutputSignal->Location = System::Drawing::Point(688, 37);
			this->cbOutputSignal->Name = L"cbOutputSignal";
			this->cbOutputSignal->Size = System::Drawing::Size(116, 21);
			this->cbOutputSignal->TabIndex = 0;
			this->cbOutputSignal->Text = L"Output Signal";
			this->cbOutputSignal->UseVisualStyleBackColor = true;
			// 
			// cbLogged
			// 
			this->cbLogged->AutoSize = true;
			this->cbLogged->Enabled = false;
			this->cbLogged->Location = System::Drawing::Point(557, 37);
			this->cbLogged->Name = L"cbLogged";
			this->cbLogged->Size = System::Drawing::Size(78, 21);
			this->cbLogged->TabIndex = 0;
			this->cbLogged->Text = L"Logged";
			this->cbLogged->UseVisualStyleBackColor = true;
			// 
			// cbComponentScanned
			// 
			this->cbComponentScanned->AutoSize = true;
			this->cbComponentScanned->Enabled = false;
			this->cbComponentScanned->Location = System::Drawing::Point(352, 37);
			this->cbComponentScanned->Name = L"cbComponentScanned";
			this->cbComponentScanned->Size = System::Drawing::Size(162, 21);
			this->cbComponentScanned->TabIndex = 0;
			this->cbComponentScanned->Text = L"Component Scanned";
			this->cbComponentScanned->UseVisualStyleBackColor = true;
			// 
			// cbImageCaptured
			// 
			this->cbImageCaptured->AutoSize = true;
			this->cbImageCaptured->Enabled = false;
			this->cbImageCaptured->Location = System::Drawing::Point(185, 37);
			this->cbImageCaptured->Name = L"cbImageCaptured";
			this->cbImageCaptured->Size = System::Drawing::Size(130, 21);
			this->cbImageCaptured->TabIndex = 0;
			this->cbImageCaptured->Text = L"Image Captured";
			this->cbImageCaptured->UseVisualStyleBackColor = false;
			// 
			// tbScanDetails
			// 
			this->tbScanDetails->Enabled = false;
			this->tbScanDetails->Location = System::Drawing::Point(421, 41);
			this->tbScanDetails->Multiline = true;
			this->tbScanDetails->Name = L"tbScanDetails";
			this->tbScanDetails->Size = System::Drawing::Size(346, 296);
			this->tbScanDetails->TabIndex = 1;
			this->tbScanDetails->Text = L"                        SCANED DETAILS!!!";
			// 
			// pbImage
			// 
			this->pbImage->ImageLocation = L"C:\\Files\\Logo\\Grabbed_Image.png";
			this->pbImage->Location = System::Drawing::Point(37, 41);
			this->pbImage->Name = L"pbImage";
			this->pbImage->Size = System::Drawing::Size(336, 296);
			this->pbImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbImage->TabIndex = 2;
			this->pbImage->TabStop = false;
			this->pbImage->Click += gcnew System::EventHandler(this, &Form1::pbImage_Click);
			// 
			// gbControl
			// 
			this->gbControl->Controls->Add(this->btnSave);
			this->gbControl->Controls->Add(this->btnScan);
			this->gbControl->Controls->Add(this->btnCapture);
			this->gbControl->Location = System::Drawing::Point(787, 41);
			this->gbControl->Name = L"gbControl";
			this->gbControl->Size = System::Drawing::Size(172, 245);
			this->gbControl->TabIndex = 3;
			this->gbControl->TabStop = false;
			this->gbControl->Text = L"Control";
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(25, 173);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(120, 36);
			this->btnSave->TabIndex = 0;
			this->btnSave->Text = L"SAVE";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &Form1::btnSave_Click);
			// 
			// btnScan
			// 
			this->btnScan->Location = System::Drawing::Point(25, 98);
			this->btnScan->Name = L"btnScan";
			this->btnScan->Size = System::Drawing::Size(120, 36);
			this->btnScan->TabIndex = 0;
			this->btnScan->Text = L"SCAN";
			this->btnScan->UseVisualStyleBackColor = true;
			this->btnScan->Click += gcnew System::EventHandler(this, &Form1::btnScan_Click);
			// 
			// btnCapture
			// 
			this->btnCapture->Enabled = false;
			this->btnCapture->Location = System::Drawing::Point(25, 32);
			this->btnCapture->Name = L"btnCapture";
			this->btnCapture->Size = System::Drawing::Size(120, 36);
			this->btnCapture->TabIndex = 0;
			this->btnCapture->Text = L"CAPTURE";
			this->btnCapture->UseVisualStyleBackColor = true;
			this->btnCapture->Click += gcnew System::EventHandler(this, &Form1::btnCapture_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnSend);
			this->groupBox1->Controls->Add(this->btnConnect);
			this->groupBox1->Controls->Add(this->tbData);
			this->groupBox1->Controls->Add(this->lblData);
			this->groupBox1->Controls->Add(this->lblBaudRate);
			this->groupBox1->Controls->Add(this->lblComPort);
			this->groupBox1->Controls->Add(this->comboBoxBaudRate);
			this->groupBox1->Controls->Add(this->comboBoxSerialDevice);
			this->groupBox1->Controls->Add(this->comboBoxComPort);
			this->groupBox1->Controls->Add(this->tbLog);
			this->groupBox1->Location = System::Drawing::Point(12, 343);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(972, 156);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(266, 108);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(120, 35);
			this->btnSend->TabIndex = 4;
			this->btnSend->Text = L"SEND";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &Form1::btnSend_Click);
			// 
			// btnConnect
			// 
			this->btnConnect->Location = System::Drawing::Point(266, 65);
			this->btnConnect->Name = L"btnConnect";
			this->btnConnect->Size = System::Drawing::Size(120, 35);
			this->btnConnect->TabIndex = 4;
			this->btnConnect->Text = L"CONNECT";
			this->btnConnect->UseVisualStyleBackColor = true;
			this->btnConnect->Click += gcnew System::EventHandler(this, &Form1::btnConnect_Click);
			// 
			// tbData
			// 
			this->tbData->Location = System::Drawing::Point(118, 115);
			this->tbData->Name = L"tbData";
			this->tbData->Size = System::Drawing::Size(121, 22);
			this->tbData->TabIndex = 3;
			this->tbData->Text = L"0";
			// 
			// lblData
			// 
			this->lblData->AutoSize = true;
			this->lblData->Location = System::Drawing::Point(22, 118);
			this->lblData->Name = L"lblData";
			this->lblData->Size = System::Drawing::Size(38, 17);
			this->lblData->TabIndex = 2;
			this->lblData->Text = L"Data";
			// 
			// lblBaudRate
			// 
			this->lblBaudRate->AutoSize = true;
			this->lblBaudRate->Location = System::Drawing::Point(22, 72);
			this->lblBaudRate->Name = L"lblBaudRate";
			this->lblBaudRate->Size = System::Drawing::Size(71, 17);
			this->lblBaudRate->TabIndex = 2;
			this->lblBaudRate->Text = L"BaudRate";
			// 
			// lblComPort
			// 
			this->lblComPort->AutoSize = true;
			this->lblComPort->Location = System::Drawing::Point(22, 28);
			this->lblComPort->Name = L"lblComPort";
			this->lblComPort->Size = System::Drawing::Size(69, 17);
			this->lblComPort->TabIndex = 2;
			this->lblComPort->Text = L"COM Port";
			// 
			// comboBoxBaudRate
			// 
			this->comboBoxBaudRate->FormattingEnabled = true;
			this->comboBoxBaudRate->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"115200" });
			this->comboBoxBaudRate->Location = System::Drawing::Point(118, 72);
			this->comboBoxBaudRate->Name = L"comboBoxBaudRate";
			this->comboBoxBaudRate->Size = System::Drawing::Size(121, 24);
			this->comboBoxBaudRate->TabIndex = 1;
			this->comboBoxBaudRate->Text = L"9600";
			// 
			// comboBoxSerialDevice
			// 
			this->comboBoxSerialDevice->FormattingEnabled = true;
			this->comboBoxSerialDevice->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SCANNER", L"ARDUINO" });
			this->comboBoxSerialDevice->Location = System::Drawing::Point(266, 28);
			this->comboBoxSerialDevice->Name = L"comboBoxSerialDevice";
			this->comboBoxSerialDevice->Size = System::Drawing::Size(120, 24);
			this->comboBoxSerialDevice->TabIndex = 1;
			// 
			// comboBoxComPort
			// 
			this->comboBoxComPort->FormattingEnabled = true;
			this->comboBoxComPort->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"COM1", L"COM2", L"COM3" });
			this->comboBoxComPort->Location = System::Drawing::Point(118, 28);
			this->comboBoxComPort->Name = L"comboBoxComPort";
			this->comboBoxComPort->Size = System::Drawing::Size(121, 24);
			this->comboBoxComPort->TabIndex = 1;
			// 
			// tbLog
			// 
			this->tbLog->Enabled = false;
			this->tbLog->Location = System::Drawing::Point(409, 14);
			this->tbLog->Multiline = true;
			this->tbLog->Name = L"tbLog";
			this->tbLog->Size = System::Drawing::Size(557, 136);
			this->tbLog->TabIndex = 0;
			this->tbLog->Text = L"    Current Execution...";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItemDevice,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::HorizontalStackWithOverflow;
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(996, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItemDevice
			// 
			this->toolStripMenuItemDevice->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->cAMERADEVICEToolStripMenuItem });
			this->toolStripMenuItemDevice->Name = L"toolStripMenuItemDevice";
			this->toolStripMenuItemDevice->Size = System::Drawing::Size(68, 24);
			this->toolStripMenuItemDevice->Text = L"Device";
			// 
			// cAMERADEVICEToolStripMenuItem
			// 
			this->cAMERADEVICEToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->wEBCAMToolStripMenuItem,
					this->cAM1ToolStripMenuItem, this->cAM2ToolStripMenuItem
			});
			this->cAMERADEVICEToolStripMenuItem->Name = L"cAMERADEVICEToolStripMenuItem";
			this->cAMERADEVICEToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cAMERADEVICEToolStripMenuItem->Text = L"CAMERA DEVICE";
			// 
			// wEBCAMToolStripMenuItem
			// 
			this->wEBCAMToolStripMenuItem->Name = L"wEBCAMToolStripMenuItem";
			this->wEBCAMToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->wEBCAMToolStripMenuItem->Text = L"WEB_CAM";
			this->wEBCAMToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::wEBCAMToolStripMenuItem_Click);
			// 
			// cAM1ToolStripMenuItem
			// 
			this->cAM1ToolStripMenuItem->Name = L"cAM1ToolStripMenuItem";
			this->cAM1ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cAM1ToolStripMenuItem->Text = L"CAM1";
			this->cAM1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cAM1ToolStripMenuItem_Click);
			// 
			// cAM2ToolStripMenuItem
			// 
			this->cAM2ToolStripMenuItem->Name = L"cAM2ToolStripMenuItem";
			this->cAM2ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cAM2ToolStripMenuItem->Text = L"CAM2";
			this->cAM2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::cAM2ToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem1 });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->aboutToolStripMenuItem1->Text = L"About";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(996, 628);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->gbControl);
			this->Controls->Add(this->pbImage);
			this->Controls->Add(this->tbScanDetails);
			this->Controls->Add(this->gbStatus);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Logger APP";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->gbStatus->ResumeLayout(false);
			this->gbStatus->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbImage))->EndInit();
			this->gbControl->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {


			if (objApp->IsImageCaptured == true && objApp->IsScanned) {

				objApp->TextBoxLogWrite = true;
				tbLogText = "Log written and Image is Saved";

				/*Worker Log Writting*/
				objApp->log_write();

				this->cbLogged->Checked = true;
				this->cbLogged->BackColor = Color::LightGreen;

				this->cbOutputSignal->Checked = true;
				this->cbOutputSignal->BackColor = Color::LightGreen;

				/*Reset the ImageCaptured and Scanned Variable's*/
				objApp->IsImageCaptured = false;
				objApp->IsScanned = false;
			}
			else {
				objApp->TextBoxLogWrite = true;
				tbLogText = "Picture is not captured (or) Component is not scanned...";

				MessageBox::Show("Picture is not captured (or) Component is not scanned... \nCheck it!!!");
			}
		}

		private: System::Void pbImage_Click(System::Object^ sender, System::EventArgs^ e) {
			
			objApp->IsImageCaptured = false;
			objApp->ImageGrapStart = true;

			this->cbImageCaptured->Checked = false;
			this->cbImageCaptured->BackColor = Color::White;

			this->btnCapture->Enabled = true;

			objApp->TextBoxLogWrite = true;
			tbLogText = "Camera is Turned ON";

			objApp->img_grab();	
		}

		private: System::Void btnCapture_Click(System::Object^ sender, System::EventArgs^ e) {

			objApp->IsImageCaptured = true;
			objApp->ImageGrapStart = false;
			pbImage->ImageLocation = "C:\\Files\\Grabbed_Image.jpg";

			this->cbImageCaptured->Checked = true;
			this->cbImageCaptured->BackColor = Color::LightGreen;

			this->btnCapture->Enabled = false;

			objApp->TextBoxLogWrite = true;
			tbLogText = "Picture is Taken. \r\nCamera is Turned OFF.";
		}

		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

			/*Image Loading into Picture Box*/

			objApp->count++;

			if (objApp->IsImageCaptured == false && objApp->ImageGrapStart == true && objApp->count > 3) {

				pbImage->ImageLocation = "C:\\Files\\Grabbed_Image.jpg";
				objApp->count = 0;
			}
			/********************/

			/*Log Writting in tbLog Text Box*/
			if (objApp->TextBoxLogWrite == true) {
				

				this->tbLog->AppendText("\r\n");;
				this->tbLog->AppendText(tbLogText);

				objApp->TextBoxLogWrite = false;
			}
			/*******************/


	
			
		}

		private: System::Void btnScan_Click(System::Object^ sender, System::EventArgs^ e) {

			this->cbComponentScanned->Checked = true;
			this->cbComponentScanned->BackColor = Color::LightGreen;

			objApp->TextBoxLogWrite = true;
			tbLogText = "Component is Scanned";

			objApp->IsScanned = true; // Component scanned status
		}

		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

		}

		public: void serial_port() {

		}

		private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {

		}

		private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {

		}

#pragma region Menu Iteam
		/*Camera ID Selection*/
		private: System::Void wEBCAMToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			objApp->CameraID = WEB_CAM;
			this->wEBCAMToolStripMenuItem->Checked = true;
			this->cAM1ToolStripMenuItem->Checked = false;
			this->cAM2ToolStripMenuItem->Checked = false;
		}
		private: System::Void cAM1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			objApp->CameraID = CAMERA1;
			this->cAM1ToolStripMenuItem->Checked = true;
			this->cAM2ToolStripMenuItem->Checked = false;
			this->wEBCAMToolStripMenuItem->Checked = false;
		}
		private: System::Void cAM2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			objApp->CameraID = CAMERA2;
			this->cAM2ToolStripMenuItem->Checked = true;
			this->cAM1ToolStripMenuItem->Checked = false;
			this->wEBCAMToolStripMenuItem->Checked = false;
		}
		/****************/
#pragma endregion

};
}
