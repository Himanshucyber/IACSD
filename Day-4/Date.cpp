#include<iostream>
using namespace std;

class Date{
	private:
	   int day,month,year;
    public:	
     	Date(){
     		day=1;
     		month=1;
    		year=1997;
    	}
     	Date(int day,int month,int year){
    		this->day =day;
	    	this->month=month;
		    this->year=year;
	    }
     	void setday(int day){
	    	this->day=day;
     	}
     	void setmonth(int month){
	    	this->month=month;
     	}
     	void setyear(int year){
	    	this->year=year;
     	}
     	
     	int getday(){
     		return day;
		 }
		 int getmonth(){
     		return month;
		 }
		 int getyear(){
     		return year;
		 }
		 
		 void displayDate(){
		 	cout<<this->day<<"-"<<this->month<<"-"<<this->year;
		 }
	
};

int main2(){
	Date today;
	cout<<"Enter Day : ";
	int day;
	cin>>day;
	today.setday(day);
	cout<<"Enter Month : ";
	int month;
	cin>>month;
	today.setmonth(month);
	cout<<"Enter Year : ";
	int year;
	cin>>year;
	today.setyear(year);
	cout<<today.getday()<<"-"<<today.getmonth()<<"-"<<today.getyear()<<endl;
	
	Date tom;
	tom.displayDate();
}
