#include <iostream>
#include <vector>
using namespace std;

int main(){
    int max_list[3];
    int max, idx;


    for(int i = 0; i < 2; i++){
        vector<int> v(10);

        for(int i = 0; i < 10; i++) {
            cin >> v[i];
        }

        for(int i = 0; i < 3; i++) {
            max = v[0]; 
            idx = 0;
            for(int j = 0; j < v.size(); j++) {
                if(v[j] > max) { 
                    max = v[j];
                    idx = j;
                }
            }
            max_list[i] = max; 
            v.erase(v.begin() + idx); 
        }

        cout << max_list[0] + max_list[1] + max_list[2] << " ";
    }

    return 0;
}


