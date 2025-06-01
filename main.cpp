#include<iostream>
using namespace std;

int main()
{
    int password, pin, enter_amount,choice ;
    float withdrawal_amount,deposit_amount;
    cout<<"\n ******** WELCOME TO BANK OF AMAN ********"<<endl;
    cout<<"Enter your PIN:- "<<endl;
    cin>>password;
    cout<<"Enter Amount to Active your Account"<<endl;
    cin>>enter_amount;
    cout<<"Enter PIN for confirmation"<<endl;
    cin>>pin;
    if(password==pin)
    {
        cout<<"CHOOSE ANY ONE OF THEM::--"<<endl;
        cout<<"1.For Withdrawal"<<"2.For Deposit"<<"3.For Mini-statement"<<"4.For CHANGE PIN"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter Amount For Withdrawal"<<endl;
                cin>>withdrawal_amount;
                float balance_after_withdrawal = enter_amount - withdrawal_amount;
                cout<<"After withdrawing your amount is :- "<<balance_after_withdrawal<<endl;
                break;
            }
            case 2:
            {
                cout<<"Enter Amount to deposit in your account"<<endl;
                cin>>deposit_amount;
                float balance_after_deposit =  enter_amount + deposit_amount;
                break;
            }
            case 3:
            {
                cout<<"your balance in your account is :- "<<endl;
                cout<<enter_amount<<endl;
                break;
            }
            case 4:
            {
                cout<<"Enter your Current PIN: "<<endl;
                cin>>pin;
                if(pin == password)
                {
                    cout<<"Enter New PIN : "<<endl;
                    cin>>pin;
                    cout<<"Change PIN SUCCESSFULLY"<<endl;
                }
                else 
                cout<<"YOUR PIN doesn't match for changing your current PIN"<<endl;
                break;
            }
            default:
            cout<<"SORRY you have entered invalid input "<<endl;
        }
    }
    else
    cout<<"SORRY,PIN doesn't match PLZ try again"<<endl;
    return 0;
}
