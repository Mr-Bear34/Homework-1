/*
 *        File: invoice.cc
 *      Author: Ryan Walsh
 *        Date: 9/18/2019
 * Description: 
 *              This program is designed to provide assistance for
 *              people who are ordering 2TB hardrives from a store that
 *              offers specific discounts for those who buy 5 or more
 *              drives. It will print off final prices adjusted for
 *              customers who specifically live in Ohio or buy 5 or
 *              more drives.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main(int argc, char const *argv[]) {
    
    char drive;
    int driveNum;
    string ohio;
    double totalPrice;
    double drivePrice;
    double discount;
    double subtotal;
    double taxes;

    cout << "Enter a hard drive type (w, s) followed by the quantity: ";
    cin >> drive >> driveNum;

    cout << "Do you live in Ohio (yes/no)? ";
    cin >> ohio;

    cout << "Hard Drives Invoice" << endl;
    cout << "---------------------------------------" << endl;


    if(drive == 'w') {
        drivePrice = 90.0;
        if(driveNum >= 5){
            totalPrice = drivePrice * driveNum;
            discount = totalPrice * 0.05;
            subtotal = totalPrice - discount;
            if(ohio == "yes"){
                taxes = totalPrice * 0.07;
            }
            if(ohio == "no"){
                taxes = 0;
            }
        }
        if(driveNum < 5){
            totalPrice = drivePrice * driveNum;
            discount = 0;
            subtotal = totalPrice;
             if(ohio == "yes"){
                taxes = totalPrice * 0.07;
            }
            if(ohio == "no"){
                taxes = 0;
            }
        }
        cout << setw(20) << "Drive Brand: Western Digital" << endl;
        cout << setw(20) << "Quantity:  " << driveNum << endl;
        cout << setw(20) << fixed << setprecision(2) << "Price: $" << drivePrice << endl;
        cout << setw(20) << "Ohio Resident:  " << ohio << endl;
        cout << setw(20) << fixed << setprecision(2) << "Total price: $" << totalPrice << endl;
        cout << "-----------------------------" << endl;
        cout << setw(20) << fixed << setprecision(2) << "Discount: $" << discount << endl;
        cout << setw(20) << fixed << setprecision(2) << "Subtotal: $" << subtotal << endl;
        cout << setw(20) << fixed << setprecision(2) << "Taxes: $" << taxes << endl;
        cout << "=============================" << endl;
        double lastPrice = subtotal + taxes;
        cout << setw(20) << fixed << setprecision(2) << "Total: $" << lastPrice << endl;
        cout << "=============================";
    }


    if(drive == 's') {
        drivePrice = 95.0;
        if(driveNum >= 5){
            totalPrice = drivePrice * driveNum;
            discount = totalPrice * 0.05;
            subtotal = totalPrice - discount;
            if(ohio == "yes"){
                taxes = totalPrice * 0.07;
            }
            if(ohio == "no"){
                taxes = 0;
            }
        }
        if(driveNum < 5){
            totalPrice = drivePrice * driveNum;
            discount = 0;
            subtotal = totalPrice;
            if(ohio == "yes"){
                taxes = totalPrice * 0.07;
            }
            if(ohio == "no"){
                taxes = 0;
            }
        }
        cout << setw(20) << "Drive Brand: Seagate" << endl;
        cout << setw(20) << "Quantity:  " << driveNum << endl;
        cout << setw(20) << fixed << setprecision(2) << "Price: $" << drivePrice << endl;
        cout << setw(20) << "Ohio Resident:  " << ohio << endl;
        cout << setw(20) << fixed << setprecision(2) << "Total price: $" << totalPrice << endl;
        cout << "-----------------------------" << endl;
        cout << setw(20) << fixed << setprecision(2) << "Discount: $" << discount << endl;
        cout << setw(20) << fixed << setprecision(2) << "Subtotal: $" << subtotal << endl;
        cout << setw(20) << fixed << setprecision(2) << "Taxes: $" << taxes << endl;
        cout << "=============================" << endl;
        double lastPrice = subtotal + taxes;
        cout << setw(20) << fixed << setprecision(2) << "Total: $" << lastPrice << endl;
        cout << "=============================";
    }
    return 0;
}// main