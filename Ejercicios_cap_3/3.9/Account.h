//Marccelo Farid Tito Lezano 3.9
#include <string>
using namespace std;
class Account {
public:
	Account(string accountName, int initialBalance)
		: name{accountName}{

		if (initialBalance > 0) {
			balance = initialBalance;

			
		}
    }

    void deposit(int depositAmount) {
        if (depositAmount > 0) { 
            balance = balance + depositAmount; 
        }
    }
    int getBalance()const{
        return balance;
    }
    void setName(string accountName){
        name= accountName;
    }
    string getName()const{
        return name;
    }

    void withdraw(int retire){
        if (retire<=balance){
            balance=balance-retire;
        }
        else{
            cout<<"Your account is out of balance"<<endl;
        }
    }
    int fbalance()const{
        return balance;
    }
   
private:
    string name;
    int balance{0};
};