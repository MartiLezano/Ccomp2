//Marccelo Farid Tito Lezano 3.13
#include <iostream>
#include "Account.h"
using namespace std;

void displayAccount(Account accountToDisplay);


void displayAccount(Account accountToDisplay) {
            cout << "Account: " << accountToDisplay.getName() << " balance is $" << accountToDisplay.getBalance() << endl;
        }

int main()
{
    Account account1{"Steffano japi", 50};
    Account account2{"Eduardo hapi", -5};
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
    if(retire< account1.fbalance()){
      cout<<"substrating"<<retire<<"to account1 balance";  
    }
    account1.withdraw(retire);
    
    cout<<"\n\nHow much you want to retire for account2:";
    cin>>retire;
    if(retire< account2.fbalance()){
      cout<<"substrating"<<retire<<"to account2 balance";  
    }
    account2.withdraw(retire);

    displayAccount(account1);
    displayAccount(account2);
    return 0;
}