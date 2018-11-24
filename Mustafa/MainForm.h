#pragma once
#include "MorseCode.h"
#include "NumberCode.h"
//#include "test.h"
#include "RSA.h"
#include "CesarCode.h"
#include <msclr\marshal_cppstd.h>
namespace Mustafa {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_MorseCode;
	private: System::Windows::Forms::TextBox^  textBox_Input;
	private: System::Windows::Forms::TextBox^  textBox_Output;
	private: System::Windows::Forms::Button^  btn_Encrypt;
	private: System::Windows::Forms::Button^  btn_Decrypt;
	private: System::Windows::Forms::Button^  btn_NumberCode;
	private: System::Windows::Forms::Button^  btn_RSA;
	private: System::Windows::Forms::Button^  btn_CesarCode;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_MorseCode = (gcnew System::Windows::Forms::Button());
			this->textBox_Input = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Output = (gcnew System::Windows::Forms::TextBox());
			this->btn_Encrypt = (gcnew System::Windows::Forms::Button());
			this->btn_Decrypt = (gcnew System::Windows::Forms::Button());
			this->btn_NumberCode = (gcnew System::Windows::Forms::Button());
			this->btn_RSA = (gcnew System::Windows::Forms::Button());
			this->btn_CesarCode = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_MorseCode
			// 
			this->btn_MorseCode->Location = System::Drawing::Point(59, 46);
			this->btn_MorseCode->Name = L"btn_MorseCode";
			this->btn_MorseCode->Size = System::Drawing::Size(150, 23);
			this->btn_MorseCode->TabIndex = 0;
			this->btn_MorseCode->Text = L"Morse Code";
			this->btn_MorseCode->UseVisualStyleBackColor = true;
			this->btn_MorseCode->Click += gcnew System::EventHandler(this, &MainForm::btn_MorseCode_Click);
			// 
			// textBox_Input
			// 
			this->textBox_Input->Location = System::Drawing::Point(588, 46);
			this->textBox_Input->Multiline = true;
			this->textBox_Input->Name = L"textBox_Input";
			this->textBox_Input->Size = System::Drawing::Size(607, 125);
			this->textBox_Input->TabIndex = 1;
			// 
			// textBox_Output
			// 
			this->textBox_Output->Location = System::Drawing::Point(588, 197);
			this->textBox_Output->Multiline = true;
			this->textBox_Output->Name = L"textBox_Output";
			this->textBox_Output->Size = System::Drawing::Size(607, 129);
			this->textBox_Output->TabIndex = 2;
			// 
			// btn_Encrypt
			// 
			this->btn_Encrypt->Location = System::Drawing::Point(588, 369);
			this->btn_Encrypt->Name = L"btn_Encrypt";
			this->btn_Encrypt->Size = System::Drawing::Size(75, 23);
			this->btn_Encrypt->TabIndex = 3;
			this->btn_Encrypt->Text = L"Encrypt";
			this->btn_Encrypt->UseVisualStyleBackColor = true;
			this->btn_Encrypt->Click += gcnew System::EventHandler(this, &MainForm::btn_Encrypt_Click);
			// 
			// btn_Decrypt
			// 
			this->btn_Decrypt->Location = System::Drawing::Point(1119, 369);
			this->btn_Decrypt->Name = L"btn_Decrypt";
			this->btn_Decrypt->Size = System::Drawing::Size(75, 23);
			this->btn_Decrypt->TabIndex = 4;
			this->btn_Decrypt->Text = L"Decrypt";
			this->btn_Decrypt->UseVisualStyleBackColor = true;
			this->btn_Decrypt->Click += gcnew System::EventHandler(this, &MainForm::btn_Decrypt_Click);
			// 
			// btn_NumberCode
			// 
			this->btn_NumberCode->Location = System::Drawing::Point(59, 86);
			this->btn_NumberCode->Name = L"btn_NumberCode";
			this->btn_NumberCode->Size = System::Drawing::Size(150, 23);
			this->btn_NumberCode->TabIndex = 5;
			this->btn_NumberCode->Text = L"Number Code";
			this->btn_NumberCode->UseVisualStyleBackColor = true;
			this->btn_NumberCode->Click += gcnew System::EventHandler(this, &MainForm::btn_NumberCode_Click);
			// 
			// btn_RSA
			// 
			this->btn_RSA->Location = System::Drawing::Point(59, 128);
			this->btn_RSA->Name = L"btn_RSA";
			this->btn_RSA->Size = System::Drawing::Size(150, 23);
			this->btn_RSA->TabIndex = 6;
			this->btn_RSA->Text = L"RSA Code";
			this->btn_RSA->UseVisualStyleBackColor = true;
			this->btn_RSA->Click += gcnew System::EventHandler(this, &MainForm::btn_RSA_Click);
			// 
			// btn_CesarCode
			// 
			this->btn_CesarCode->Location = System::Drawing::Point(59, 168);
			this->btn_CesarCode->Name = L"btn_CesarCode";
			this->btn_CesarCode->Size = System::Drawing::Size(150, 23);
			this->btn_CesarCode->TabIndex = 7;
			this->btn_CesarCode->Text = L"Cesar Code";
			this->btn_CesarCode->UseVisualStyleBackColor = true;
			this->btn_CesarCode->Click += gcnew System::EventHandler(this, &MainForm::btn_CesarCode_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1277, 446);
			this->Controls->Add(this->btn_CesarCode);
			this->Controls->Add(this->btn_RSA);
			this->Controls->Add(this->btn_NumberCode);
			this->Controls->Add(this->btn_Decrypt);
			this->Controls->Add(this->btn_Encrypt);
			this->Controls->Add(this->textBox_Output);
			this->Controls->Add(this->textBox_Input);
			this->Controls->Add(this->btn_MorseCode);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		bool IsMorse = false;
		bool IsNumber = false;
		bool IsRSA = false;
		bool IsCesar = false;
	private: System::Void btn_MorseCode_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!IsMorse)
		{	
			IsNumber = false;
			IsRSA = false;
			IsMorse = true;
			IsCesar = false;
			btn_CesarCode->BackColor = System::Drawing::Color::White;
			btn_MorseCode->BackColor= System::Drawing::Color::Green;
			btn_NumberCode->BackColor = System::Drawing::Color::White;
			btn_RSA->BackColor = System::Drawing::Color::White;
		}
		else if (IsMorse)
		{
			IsMorse = false;
			btn_MorseCode->BackColor = System::Drawing::Color::White;
		}
	}
	private: System::Void btn_Encrypt_Click(System::Object^  sender, System::EventArgs^  e) {
		if (IsMorse)_toMorse();
		if (IsNumber)toNumber();
		if (IsRSA)_toRSA();
		if (IsCesar)_toCesarCode();
	}

	private: System::Void btn_Decrypt_Click(System::Object^  sender, System::EventArgs^  e) {
		if (IsMorse)_fromMorse();
		if (IsNumber)fromNumber();
		if (IsRSA)_fromRSA();
		if (IsCesar)_fromCesarCode();
	}
	private: void _toMorse()
	{
		MorseCode code;
		msclr::interop::marshal_context context;
		std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		textBox_Output->Text = context.marshal_as<String^>(code.Encrypt(b));
	}
	private: void _fromMorse()
	{
		MorseCode code;
		msclr::interop::marshal_context context;
		std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		textBox_Output->Text = context.marshal_as<String^>(code.Decrypt(b));
	}
	private: System::Void btn_NumberCode_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!IsNumber)
		{
			IsRSA = false;
			IsNumber = true;
			IsMorse = false;
			IsCesar = false;
			btn_CesarCode->BackColor = System::Drawing::Color::White;
			btn_NumberCode->BackColor = System::Drawing::Color::Green;
			btn_MorseCode->BackColor = System::Drawing::Color::White;
			btn_RSA->BackColor = System::Drawing::Color::White;
		}
		else if (IsNumber)
		{
			IsNumber = false;
			btn_NumberCode->BackColor = System::Drawing::Color::White;
		}
	}
	private: void fromNumber()
	{
		NumberCode code;
		msclr::interop::marshal_context context;
		std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		textBox_Output->Text = context.marshal_as<String^>(code.Decrypt(b));
	}
	private: void toNumber()
	{
		 NumberCode code;
		 msclr::interop::marshal_context context;
		 std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		 textBox_Output->Text = context.marshal_as<String^>(code.Encrypt(b));
	}
	private: System::Void btn_RSA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!IsRSA)
		{
			IsNumber = false;
			IsRSA = true;
			IsMorse = false;
			IsCesar = false;
			btn_CesarCode->BackColor = System::Drawing::Color::White;
			btn_RSA->BackColor = System::Drawing::Color::Green;
			btn_MorseCode->BackColor = System::Drawing::Color::White;
			btn_NumberCode->BackColor = System::Drawing::Color::White;
		}
		else if (IsRSA)
		{
			IsRSA = false;
			btn_RSA->BackColor = System::Drawing::Color::White;
		}
	}
	private: void _toRSA()
	{
		RSA rsa;
		msclr::interop::marshal_context context;
		std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		textBox_Output->Text = context.marshal_as<String^>(rsa.encrypt(b));
	}
	private: void _fromRSA()
	{
		RSA rsa;
		msclr::interop::marshal_context context;
		std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		textBox_Output->Text = context.marshal_as<String^>(rsa.decrypt(b));
	}
	private: System::Void btn_CesarCode_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!IsCesar)
		{
			IsNumber = false;
			IsRSA = false;
			IsMorse = false;
			IsCesar = true;
			btn_CesarCode->BackColor = System::Drawing::Color::Green;
			btn_MorseCode->BackColor = System::Drawing::Color::White;
			btn_NumberCode->BackColor = System::Drawing::Color::White;
			btn_RSA->BackColor = System::Drawing::Color::White;
		}
		else if (IsCesar)
		{
			IsCesar = false;
			btn_CesarCode->BackColor = System::Drawing::Color::White;
		}
	}
	private: void _toCesarCode()
	{
		CesarCode code(4);
		msclr::interop::marshal_context context;
		std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		textBox_Output->Text = context.marshal_as<String^>(code.Encrypt(b));
	}
	private: void _fromCesarCode()
	{
		CesarCode code(4);
		msclr::interop::marshal_context context;
		std::string b = context.marshal_as<std::string>(textBox_Input->Text);
		textBox_Output->Text = context.marshal_as<String^>(code.Decrypt(b));
	}
};
}
