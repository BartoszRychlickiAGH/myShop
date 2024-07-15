#pragma once
#include <iostream>
using namespace System;
public ref class User {
	private:
		String^ name;
		String^ surname;
		String^ username;
		String^ password;
	public:
		
		int age;
		User(String^ name, String^ surname, String^ username, String^ password, int age) {
			this->name = name;
			this->surname = surname;
			this->username = username;
			this->password = password;
			this->age = age;
		}
		String^ getName() {
			return name;
		}
		String^ getSurname() {
			return surname;
		}
		String^ getUsername() {
			return username;
		}
		String^ getPassword() {
			return password;
		}
		int getAge() {
			return age;
		}
		void setName(String^ name) {
			this->name = name;
		}
		void setSurname(String^ surname) {
			this->surname = surname;
		}
		void setUsername(String^ username) {
			this->username = username;
		}
		void setPassword(String^ password) {
			this->password = password;
		}
		void setAge(int age) {
			this->age = age;
		}

};