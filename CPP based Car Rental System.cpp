#include <iostream>
#include <string>
#include <conio.h>


using namespace std;

class Customer
{
 public :
  string name;
  string address;
    int age;
    int no_of_days;

    string phone_no;
    string aadhar_no;
    void getdata()
    {
        cout<<"\t\t\tEnter the name:\n\t\t\t";
        cin>>name;
        cout<<"\t\t\tEnter the address\n\t\t\t";
        cin>>address;
        cout<<"\t\t\tEnter the age:\n\t\t\t";
        cin>>age;
        if(age<18)
        {
            cout<<"\t\t\tUnderaged cannot be allowed to drive\t\t\t"<<endl;
        }
        
        cout<<"\t\t\tEnter the phone number:\n\t\t\t";
        cin>>phone_no;
        if(phone_no.size()<9 || phone_no.size()>11)
        {
            cout<<"\t\t\tInvalid Number\t\t\t\n";
        }
        cout<<"\t\t\tEnter the aadhar number :\n\t\t\t";
        cin>>aadhar_no;
        if(aadhar_no.size()<12 || aadhar_no.size()>12)
        {
            cout<<"\t\t\tInvalid Aaadhar number\t\t\t\n\n";
        }
        
    
    }      
void showdata()
      {
          cout<<"\n\t\t\t===================================================";
          cout<< "\n\t\t\tName of the customer :"<<name<<endl;
          cout<< "\t\t\tAdress of the customer :"<<address<<endl;
          cout<<"\t\t\tAge of the customer  :"<<age<<endl;
          cout<<"\t\t\tPhone number of the customer is :"<<phone_no<<endl;
          cout<<"\t\t\tAadhar number of the customer is :"<<aadhar_no<<endl;
          cout<<"\t\t\t===================================================";
      }
        
};

 class Car 
{
	public:
		   string carmodel[7] = {"Maruti Wagon", "Maruti Swift", "Hyundai I20", "Hyundai Creta","Honda city","Toyota Innova","Traveler"};
		   string carColor[7]={"Red","black","yellow","Blue","Red","black","white"};
		   string average[7]={"100 Km/h ","150 Km/h","150 Km/h","170 Km/h","130 Km/h","100 Km/h","100 Km/h"};
		   int price[7]={1000,2000,2000,3000,1000,6000,8000};
		   
		    void selectCar()
			 {
				 cout<<"\t\t\t\t\t\t1.Maruti Wagon(Budget Friendly)\n\t\t\t";
				 cout<<"\t\t\t2.Maruti Swift(Good for long route)\n\t\t\t";
				 cout<<"\t\t\t3.Hyundai I20(Diesel version)\n\t\t\t";
				 cout<<"\t\t\t4.Hyundai Creta(Good for offroading)\n\t\t\t";
				 cout<<"\t\t\t5.Honda city(Sleek Design)\n\t\t\t";
				 cout<<"\t\t\t6.Toyota Innova(When Members between 4 to 7)\n\t\t\t";
				 cout<<"\t\t\t7.Traveler(When Members more than 7)\n\n\t\t";
				 cout<<"----------------------------------------------------------------------------------------------------------------\t\t\t\n\n\n";
        	}
            
				void carDetails(int choice)
				  {
				  	 system("CLS");
				  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
				     cout<<"\t\t\tYou Have Selected - "<<carmodel[choice-1]<<endl;
				     cout<<"\t\t\t-----------------------------\n\n\n";
				    
				     cout<<"\t\t\tColor : "<<carColor[choice-1]<<endl;
				     cout<<"\t\t\tAverage of car : "<<average[choice-1]<<endl;
				     cout<<"\t\t\tPrice : "<<price[choice-1]<<endl;
				  }        	
				  
				  void priceTopay(int no_of_days, int choice)
				  {
				      int total = price[choice-1] * no_of_days;
				      cout<<"\n\n\t\t\t\t\t Total Price to be paid : "<<total<<endl;
				  }
        	
};


int main()
{
    
    int login();
    login();
	cout<<"\t\t\t\t\t\t!!--WELCOME TO CAR RENTAL SYSTEM--!!\t\t\t\t\t\n\n\n";
    cout<<"\t\tWE HAVE A VARIETY OF CARS AVAILABLE AT THE BEST PRICE, WHAT KIND OF CAR WOULD YOU LIKE TO CHOOSE FOR RENTING\t\t\t\n\n\n ";
    cout<<"\t\t----------------------------------------------------------------------------------------------------------------\t\t\t\n\n\n";
	Customer cust;
	
	Car c2;
	
	
	 string decide ="yes" ;
	
			 while(decide!="exit")
		     {
			     c2.selectCar();
			     cout<<"\n\n\n\t\t\tEnter Your Preffered Choice : ";
			     int choice ;
			     cin>>choice ;
			     c2.carDetails(choice);
			     int days;
		         cout<<"\n\n\n\t\t\tEnter numbers of days : "; 
		         cin>>days;
		         
			     cout<<"\n\n\n\t\t\tAre You Sure, you want to rent this Car? (yes /no /exit ) : ";
			     cin>>decide ;
			     if(decide=="yes") 
				 {
			        cust.getdata();
			        cust.showdata();
			        c2.priceTopay(days,choice);
			        cout<<"\n\n\t\t\tDo you want to continue ?(yes/no) ";
			        cin>>decide;
			        if (decide=="no") break ;
			        system("CLS");
		        }
		        
		   }
	
	return 0;
}



int login()
{
   string pass ="";
   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\t-----------------------------------------------------------";

   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tCar Rental System Login";
    cout <<"\n\n\n\n\n\n\n\t\t\t\t\t-----------------------------------------------------------";

   cout << "\n\n\n\n\n\n\n\t\t\t\t\tEnter Correct Password to login: ";
   
   ch = _getch();
   while(ch != 13){
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\n\t\t\t\t\tPassword Match Succesfully!!\n\n";
      system("PAUSE");
      system("CLS");
      
   }else{
      cout << "\n\n\n\n\t\t\t\t\tPassword Did Not Match.Please Try again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }
}
