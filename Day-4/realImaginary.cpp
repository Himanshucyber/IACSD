#include<iostream>
using namespace std;

class complex{
	private:
	int real ;
	string imag;
	public:
	complex(){
		real=0;
		imag="0i";
		cout<<"By Default ";
	}
	complex(int real,string imag){
		this->real =real;
		this->imag=imag;
	}
	
	void setreal(int real){
		this->real=real;
	}
	int getreal(){
	return real;
	}
	void setimag(string imag){
		this->imag=imag;
	}
	string getimag(){
	  return imag;
	}
	void display(){
		cout<<"Number is "<< this->real<<"+"<<this->imag<<endl;
	}
	
};
int main(){
	complex numb;
	numb.display();
	cout<<"Enter Real part of Number : ";
	int real ;
	cin>>real;
	numb.setreal(real);
	cout<<"Enter Imaginary part of Number : ";
	string imag ;
	cin>>imag ;
	numb.setimag(imag);
	numb.display();
}

