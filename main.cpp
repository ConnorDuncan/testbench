#include <iostream>
using namespace std;
int main(){
    string s = "hello world!";
    for(char c : s){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}