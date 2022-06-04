#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double d1 = 7.0;
    double d2 = 7.3;
    cout << std::fixed << std::setprecision(1) << "d1: " << d1 << " d2: " << d2 << endl;
    return 0;
}
