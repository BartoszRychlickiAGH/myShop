#pragma once

using namespace System;

public ref class Order {
public:
	int Id{ }, CustomerId{},Price{  }, Quantity{};
	String^ OrderDate{ "" };
	String^ ProductName{ "" };
};