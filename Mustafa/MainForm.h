#pragma once
//#include "MorseCode.h"
//#include "NumberCode.h"
////#include "test.h"
//#include "RSA.h"
//#include "CesarCode.h"
#include "PageService.h"
#include <msclr\marshal_cppstd.h>
namespace Mustafa {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBox_Input;
	private: System::Windows::Forms::TextBox^  textBox_Output;
	private: System::Windows::Forms::Button^  btn_Encrypt;
	private: System::Windows::Forms::Button^  btn_Decrypt;
	private: System::Windows::Forms::ComboBox^  comboBox_cripts;
	private: System::Windows::Forms::TextBox^  textBox_Key;

	private: System::Windows::Forms::Label^  label_InPut;
	private: System::Windows::Forms::Label^  label_Key;
	private: System::Windows::Forms::Label^  label_OutPut;
	private: System::Windows::Forms::Label^  label_cripts;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_Input = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Output = (gcnew System::Windows::Forms::TextBox());
			this->btn_Encrypt = (gcnew System::Windows::Forms::Button());
			this->btn_Decrypt = (gcnew System::Windows::Forms::Button());
			this->comboBox_cripts = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_Key = (gcnew System::Windows::Forms::TextBox());
			this->label_InPut = (gcnew System::Windows::Forms::Label());
			this->label_Key = (gcnew System::Windows::Forms::Label());
			this->label_OutPut = (gcnew System::Windows::Forms::Label());
			this->label_cripts = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->textBox_Output->Location = System::Drawing::Point(588, 269);
			this->textBox_Output->Multiline = true;
			this->textBox_Output->Name = L"textBox_Output";
			this->textBox_Output->Size = System::Drawing::Size(607, 129);
			this->textBox_Output->TabIndex = 2;
			// 
			// btn_Encrypt
			// 
			this->btn_Encrypt->Location = System::Drawing::Point(281, 137);
			this->btn_Encrypt->Name = L"btn_Encrypt";
			this->btn_Encrypt->Size = System::Drawing::Size(186, 72);
			this->btn_Encrypt->TabIndex = 3;
			this->btn_Encrypt->Text = L"Шифрувати";
			this->btn_Encrypt->UseVisualStyleBackColor = true;
			this->btn_Encrypt->Click += gcnew System::EventHandler(this, &MainForm::btn_Encrypt_Click);
			// 
			// btn_Decrypt
			// 
			this->btn_Decrypt->Location = System::Drawing::Point(281, 249);
			this->btn_Decrypt->Name = L"btn_Decrypt";
			this->btn_Decrypt->Size = System::Drawing::Size(186, 72);
			this->btn_Decrypt->TabIndex = 4;
			this->btn_Decrypt->Text = L"Розшифрувати";
			this->btn_Decrypt->UseVisualStyleBackColor = true;
			this->btn_Decrypt->Click += gcnew System::EventHandler(this, &MainForm::btn_Decrypt_Click);
			// 
			// comboBox_cripts
			// 
			this->comboBox_cripts->FormattingEnabled = true;
			this->comboBox_cripts->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Morse Code", L"Number Code", L"Cesar Code",
					L"RSA Code", L"RSA 2.0 Code", L"Alpha Code"
			});
			this->comboBox_cripts->Location = System::Drawing::Point(31, 46);
			this->comboBox_cripts->Name = L"comboBox_cripts";
			this->comboBox_cripts->Size = System::Drawing::Size(204, 24);
			this->comboBox_cripts->TabIndex = 5;
			this->comboBox_cripts->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox_cripts_SelectedIndexChanged);
			// 
			// textBox_Key
			// 
			this->textBox_Key->Location = System::Drawing::Point(588, 212);
			this->textBox_Key->Name = L"textBox_Key";
			this->textBox_Key->Size = System::Drawing::Size(607, 22);
			this->textBox_Key->TabIndex = 6;
			// 
			// label_InPut
			// 
			this->label_InPut->AutoSize = true;
			this->label_InPut->Location = System::Drawing::Point(588, 23);
			this->label_InPut->Name = L"label_InPut";
			this->label_InPut->Size = System::Drawing::Size(39, 17);
			this->label_InPut->TabIndex = 7;
			this->label_InPut->Text = L"Ввід:";
			// 
			// label_Key
			// 
			this->label_Key->AutoSize = true;
			this->label_Key->Location = System::Drawing::Point(588, 192);
			this->label_Key->Name = L"label_Key";
			this->label_Key->Size = System::Drawing::Size(47, 17);
			this->label_Key->TabIndex = 8;
			this->label_Key->Text = L"Ключ:";
			// 
			// label_OutPut
			// 
			this->label_OutPut->AutoSize = true;
			this->label_OutPut->Location = System::Drawing::Point(588, 249);
			this->label_OutPut->Name = L"label_OutPut";
			this->label_OutPut->Size = System::Drawing::Size(47, 17);
			this->label_OutPut->TabIndex = 9;
			this->label_OutPut->Text = L"Вивід:";
			// 
			// label_cripts
			// 
			this->label_cripts->AutoSize = true;
			this->label_cripts->Location = System::Drawing::Point(31, 23);
			this->label_cripts->Name = L"label_cripts";
			this->label_cripts->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label_cripts->Size = System::Drawing::Size(54, 17);
			this->label_cripts->TabIndex = 10;
			this->label_cripts->Text = L"Шифри";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1206, 443);
			this->Controls->Add(this->label_cripts);
			this->Controls->Add(this->label_OutPut);
			this->Controls->Add(this->label_Key);
			this->Controls->Add(this->label_InPut);
			this->Controls->Add(this->textBox_Key);
			this->Controls->Add(this->comboBox_cripts);
			this->Controls->Add(this->btn_Decrypt);
			this->Controls->Add(this->btn_Encrypt);
			this->Controls->Add(this->textBox_Output);
			this->Controls->Add(this->textBox_Input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mustafa";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: PageService service;
		 
private: System::Void btn_Encrypt_Click(System::Object^  sender, System::EventArgs^  e) {
	
	msclr::interop::marshal_context context;
	if (comboBox_cripts->SelectedIndex == -1) 
	{
		MessageBox::Show("Виберіть вид шифру");
	}
	else if (comboBox_cripts->SelectedItem->ToString() == "Morse Code")
	{
		std::string decode = service.Encrypt_MorseCode(context.marshal_as<std::string>(textBox_Input->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (введіть латинські літери)");
		else textBox_Output->Text = gcnew String(decode.c_str());
	}
	else if (comboBox_cripts->SelectedItem->ToString() == "Cesar Code")
	{
		std::string decode = service.Encrypt_CesarCode(context.marshal_as<std::string>(textBox_Input->Text), context.marshal_as<std::string>(textBox_Key->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (ключ мусить бути числом, шифр/текст - латинськими літерами )");
		else textBox_Output->Text = gcnew String(decode.c_str());
	}
	else if (comboBox_cripts->SelectedItem->ToString() == "Number Code")
	{
		std::string decode = service.Encrypt_NumberCode(context.marshal_as<std::string>(textBox_Input->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (введыть текст - латинськими літерами /цифрами / знаками )");
		else textBox_Output->Text = gcnew String(decode.c_str());
	}
	else if (comboBox_cripts->SelectedItem->ToString() == "RSA Code")
	{
		std::string decode = service.Encrypt_RSACode(context.marshal_as<std::string>(textBox_Input->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (введіть латинські літери)");
		else textBox_Output->Text = gcnew String(decode.c_str());
	}
	else if (comboBox_cripts->SelectedItem->ToString() == "RSA 2.0 Code")
	{
		std::string decode = service.Encrypt_RSA2Code(context.marshal_as<std::string>(textBox_Input->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (введіть латинські літери)");
		else textBox_Output->Text = gcnew String(decode.c_str());
	}
	else if (comboBox_cripts->SelectedItem->ToString() == "Alpha Code")
	{
		std::string decode = service.Encrypt_AlphaCode(context.marshal_as<std::string>(textBox_Input->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (введіть латинські літери)");
		else textBox_Output->Text = gcnew String(decode.c_str());
	}

}	
private: System::Void btn_Decrypt_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	if (comboBox_cripts->SelectedItem->ToString() == "Morse Code")
	{
		std::string decode = service.Decrypt_MorseCode(context.marshal_as<std::string>(textBox_Input->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (введіть '.',' ' або '-')");
		else textBox_Output->Text = gcnew String(service.Decrypt_MorseCode(context.marshal_as<std::string>(textBox_Input->Text)).c_str());
	}
	if (comboBox_cripts->SelectedItem->ToString() == "Cesar Code")
	{
		std::string decode = service.Decrypt_CesarCode(context.marshal_as<std::string>(textBox_Input->Text), context.marshal_as<std::string>(textBox_Key->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (ключ мусить бути числом, шифр/текст - латинськими літерами )");
		else textBox_Output->Text = gcnew String(service.Decrypt_CesarCode(context.marshal_as<std::string>(textBox_Input->Text), context.marshal_as<std::string>(textBox_Key->Text)).c_str());
	}
	if (comboBox_cripts->SelectedItem->ToString() == "Number Code")
	{
		std::string decode = service.Decrypt_NumberCode(context.marshal_as<std::string>(textBox_Input->Text));
		if (decode == "")MessageBox::Show("Не коректне введення (введіть цифри)");
		else textBox_Output->Text = gcnew String(service.Decrypt_NumberCode(context.marshal_as<std::string>(textBox_Input->Text)).c_str());
	}
	if (comboBox_cripts->SelectedItem->ToString() == "RSA Code")
	{
		textBox_Output->Text = gcnew String(service.Decrypt_RSACode(context.marshal_as<std::string>(textBox_Input->Text)).c_str());
	}
	if (comboBox_cripts->SelectedItem->ToString() == "RSA 2.0 Code")
	{
		textBox_Output->Text = gcnew String(service.Decrypt_RSA2Code(context.marshal_as<std::string>(textBox_Input->Text)).c_str());
	}
	if (comboBox_cripts->SelectedItem->ToString() == "Alpha Code")
	{
		textBox_Output->Text = gcnew String(service.Decrypt_AlphaCode(context.marshal_as<std::string>(textBox_Input->Text)).c_str());
	}
}
private: System::Void comboBox_cripts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox_cripts->SelectedItem == "Cesar Code")
	{
		textBox_Key->Visible = true;
		label_Key->Visible = true;
	}
	else
	{
		textBox_Key->Visible = false;
		label_Key->Visible = false;
	}
}
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	textBox_Key->Visible = false;
	label_Key->Visible = false;
}
};
}
