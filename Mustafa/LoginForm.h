#pragma once
#include "MainForm.h"
#include "DataService.h"
//#include "UserModel.h"
#include <msclr\marshal_cppstd.h>

namespace Mustafa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_signUp;
	protected:
	private: System::Windows::Forms::Button^  btn_signIn;
	private: System::Windows::Forms::TextBox^  textBox_Login;
	private: System::Windows::Forms::TextBox^  textBox_Password;
	private: System::Windows::Forms::TextBox^  textBox_Email;
	private: System::Windows::Forms::TextBox^  textBox_Age;
	private: System::Windows::Forms::ComboBox^  comboBox_Gender;
	private: System::Windows::Forms::Button^  btn_Ok;




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
			this->btn_signUp = (gcnew System::Windows::Forms::Button());
			this->btn_signIn = (gcnew System::Windows::Forms::Button());
			this->textBox_Login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Email = (gcnew System::Windows::Forms::TextBox());
			this->textBox_Age = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_Gender = (gcnew System::Windows::Forms::ComboBox());
			this->btn_Ok = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_signUp
			// 
			this->btn_signUp->Location = System::Drawing::Point(203, 56);
			this->btn_signUp->Name = L"btn_signUp";
			this->btn_signUp->Size = System::Drawing::Size(231, 67);
			this->btn_signUp->TabIndex = 0;
			this->btn_signUp->Text = L"Sign up";
			this->btn_signUp->UseVisualStyleBackColor = true;
			this->btn_signUp->Click += gcnew System::EventHandler(this, &LoginForm::btn_signUp_Click);
			// 
			// btn_signIn
			// 
			this->btn_signIn->Location = System::Drawing::Point(440, 56);
			this->btn_signIn->Name = L"btn_signIn";
			this->btn_signIn->Size = System::Drawing::Size(220, 67);
			this->btn_signIn->TabIndex = 1;
			this->btn_signIn->Text = L"Sign In";
			this->btn_signIn->UseVisualStyleBackColor = true;
			this->btn_signIn->Click += gcnew System::EventHandler(this, &LoginForm::btn_signIn_Click);
			// 
			// textBox_Login
			// 
			this->textBox_Login->Location = System::Drawing::Point(321, 148);
			this->textBox_Login->Name = L"textBox_Login";
			this->textBox_Login->Size = System::Drawing::Size(224, 22);
			this->textBox_Login->TabIndex = 2;
			// 
			// textBox_Password
			// 
			this->textBox_Password->Location = System::Drawing::Point(321, 188);
			this->textBox_Password->Name = L"textBox_Password";
			this->textBox_Password->Size = System::Drawing::Size(224, 22);
			this->textBox_Password->TabIndex = 3;
			// 
			// textBox_Email
			// 
			this->textBox_Email->Location = System::Drawing::Point(321, 234);
			this->textBox_Email->Name = L"textBox_Email";
			this->textBox_Email->Size = System::Drawing::Size(224, 22);
			this->textBox_Email->TabIndex = 4;
			this->textBox_Email->Visible = false;
			// 
			// textBox_Age
			// 
			this->textBox_Age->Location = System::Drawing::Point(321, 273);
			this->textBox_Age->Name = L"textBox_Age";
			this->textBox_Age->Size = System::Drawing::Size(224, 22);
			this->textBox_Age->TabIndex = 5;
			this->textBox_Age->Visible = false;
			// 
			// comboBox_Gender
			// 
			this->comboBox_Gender->FormattingEnabled = true;
			this->comboBox_Gender->Location = System::Drawing::Point(321, 314);
			this->comboBox_Gender->Name = L"comboBox_Gender";
			this->comboBox_Gender->Size = System::Drawing::Size(224, 24);
			this->comboBox_Gender->TabIndex = 8;
			this->comboBox_Gender->Visible = false;
			// 
			// btn_Ok
			// 
			this->btn_Ok->Location = System::Drawing::Point(321, 373);
			this->btn_Ok->Name = L"btn_Ok";
			this->btn_Ok->Size = System::Drawing::Size(224, 66);
			this->btn_Ok->TabIndex = 9;
			this->btn_Ok->Text = L"OK";
			this->btn_Ok->UseVisualStyleBackColor = true;
			this->btn_Ok->Click += gcnew System::EventHandler(this, &LoginForm::btn_Ok_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 556);
			this->Controls->Add(this->btn_Ok);
			this->Controls->Add(this->comboBox_Gender);
			this->Controls->Add(this->textBox_Age);
			this->Controls->Add(this->textBox_Email);
			this->Controls->Add(this->textBox_Password);
			this->Controls->Add(this->textBox_Login);
			this->Controls->Add(this->btn_signIn);
			this->Controls->Add(this->btn_signUp);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();
			//
			btn_signUp->BackColor = Color::Green;
			btn_signIn->BackColor = Color::White;
			btn_Ok->BackColor = Color::White;
		}
