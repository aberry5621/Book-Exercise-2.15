//
//  main.cpp
//  Book Exercise 2.15
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Geometric distance
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate Distance Between Two Points \n";
    
    // D
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    // container for square calculation
    double add_squares = 0.0;
    double dist_calc = 0.0;
    
    // I
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;
    
    // P
    // sqrt dist calc of a is: pow(a, 0.5)
    add_squares = pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0);
    dist_calc = pow(add_squares, 0.5);
    
    
    // O
    cout << "The distance between the two points is " << dist_calc << endl;
    
    return 0;
    
}