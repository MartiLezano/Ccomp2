//Marccelo Farid Tito Lezano 3.14
#include <iostream>
#include "Account.h"
using namespace std;

void displayAccount(Account accountToDisplay);


void displayAccount(Account accountToDisplay) {
            cout << endl; 
            cout << "-Account: " << accountToDisplay.getName() <<" " <<accountToDisplay.getLastname() <<endl<< "Account number: " << 
            accountToDisplay.getaccountnumber()<<endl << "Your balance is $" << 
            accountToDisplay.getBalance() << endl;
            cout << endl;
        }

int main()
{
    Account account1{"Marccelo ","Lezano", 200000,65};
    Account account2{"Andrea","Valenzuela", 1321503,-5};
    displayAccount(account1);
    displayAccount(account2);
    
    cout<<"\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount; 
    cout << "adding " << depositAmount << " to account1 balance"<<endl;
    account1.deposit(depositAmount);
    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account2: "; 
    cin >> depositAmount; 
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);
    displayAccount(account1);
    displayAccount(account2);
 
    int retire;
    
    cout<<"\n\nHow much you want to retire for account1:";
    cin>>retire;
    if(retire< account1.getBalance()){
      cout<<"substrating"<<retire<<"to account1 balance";  
    }
    account1.withdraw(retire);
    
    cout<<"\n\nHow much you want to retire for account2:";
    cin>>retire;
    if(retire< account2.getBalance()){
      cout<<"substrating"<<retire<<"to account2 balance";  
    }
    account2.withdraw(retire);

    displayAccount(account1);
    displayAccount(account2);
    return 0;
}