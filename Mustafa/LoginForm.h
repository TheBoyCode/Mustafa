#pragma once
#include "MainForm.h"
#include "DataService.h"
#include "ValidateService.h"
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
	private: System::Windows::Forms::Label^  label_Login;
	private: System::Windows::Forms::Label^  label_Password;
	private: System::Windows::Forms::Label^  label_Email;
	private: System::Windows::Forms::Label^  label_Age;
	private: System::Windows::Forms::Label^  label_Gender;





	private: System::Windows::Forms::Label^  label_LogReg;




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
			this->label_Login = (gcnew System::Windows::Forms::Label());
			this->label_Password = (gcnew System::Windows::Forms::Label());
			this->label_Email = (gcnew System::Windows::Forms::Label());
			this->label_Age = (gcnew System::Windows::Forms::Label());
			this->label_Gender = (gcnew System::Windows::Forms::Label());
			this->label_LogReg = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btn_signUp
			// 
			this->btn_signUp->Location = System::Drawing::Point(660, 372);
			this->btn_signUp->Name = L"btn_signUp";
			this->btn_signUp->Size = System::Drawing::Size(224, 67);
			this->btn_signUp->TabIndex = 0;
			this->btn_signUp->Text = L"Увійти";
			this->btn_signUp->UseVisualStyleBackColor = true;
			this->btn_signUp->Click += gcnew System::EventHandler(this, &LoginForm::btn_signUp_Click);
			// 
			// btn_signIn
			// 
			this->btn_signIn->Location = System::Drawing::Point(660, 372);
			this->btn_signIn->Name = L"btn_signIn";
			this->btn_signIn->Size = System::Drawing::Size(224, 67);
			this->btn_signIn->TabIndex = 1;
			this->btn_signIn->Text = L"Регістрація";
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
			// label_Login
			// 
			this->label_Login->AutoSize = true;
			this->label_Login->Location = System::Drawing::Point(183, 151);
			this->label_Login->Name = L"label_Login";
			this->label_Login->Size = System::Drawing::Size(42, 17);
			this->label_Login->TabIndex = 10;
			this->label_Login->Text = L"Логін";
			// 
			// label_Password
			// 
			this->label_Password->AutoSize = true;
			this->label_Password->Location = System::Drawing::Point(183, 191);
			this->label_Password->Name = L"label_Password";
			this->label_Password->Size = System::Drawing::Size(57, 17);
			this->label_Password->TabIndex = 11;
			this->label_Password->Text = L"Пароль";
			// 
			// label_Email
			// 
			this->label_Email->AutoSize = true;
			this->label_Email->Location = System::Drawing::Point(183, 237);
			this->label_Email->Name = L"label_Email";
			this->label_Email->Size = System::Drawing::Size(133, 17);
			this->label_Email->TabIndex = 12;
			this->label_Email->Text = L"Електронна пошта";
			// 
			// label_Age
			// 
			this->label_Age->AutoSize = true;
			this->label_Age->Location = System::Drawing::Point(183, 278);
			this->label_Age->Name = L"label_Age";
			this->label_Age->Size = System::Drawing::Size(27, 17);
			this->label_Age->TabIndex = 13;
			this->label_Age->Text = L"Вік";
			// 
			// label_Gender
			// 
			this->label_Gender->AutoSize = true;
			this->label_Gender->Location = System::Drawing::Point(183, 317);
			this->label_Gender->Name = L"label_Gender";
			this->label_Gender->Size = System::Drawing::Size(46, 17);
			this->label_Gender->TabIndex = 14;
			this->label_Gender->Text = L"Стать";
			// 
			// label_LogReg
			// 
			this->label_LogReg->AutoSize = true;
			this->label_LogReg->Location = System::Drawing::Point(318, 95);
			this->label_LogReg->Name = L"label_LogReg";
			this->label_LogReg->Size = System::Drawing::Size(46, 17);
			this->label_LogReg->TabIndex = 15;
			this->label_LogReg->Text = L"label6";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 556);
			this->Controls->Add(this->label_LogReg);
			this->Controls->Add(this->label_Gender);
			this->Controls->Add(this->label_Age);
			this->Controls->Add(this->label_Email);
			this->Controls->Add(this->label_Password);
			this->Controls->Add(this->label_Login);
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
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: bool IsSignUp = true;
	private: bool IsSignIn;
	private: System::Void btn_signIn_Click(System::Object^  sender, System::EventArgs^  e) {
		label_LogReg->Text = "Пройдіть регістрацію";
		btn_signUp->Visible = true;
		btn_signIn->Visible = false;
		IsSignUp = false;
		IsSignIn = true;
		btn_signIn->BackColor = Color::Green;
		btn_signUp->BackColor = Color::White;
		textBox_Age->Visible = true;
		textBox_Email->Visible = true;
		comboBox_Gender->Visible = true;
		label_Age->Visible = true;
		label_Email->Visible = true;
		label_Gender->Visible = true;
		comboBox_Gender->Items->Add("Male");
		comboBox_Gender->Items->Add("Female");

	}
