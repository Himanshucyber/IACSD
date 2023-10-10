#include <iostream>
#include <vector>
#include "global.h"
#include "product.h"
#include "productmanager.h"

#include <string>
using namespace std;
int global;
vector<Product> products;
ProductManager mgr; 

void acceptProducts(){

    	 cout<<"\n Enter flower Id   : ";
    	 int id;
    	 cin>>id;


    	 cout<<"\n Enter flower Title  : ";
    	 string title;
    	 getline(cin>>ws, title);
    	 
    	 cout<<"\n Enter flower Price  : ";
    	 int price;
    	 cin>>price;    	 
    	 
    	
		 Product p(id, title,price);
		 mgr.Insert(p);
		 products.push_back(p);
	
}

void showProducts(){
 	cout << "\nMy Flowers Collection "; 
	vector<Product> allProducts=mgr.GetAll();
	cout <<"\n"<< "Id  "<<"Title "<<"Price"; 
    for (auto i = allProducts.begin(); i != allProducts.end(); ++i) 
        cout <<"\n"<< (*i).GetId()<< "   "<<(*i).GetTitle()<<"   "<<(*i).GetPrice(); 	
    cout<< "\n _____________________________________\n";
}


int main(int argc, char** argv) {
	int option;
	do{
		cout<< "Choose Option:\n";
		cout<< "1. Show All Products:\n";
		cout<< "2. Find Product:\n";
		cout<< "3. Insert Product:\n";
		cout<< "4. Update existing Product:\n";
		cout<< "5. Delete an existing product:\n";
		cout<< "6. Delete all available products:\n";
		cout<< "7. Exit:\n";
		
		cin>>option;
		switch(option){
			case 1:{
				showProducts();
				break;
			}
				  
			
			case 2:{
				cout<<"Enter Id of Product  :  " ;
				int tempId;
				cin>>tempId;
				
//				cout<<"\n Enter flower Title  : ";
//    	        string tempTitle;
//    	        getline(cin>>ws, tempTitle);
				
//				Product psearch(tempId, tempTitle);
//                cout<<"Before Product maneger";
//               
//			
//				cout<<"After Product maneger";
//				if(mgr.GetById(tempId)){
//					Product temp =mgr.GetById(tempId);
//					  cout<<temp;
//				}
//				else{
//						cout<<" This Product is not available currently : "<<endl<<endl;
//				}
			  
//			   Product temp=product.GetById(tempId);
//			   
//			   
//			   cout<<"id:"<<temp.GetId();
//			   cout<<"name:"<<temp.GetTitle();
//				
				
				
				auto it = products.begin();
				bool flag = false;
				 while ( it != products.end())
                        {
        
        
                              if ((*it).GetId() == tempId)
							        {
							          
							           cout<<"Product Id : "<<it->id<<"  Product Name : "<<it->title<<"  Price : "<<it->price<<endl;
							           flag=true;
							           break;
							        }
						      else
						        {
						            it++;
						        }
						}
						if(flag == false){
							cout<<" This Product is not available currently : "<<endl<<endl;
						}
				 //Find product
				break;
				
			}
				 
			
			case 3:{
				acceptProducts();
				
				break;
			}
				
		
			case 4:{
				//Update product
				break;
			}
				  
		
			case 5:
			{
				bool status=mgr.Delete(2);
					break;
			}	
		
			case 6:{
				bool status=mgr.DeleteAll();
					break;
			}
			default:{
				break;
			}
		
		}				
	}
	while(option != 7);
	
	
//		acceptProducts();
//		showProducts();
	return 0;
	}
