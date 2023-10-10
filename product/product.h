#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product
{
	public:
		int id;
		string title;
		double price;		
	public:
		Product();
		Product(int id, string title,double price);
		int GetId();
		string GetTitle();
		double GetPrice();
		
		void SetPrice(double price);
	    void SetTitle(string title);
		~Product();
	protected:
};

#endif
