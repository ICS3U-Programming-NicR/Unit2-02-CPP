// Copyright (c) 2022 Mr. Riscalas All rights reserved
//
// Created By: Nicolas Riscalas
// Created On 03, 08, 2022
// Calculate the area and perimeter of a circle

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
#define PI M_PI

int main() {
    float side[2], area, perimeter;
    cout << "Enter the length and width of a rectangle\n";
    for (int i = 0; i < 2; ++i) {
        cin >> side[i];
    }


    area = side[0] * side[1];
    perimeter = 2*side[0] + 2*side[1];
    cout << "Area of rectangle : " << area;
    cout << "\nPerimeter of rectangle : " << perimeter;

    return 0;
}
