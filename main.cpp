#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;

class bank
{
    char name[100],add[100],y;
    int balance, amount, pin;
	bool validPin = false;;
public:
    void open_account ();
    void deposite_money();
    void withdraw_money ();
    void display_account();
};


void bank::open_account()
{
    system("cls");
    cout<<"Enter your full name : ";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your address : ";
    
    cin.getline(add,100);
  while (!validPin) {
    cout << "Enter your desired 4-digit PIN: ";
    cin >> pin;
    if (pin >= 1000 && pin <= 9999) {
      validPin = true;
      cout << "PIN created successfully!" << endl;
    } else {
      cout << ".....Invalid PIN. Please enter a 4-digit numerical PIN....." << endl;
    }
  }
  
    cout<<"Enter amount for deposite : ";
    cin>>balance;
    cout<<"---------- Your account is created ----------\n";

}
void bank::deposite_money()
{
    int a ;
    cout<<"Enter how much money you want to deposit: ";
    cin>>a;
    balance+=a;
    cout<<"Your total deposit amount\n"<<balance<<endl;
}
void bank::display_account()
{
    cout<<"Enter the name : "<<name<<endl;
    cout<<"Enter your address : "<<add<<endl;
    cout<<"Pin : "<<pin<<endl;
    cout<<"Amount you deposite : "<<balance<<endl;

}
void bank::withdraw_money()
{
    cout<<"withdraw -> ";
    cout<<"Enter your amount for withdrawing:  ";
    cin>>amount;
    balance=balance-amount;
    cout<<"Now your total amount is left : "<<balance;
}

int main()
{
	
    int ch,x,n;
    bank obj;
    system("cls");
    system("color 0A");
    do
    {
  	
	cout<<"                #####"	;
	cout<<"\n             ###########";	  	       	
	cout<<"\n       #######################";		     	
    cout<<"\n#####################################\n";
	cout<<"##########  WELCOME TO BANK  ##########\n";
	cout<<"#######################################\n";
    cout<<"########## 1)Open account   ###########\n";
    cout<<"########## 2)Deposit money  ###########\n";
    cout<<"########## 3)WithDraw money ###########\n";
    cout<<"########## 4)Display account###########\n";
    cout<<"########## 5)Exit           ###########\n";
    cout<<"\nPlease sir, select the option from above:  ";
    cin>>ch;

    switch(ch)
    {
        case 1:"01)Open account \n";
        obj.open_account ();
        break;
        case 2:"02)Deposit money \n";
        obj.deposite_money();
        break;
        case 3:"03)WithDraw money \n";
        obj.withdraw_money ();
        break;
        case 4:"04)Display account\n";
        obj.display_account();
        break;
        case 5:
            if(ch==5)
            {
               cout<< "exit";
            }
            break;
        default:{
            cout<<"Enter valid option, please try again... \n";
        }

    }
    cout<<"\nWant to select next step then please press: Y/y \n";
    cout<<"If you want to exit then please press: N/n \n";
    x=getch();
    if(x=='n' || x=='N')
    cout<<"Exit";
    }
    while (x=='y' || x=='Y');

 getch();
 return 0;

}
