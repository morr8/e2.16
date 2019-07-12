/*
 •• E2.16
 Write a program that reads two times in military format (0900, 1730) and prints the number of hours and minutes between the two times. Here is a sample run. User input is in color.
 
 Please enter the first time: 0900
 Please enter the second time: 1730
 8 hours 30 minutes
 Extra credit if you can deal with the case where the first time is later than the second:
 
 Please enter the first time: 1730
 Please enter the second time: 0900
 15 hours 30 minutes
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Please enter the first time: ";
    int first_time;
    cin >> first_time;
    
    cout << "Please enter the second time: ";
    int second_time;
    cin >> second_time;
    
    /*
    int bigger_time = max(first_time, second_time);
    int smaller_time = min(first_time, second_time);
    */
    
    int difference = first_time - second_time;
    
    cout << abs(difference / 100) << " hours " << abs(difference % 100) << " minutes" << endl;
    
    //cout << setw(4) << difference << endl;
    
    //cout << difference / 10000 % 10 << difference / 1000 % 10 << " hours " << difference / 100 % 10 << difference / 10 % 10 << " minutes" << endl;
    
    //cout << difference / 10 % 10 << difference / 100 % 10 << " hours " << difference / 1000 % 10 << difference / 10000 % 10 << " minutes" << endl;
    
}

