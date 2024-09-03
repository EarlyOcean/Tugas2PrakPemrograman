#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int a, b, c;

// menggunakan fungsi agar test code lebih mudah
void calculate();


int main(){
    cin >> a >> b >> c;
    calculate();
}


void calculate(){
    int disc = b * b - 4 * a * c;

    if(disc > 0){
        int x1 = (-b + sqrt(disc)) / (2 * a);
        int x2 = (-b - sqrt(disc)) / (2 * a);

        cout << "The factors are " + to_string(x1) + " and " + to_string(x2) << endl;
    }
    else if(disc == 0){
        int x = -b / (2 * a);
        cout << "The factor is " + to_string(x) << endl;
    }
    else if(disc < 0){
        cout << "There are no real roots" << endl;
    }
}