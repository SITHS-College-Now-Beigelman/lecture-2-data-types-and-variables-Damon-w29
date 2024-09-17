// Damon Wu 
// Lecture 2 
// 9/16/2024

#include <iostream>
#include <string>
using namespace std;

int main() {
// Listing the variables 
    int Inters  = 12;           // Integer (Whole Number)
    float Stilt = 2.71;         // Floating Point Number
    double floatsm = 8.28;     // Floating Point number 
    char Jos = 'H';            // Character
    bool Boo = true;           // Boolean 
    string Gpu = "AMD";        // String 

// Slide 37 
    int inches; // A variable to store total inches 
    inches = 120; // Setting the value for inches 
    cout << inches << "inch(es) = " ; //output the value of inches and the equal sign
    cout << inches / 12 << " feet (foot) and " ; // output the amount of feet(foot)
    cout << inches % 12 << " inch(es)" << endl;  // output remainding inches

// Comparisons 
    
// Expressions 
    cout << "2 + 3.5 = " << 2 + 3.5 << endl;
    cout << " 6 / 4 + 3.9 = " << 6 / 4 +3.9 << endl;
    cout << " 5.2*2 - (13.6 + 18/2) = " << 5.2*2 - (13.6 + 18/2) << endl;
    
    return 0;
}
