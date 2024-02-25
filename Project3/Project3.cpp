// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// <Project3> -- Programming: If Loops & Input From Data File Assignment
// CSIS111-<B01>

#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Josiah Barringer -- CSIS111_B01" << endl << endl;

    //Variable declaration
    double score;
    double total;
    double percentage;
    string textFile;


    //input of textFile
    cout << "Enter the input file name: ";
    cin >> textFile;

    ifstream inData;

    inData.open("textFile.txt");

    inData >> score >> total;

    inData.close();

    //calculate percentage with ceil function
    percentage = (score / total) * 100;

    //Display Score and Total
    cout << "Score: " << score << ", Total: " << total << endl;

    cout << "Raw Percentage: " << percentage << "%" << endl;

    percentage = ceil(percentage);

    //floating-point result of up to 5 decimal places
    cout << fixed << setprecision(5);

    cout << "The grade percentage is " << percentage << "%" << endl;

    //if statements based on percentage
    if (percentage >= 90)
    {
        cout << "Excellent" << endl;
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "Well Done" << endl;
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "Good" << endl;
    }
    else if (percentage >= 60 && percentage < 70)
    {
        cout << "Need Improvement" << endl;
    }
    else if (percentage < 60)
    {
        cout << "Fail" << endl;
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
