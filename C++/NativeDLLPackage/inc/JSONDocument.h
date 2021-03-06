#pragma once

#include <string>
#include <vector>

using namespace std; 

enum AdjustmentType3
{
	FEE3 = 0,
	PERCENT_FEE3 = 1,
	DISCOUNT3 = 2,
	PERCENT_DISCOUNT3 = 3
};

enum PaymentType3
{
	CASH3,
	CREDIT3,
	CHECK3,
	FCURRENCY3
};

class PaymentInfo3
{
public:
	PaymentType3 Type;
	int Index;
	double PaidTotal;
	bool isNull;
	bool ViaByEFT;
};

class Adjustment3
{
public:
	int AdjType;
	double Amount;
	int Percentage;
	bool isNull;

	Adjustment3()
	{
		isNull = true;
	}
};

class JSONItem3
{
public:
	int Id;
	double Quantity;
	double Price;
	string Name;
	int DeptId;
	int Status;
	Adjustment3 Adj;
	bool isNull;
	int Weighable;
};

class JSONDocument3
{
public:
	vector<JSONItem3> FiscalItems;
	vector<Adjustment3> Adjustments;
	vector<PaymentInfo3> Payments;
	vector<string> FooterNotes;

	JSONDocument3(){};
	JSONDocument3(string &json);
};
