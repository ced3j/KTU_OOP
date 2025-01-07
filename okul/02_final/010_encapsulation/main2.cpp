#include <iostream>
using namespace std;

class BankAccount{
    private:
        int accountNum;
        double balance;

    public:
        BankAccount(int accNum, double initBalance) : accountNum(accNum){
            if(initBalance >= 0){
                balance = initBalance;
            }else{
                balance = 0;
            }
        }

        double getBalance(){
            return balance;
        }

        // Para yatırma
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << amount << ", TL yatirildi. Yeni bakiye: " << balance << " TL\n";
            }else{
                cout << "Sifirdan buyuk olmali " << endl;
            }
        }

        // Para çek
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << amount << " TL cekildi. Kalan bakiye: " << balance << " TL\n";
            }else{
                cout << "Hata." << endl;
            }
        }
};


int main(){
    BankAccount account(12345, 1000.0);
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500);


    cout << "Son bakiye: " << account.getBalance() << endl;



    return 0;
}