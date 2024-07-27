#pragma once

using namespace System;

public ref class User {
	public:
		String^ name{""};
		String^ surname{""};
		String^ username{""};
		String^ password{""};
		int age{ 0 }, Id{0};
};