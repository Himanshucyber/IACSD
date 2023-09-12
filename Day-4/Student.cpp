#include<iostream>
using namespace std;

class student{
	int rollno,marks1,marks2,marks3;
	
   public:student(){
		rollno=0;
		marks1=0;
		marks2=0;
		marks3=0;
	}
	 student(int rollno,int marks1,int marks2,int marks3){
		this->rollno=rollno;
		this->marks1=marks1;
		this->marks2=marks2;
		this->marks3=marks3;
	}
	
	
	void acceptInfo(){
		
	cout<<"Enter RollNo";
	cin>>rollno;
	cout<<"Enter marks1";
	cin>>marks1;
	cout<<"Enter marks2";
	cin>>marks2;
	cout<<"Enter marks3";
	cin>>marks3;
	
	}
	void display(){
		int total = this->marks1 + this->marks2 + this->marks3;
		
		double percentage = total/3;
		
		char grade ;
		
		if(percentage>=80){
			grade='A';
		}
		else if (percentage>=60 && percentage <80) {
			grade='B';
		}
		else if(percentage>=40 && percentage<60){
			grade='C';
		}
		else{
			grade='F';
		}
		
		cout<<"Student with rollNo Marks : "<<marks1<<" ,"<<marks2<<" ,"<<marks3<<"Total "<<total<<endl;
		cout<<"Grade"<<grade<<" with "<<percentage<<"%"<<endl;
		
	}
	
};
int main1(){
	student himanshu;
	himanshu.acceptInfo();
	himanshu.display();
}