#pragma endregion
	private: bool IsSignUp = true;
	private: bool IsSignIn;
	private: System::Void btn_signIn_Click(System::Object^  sender, System::EventArgs^  e) {
		IsSignUp = false;
		IsSignIn = true;
		btn_signIn->BackColor = Color::Green;
		btn_signUp->BackColor = Color::White;
		textBox_Age->Visible = true;
		textBox_Email->Visible = true;
		comboBox_Gender->Visible = true;
		comboBox_Gender->Items->Add("Male");
		comboBox_Gender->Items->Add("Female");

	}
private: System::Void btn_Ok_Click(System::Object^  sender, System::EventArgs^  e) {
	
	msclr::interop::marshal_context context;
	if (IsSignIn)
	{
		UserModel user;
		DataService service;
		std::string Age = context.marshal_as<std::string>(textBox_Age->Text);
		std::string Login = context.marshal_as<std::string>(textBox_Login->Text);
		std::string Password = context.marshal_as<std::string>(textBox_Password->Text);
		std::string Email = context.marshal_as<std::string>(textBox_Email->Text);
		if (comboBox_Gender->SelectedIndex == -1)
		{
			MessageBox::Show("Виберіть гендер");
		}
		else if (comboBox_Gender->SelectedItem->ToString() == "Male")
		{
			user.Sex = 1;
		}
		else if (comboBox_Gender->SelectedItem->ToString() == "Female")
		{
			user.Sex = 0;
		}
		for (int i = 0; i < 3; i++)
		{
			if (i < Age.length())
			{
				user.Age[i] = Age[i];
			}
			else user.Age[i] = '?';
		}
		for (int i = 0; i < 30; i++)
		{
			if (i < Email.length())
			{
				user.Email[i] = Email[i];
			}
			else user.Email[i] = '?';
		}
		for (int i = 0; i < 20; i++)
		{
			if (i < Login.length())
			{
				user.Login[i] = Login[i];
			}
			else user.Login[i] = '?';
		}
		for (int i = 0; i < 10; i++)
		{
			if (i < Password.length())
			{
				user.Password[i] = Password[i];
			}
			else user.Password[i] = '?';
		}
		if (service.writeToFile(user))
		{
			IsSignUp = true;
			IsSignIn = false;
			textBox_Age->Visible = false;
			textBox_Email->Visible = false;
			comboBox_Gender->Visible = false;
			btn_signUp->BackColor = Color::Green;
			btn_signIn->BackColor = Color::White;
		}
		else
		{
			MessageBox::Show("Помилка регістрації");
		}
	}
	if (IsSignUp)
	{
		DataService service;
		std::string _login= context.marshal_as<std::string>(textBox_Login->Text);
		std::string _password = context.marshal_as<std::string>(textBox_Password->Text);
		if (service.IsHere(_login, _password))
		{
			MainForm^ f = gcnew MainForm();
			f->Show();
			this->Hide();
			//textBox_Login->Text = "OLOOOOOO";
		}
	}
}
private: System::Void btn_signUp_Click(System::Object^  sender, System::EventArgs^  e) {
	IsSignUp = true;
	IsSignIn = false;
	textBox_Age->Visible = false;
	textBox_Email->Visible = false;
	comboBox_Gender->Visible = false;
	btn_signUp->BackColor = Color::Green;
	btn_signIn->BackColor = Color::White;
}
};
}
