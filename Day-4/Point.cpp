#include<iostream>
using namespace std;

class Point{
	private:
    	int x,y;
    public:
       Point(){
        	x=0;
        	y=0;
	        }	
       Point(int x,int y){
		  this->x=x;
		  this->y =y;
	   }
	   
	   void setx(int x){
	   	this->x= x;
	   	
	   }
	   int getx(){
	   	return x;
	   }
	    void sety(int y){
	   	this->y= y;
	   
	   }
	   int gety(){
	   	return y;
	   }
	   void display(){
	   	cout<<"value of X : "<<this->x<<endl<<"value of Y : "<<this->y<<endl;
	   }
	   
};
int main3(){
	
	Point p;
    cout<<"value of X : "<<p.getx()<<endl;
    cout<<"value of y : "<<p.gety()<<endl;
    int num1;
    int num2;
    cout<<"Enter value of x to update : ";
    
    cin>>num1;
    p.setx(num1);
    cout<<"Enter value of y to update : ";
    cin>>num2;
    p.sety(num2);
    p.display();
    
    
}
