#include <iostream>
using namespace std;

int main(){
    string input = "";
    int len = 0;
    
    while(true){
        getline(cin, input);
        if(input == "END") break;

        len = input.length();
        for(int i = len - 1; i >= 0; i--) cout << input[i];
        cout << endl;
    }
    return 0;
}
