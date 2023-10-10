#include "product.h"
 
Product::Product()
{
	this->id=34;
	this->title="Jasmine";
	this->price=200;
}

Product::Product(int id, string title,double price){
	this->id=id;
	this->title=title;
	this->price=price;
}

Product::~Product()
{
}

int Product::GetId(){
    
    return this->id;
}

double Product::GetPrice(){
    
    return this->price;
}

string Product::GetTitle(){  
       return this->title;
}

void Product::SetTitle(string title){
	this->title=title;
}

void Product::SetPrice(double price){
	this->price=price;
}
