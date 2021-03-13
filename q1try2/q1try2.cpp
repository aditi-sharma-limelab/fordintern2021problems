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

int main() {
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
