#include <iostream>
using namespace std;



int tries = 0;
int MaxTries = 3; 
int password = 9921;
double totalAmount = 3432;
double inputAmount;
int PassNum;




int main()
{
    while (tries < MaxTries)
    {
        cout << "Enter Your Password Card ";
        cin >> PassNum;
        if(PassNum == password)
        {
            break;
        }
        else
        {
            tries++;
        }
        if (tries >= MaxTries)
        {
            cout << "Too many failed attempts. Exiting...";
            exit(0);
        }
        
    }
    short Choose_a_number ;
    cout << "============Menu============\n";
    cout << "1: Deposit\n";
    cout << "2: Withdraw\n";
    cout << "3: Amount\n";
    cout << "4: Exit\n";
    cout << "============================\n";
    cin >> Choose_a_number ;
    if (Choose_a_number == 1)
    {
        cout << "Enter a Number to Deposit it: ";
        cin >> inputAmount;
        if (inputAmount > 10000)
        {
            cout << "You cannot deposit more than 10k$\n";
            exit(0);
        }
        else 
        {
            totalAmount += inputAmount;
            cout << "Done!\nYour Total Amount is " << totalAmount;
        }
    }
    else if (Choose_a_number == 2)
    {
        cout << "Enter a Number to Withdraw it: ";
        cin >> inputAmount;
        if (inputAmount > totalAmount)
        {
            cout << "You don't have enough money! ";
            exit(0);
        }
        else
        {
            totalAmount -= inputAmount;
            cout << "Done!\nNow You have "<< totalAmount << "$ in Card";
        }
    }
    else if (Choose_a_number == 3)
    {
        cout << totalAmount;
    }
    else if (Choose_a_number == 4)
    {
        exit(0);
    }
    else
    {
        cout << "Invalid Number!";
    }
}