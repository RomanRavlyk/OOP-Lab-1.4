#include <iostream>
#include "Figures.h"

using namespace std;




// –”√
void Circle::setR(double value) {
    R = value;
}

void Circle::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Circle::resize(double scale) {
    R *= scale;
    cout << "New R: " << getR() << endl;
}

void Circle::Read() {
    CheckFunctions();
}

double Circle::S() const {
    return (R * R) * 3.14;
}

void Circle::Display() const {
    getR();
    S();
}

bool Circle::Init(double value) {
    if (value > 0) {
        return true;
    }
}

void Circle::CheckFunctions() {
    bool exit = false;
    while (!exit) {
        int choice;
        std::cout << "\nMenu:\n";
        std::cout << "1. Create Circle\n";
        std::cout << "2. Move Figure\n";
        std::cout << "3. Change figure scale\n";
        std::cout << "4. Calculate S\n";
        std::cout << "5. Exit\n";
        cin >> choice;
        switch (choice) {
        case 1: {
            double radius;
            cout << "Input new radius: ";
            cin >> radius;
            if (Init(radius)) {
                setR(radius);
            }
            break;
        }
        case 2: {
            double dx, dy;
            std::cout << "Type x: ";
            std::cin >> dx;
            std::cout << "Type y: ";
            std::cin >> dy;
            move(dx, dy);
            cout << "x: " << getX() << endl;
            cout << "y: " << getY() << endl;
            std::cout << "Figure moved.\n";
            break;
        }
        case 3: {
            double scale;
            std::cout << "Enter scale: ";
            std::cin >> scale;
            if (Init(scale)) {
                resize(scale);
                std::cout << "Figure scale changed.\n";
            }
            else { cout << "incorrect value"; }
            break;
        }
        case 4: {
            std::cout << "Figure S: " << S() << std::endl;
            break;
        }
        case 5: {
            std::cout << "Thanks for using the program.\n";
            exit = true;
            break;
        }
        default: {
            std::cout << "Incorrect choice of option\n";
            break;
        }
        }
    }
}





// ¬ƒ¿–¿“
void Square::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Square::resize(double scale) {
    side *= scale;
    cout << "New side value: " << getSide() << endl;
}

void Square::Read() {
    CheckFunctions();
}

double Square::S() const {
    return side * side;
}

void Square::Display() const {
    getSide();
    S();
}

bool Square::Init(double value) {
    if (value > 0) {
        return true;
    }
}

void Square::CheckFunctions() {
    bool exit = false;
    while (!exit) {
        int choice;
        std::cout << "\nMenu:\n";
        std::cout << "1. Create Square\n";
        std::cout << "2. Move Figure\n";
        std::cout << "3. Change figure scale\n";
        std::cout << "4. Calculate S\n";
        std::cout << "5. Exit\n";
        cin >> choice;
        switch (choice) {
        case 1: {
            double side;
            cout << "Input new radius: ";
            cin >> side;
            if (Init(side)) {
                setSide(side);
            }
            break;
        }
        case 2: {
            double dx, dy;
            std::cout << "Type x: ";
            std::cin >> dx;
            std::cout << "Type y: ";
            std::cin >> dy;
            move(dx, dy);
            cout << "x: " << getX() << endl;
            cout << "y: " << getY() << endl;
            std::cout << "Figure moved.\n";
            break;
        }
        case 3: {
            double scale;
            std::cout << "Enter scale: ";
            std::cin >> scale;
            if (Init(scale)) {
                resize(scale);
                std::cout << "Figure scale changed.\n";
            }
            else { cout << "incorrect value"; }
            break;
        }
        case 4: {
            std::cout << "Figure S: " << S() << std::endl;
            break;
        }
        case 5: {
            std::cout << "Thanks for using the program.\n";
            exit = true;
            break;
        }
        default: {
            std::cout << "Incorrect choice of option\n";
            break;
        }
        }
    }
}




//œˇÏÓÍÛÚÌËÍ
void Rectangle::move(double dx, double dy) {
    x += dx;
    y += dy;
}

void Rectangle::resize(double scale, double scale2) {
    side1 *= scale;
    side2 *= scale2;
    cout << "New side1 value: " << getSide1() << endl;
    cout << "New side2 value: " << getSide2() << endl;
}

void Rectangle::Read() {
    CheckFunctions();
}

double Rectangle::S() const {
    return side1 * side2;
}

void Rectangle::Display() const {
    getSide1();
    getSide2();
    S();
}

bool Rectangle::Init(double value) {
    if (value > 0) {
        return true;
    }
}

void Rectangle::CheckFunctions() {
    bool exit = false;
    while (!exit) {
        int choice;
        std::cout << "\nMenu:\n";
        std::cout << "1. Create Rectangle\n";
        std::cout << "2. Move Figure\n";
        std::cout << "3. Change figure scale\n";
        std::cout << "4. Calculate S\n";
        std::cout << "5. Exit\n";
        cin >> choice;
        switch (choice) {
        case 1: {
            double side;
            double side2;
            cout << "Input new side 1: ";
            cin >> side;
            cout << "Input new side 2: ";
            cin >> side2;
            if (Init(side) && Init(side2)) {
                setSide1(side); setSide2(side2);
            }
            else { cout << "Incorrect values"; }
            break;
        }
        case 2: {
            double dx, dy;
            std::cout << "Type x: ";
            std::cin >> dx;
            std::cout << "Type y: ";
            std::cin >> dy;
            move(dx, dy);
            cout << "x: " << getX() << endl;
            cout << "y: " << getY() << endl;
            std::cout << "Figure moved.\n";
            break;
        }
        case 3: {
            double scale1;
            double scale2;
            std::cout << "Enter scale for side 1: ";
            std::cin >> scale1;
            std::cout << "Enter scale for side 2: ";
            std::cin >> scale2;
            if (Init(scale1) && Init(scale2)) {
                resize(scale1, scale2);
                std::cout << "Figure scale changed.\n";
            }
            else { cout << "incorrect value"; }
            break;
        }
        case 4: {
            std::cout << "Figure S: " << S() << std::endl;
            break;
        }
        case 5: {
            std::cout << "Thanks for using the program.\n";
            exit = true;
            break;
        }
        default: {
            std::cout << "Incorrect choice of option\n";
            break;
        }
        }
    }
}