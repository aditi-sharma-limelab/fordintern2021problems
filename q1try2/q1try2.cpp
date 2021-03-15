// q1try2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int distCalc(int x1, int y1, int x2, int y2) {
    int dist = abs(x1 - x2) + abs(y1 - y2);
    return dist;
}

void testSuite() {
    string check;

    cout << "If you would like to see the test suite, type 'yes'. Otherwise, type 'no'" << endl;
    cin >> check;

    if (check == "yes") {
        cout << "Test Points: (5,4) and (3,2)" << endl;
        cout << "    Expected Value: 4" << endl;
        cout << "      Actual Value: " << distCalc(5, 4, 3, 2) << endl << endl;

        cout << "Test Points: (-1,2) and (1,-2)" << endl;
        cout << "    Expected Value: 6" << endl;
        cout << "      Actual Value: " << distCalc(- 1, 2, 1, -2) << endl << endl;

        cout << "Test Points: (0,0) and (0,0)" << endl;
        cout << "    Expected Value: 0" << endl;
        cout << "      Actual Value: " << distCalc(0, 0, 0, 0) << endl << endl;

        cout << "Test Points: (1,3) and (-4,-7)" << endl;
        cout << "    Expected Value: 15" << endl;
        cout << "      Actual Value: " << distCalc(1, 3, -4, -7) << endl << endl;
    }
}

int main() {
    //test suite 
    testSuite();

    //point x and y values
    int x1;
    int y1;
    int x2;
    int y2;

    //enter values
    cout << "enter the x value of the first point" << endl;
    cin >> x1;
    cout << "enter the y value of the first point" << endl;
    cin >> y1;
    cout << "enter the x value of the second point" << endl;
    cin >> x2;
    cout << "enter the y value of the second point" << endl;
    cin >> y2;

    //return distance
    cout << "The distance between these points is: " << distCalc(x1, y1, x2, y2) << endl;
}
