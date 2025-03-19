//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <sarah Yaser Navarrete> on <03/14/25>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getPayments(int, double, int);

int main()
{
    int principal = 0;
    double rateCred = 0.0;
    double rateDealer = 0.0;
    int termYears = 0;
    int rebate = 0;
    double credPayments = 0.0;
    double dealerPayments = 0.0;


    cout << "Enter the Principal Amount: ";
        cin >> principal;

    cout << "Enter the Rebate: ";
        cin >> rebate;
 
    cout << "Enter the Credit Rate: ";
        cin >> rateCred;

    cout << " Enter the Dealer Rate: ";
        cin >> rateDealer;

    cout << " Enter the Term in Years: ";
        cin >> termYears;
    
    credPayments = getPayments(principal - rebate, rateCred / 12 , termYears * 12);
    dealerPayments = getPayments(principal, rateDealer / 12, termYears * 12);

    cout << fixed << setprecision(2) << endl;
    cout << "Credit Union Payment: $" << credPayments;
    cout << "Dealer Payment: $" << dealerPayments;
    return 0;
    //end of main function    
}
    
double getPayments(int prin, double monthRate, int months)
{
    //calculates and returns a monthly payment
    double monthPay = 0.0;
    monthPay = prin * monthRate / 
        (1 - pow(monthRate + 1, -months));
    return monthPay;
} //end of getPayment function//*****function definition*****