private: System::Void btn_Ok_Click(System::Object^  sender, System::EventArgs^  e) {
	ValidateService validate;
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
		
		std::string LoginValid = validate.IsLogin(Login);
		std::string PasswordValid = validate.IsPassword(Password);
		std::string EmailValid = validate.IsEmail(Email);
		std::string AgeValid = validate.IsAge(Age);
		bool isUser = true;
		if (LoginValid != "+")
		{
			MessageBox::Show(gcnew String(LoginValid.c_str()));
			isUser = false;
		}
		else if (PasswordValid != "+")
		{
			MessageBox::Show(gcnew String(PasswordValid.c_str()));
			isUser = false;
		}
		else if (EmailValid != "+")
		{
			MessageBox::Show(gcnew String(EmailValid.c_str()));
			isUser = false;
		}
		else if (AgeValid != "+")
		{
			MessageBox::Show(gcnew String(AgeValid.c_str()));
			isUser = false;
		}
		if (isUser)
		{
			if (service.writeToFile(user))
			{
				IsSignUp = true;
				IsSignIn = false;
				textBox_Age->Visible = false;
				textBox_Email->Visible = false;
				comboBox_Gender->Visible = false;
				label_Age->Visible = false;
				label_Email->Visible = false;
				label_Gender->Visible = false;
				btn_signUp->BackColor = Color::Green;
				btn_signIn->BackColor = Color::White;
			}
			else
			{
				MessageBox::Show("Помилка регістрації");
			}
		}
	}
	if (IsSignUp)
	{
		DataService service;
		bool isUser = true;
		std::string _login= context.marshal_as<std::string>(textBox_Login->Text);
		std::string _password = context.marshal_as<std::string>(textBox_Password->Text);
		if (validate.IsLogin(_login) != "+")
		{
			isUser = false;
			MessageBox::Show(gcnew String(validate.IsLogin(_login).c_str()));
		}
		if (validate.IsPassword(_password) != "+")
		{
			isUser = false;
			MessageBox::Show(gcnew String(validate.IsPassword(_password).c_str()));
		}
		if (isUser)
		{
			if (service.IsHere(_login, _password))
			{
				MainForm^ f = gcnew MainForm();
				f->Show();
				this->Hide();
			}
			else
			{
				MessageBox::Show("Не існує такого користувача");
			}
		}
	}
}
private: System::Void btn_signUp_Click(System::Object^  sender, System::EventArgs^  e) {
	label_LogReg->Text = "Увійдіть";
	btn_signUp->Visible = false;
	btn_signIn->Visible = true;
	IsSignUp = true;
	IsSignIn = false;
	textBox_Age->Visible = false;
	textBox_Email->Visible = false;
	comboBox_Gender->Visible = false;
	label_Age->Visible = false;
	label_Email->Visible = false;
	label_Gender->Visible = false;
	btn_signUp->BackColor = Color::Green;
	btn_signIn->BackColor = Color::White;
}
private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
	btn_signUp->Visible = false;
	textBox_Age->Visible = false;
	textBox_Email->Visible = false;
	comboBox_Gender->Visible = false;
	label_Age->Visible = false;
	label_Email->Visible = false;
	label_Gender->Visible = false;
	label_LogReg->Text = "Увійдіть";
}
};
}
