#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int a, b, c;

void calculate();


int main(){
    a = 1; b = 5; c = 6;
    cout << "Test case with positive discriminant (2 roots)" << endl;
    cout << "Input: 1 2 5" << endl;
    cout << "Output: "; calculate();
    cout << endl;

    a = 1; b = 2; c = 1;
    cout << "Test case with the discriminant equals to zero (1 root)" << endl;
    cout << "Input: 1 2 1" << endl;
    cout << "Output: "; calculate();
    cout << endl;

    a = 1; b = 2; c = 5;
    cout << "Test case with negative discriminant (0 root)" << endl;
    cout << "Input: 1 2 5" << endl;
    cout << "Output: "; calculate();
    cout << endl;
}


void calculate(){
    int disc = b * b - 4 * a * c;

    if(disc > 0){
        int x1 = (-b + sqrt(disc)) / (2 * a);
        int x2 = (-b - sqrt(disc)) / (2 * a);

        cout << "The roots are " + to_string(x1) + " and " + to_string(x2) << endl;
    }
    else if(disc == 0){
        int x = -b / (2 * a);
        cout << "The root is " + to_string(x) << endl;
    }
    else if(disc < 0){
        cout << "There are no real roots" << endl;
    }
}