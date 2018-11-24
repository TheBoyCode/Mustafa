#pragma once
#include <string>
#include <iostream>
//using namespace std;
class MyClass
{
public:
	MyClass();
	~MyClass();
	void foo(int i);
private:

};
void MyClass::foo(int i)
{
	i = i + 1;
}
MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}