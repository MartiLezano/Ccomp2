//Marccelo Farid Tito Lezano 3.9
#include <iostream>
#include "Account.h"

using namespace std;
int main()
{
    Account account1{"Steffano japi", 50};
    Account account2{"Eduardo hapi", 50};

    cout<<"account1: "<<account1.getName()<<"Balance is $/"<<account1.getBalance();
    cout<<"\naccount1: "<<account2.getName()<<"Balance is $/"<<account1.getBalance();
    
    cout<<"\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount; 
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; 
    cin >> depositAmount; 
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

 
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.getBalance() << endl;
    
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

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
    << account1.fbalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
    << account2.fbalance() << endl;
    return 0;
}