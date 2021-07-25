//****SIMPLE ATM MACHINE****
//****UNSCHOOL-C/C++-MAJOR PROJECT****
//This Code is successfully written and executed by KANURI TEJA SAI VAMSI

#include <iostream>

using namespace std;

int pin,key;
float balance = 1000;
float deduct;
float add;

int pinCheck()
{
    cout<<"\nPlease Enter your PIN to proceed with the transaction : ";
    cin>>pin;
    return pin;
}
int CashWithdraw()
{
    cout<<"Enter the amount to withdraw : "<<endl;
    cin>>deduct;
    if(balance<deduct)
    {
        cout<<"Insufficient Balance"<<endl;
    }
    else
    {
        balance = balance - deduct;
        cout<<"Please collect your cash!"<<endl;
        cout<<"Your Remaining balance : "<<balance<<endl;
    }
    return balance;
}

int CashDeposit()
{
    cout<<"Enter the amount to deposit : "<<endl;
    cin>>add;
    balance = balance + add;
    cout<<"Your account balance : "<<balance<<endl;
    return balance;
}

int display()
{
    cout<<"1.Balance enquiry"<<endl;
    cout<<"2.Cash withdraw"<<endl;
    cout<<"3.Deposit cash"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter the option to be served : "<<endl;
    cin>>key;
    switch(key)
    {
        case 1 :
            cout<<"Your Account Balance : "<<balance<<endl;
            break;
        case 2 :
            CashWithdraw();
            break;
        case 3 :
            CashDeposit();
            break;
        case 4 :
            cout<<"Thank you.."<<endl;
            break;
        default :
            cout<<"Please enter a valid choice"<<endl;
    }
}

int main()
{
    cout<<"************WELCOME TO THE BANK OF TELANGANA************"<<endl;
    pinCheck();
    if(pin == 1234)
    {
        display();
        do
        {
            cout<<"Enter 1 to do another transaction or enter 2 to exit"<<endl;
            int next;
            cin>>next;
            if(next==1)
            {
                display();
            }
            else if(next==2)
            {
                cout<<"Thank you for banking with us!"<<endl;
                break;
            }
        }
        while(1);
    }
    else
    {
        cout<<"Incorrect PIN!!!"<<endl;
    }
    return 0;
}

//****THANK YOU****
