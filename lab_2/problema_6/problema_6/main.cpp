#include <iostream>

using namespace std;

int main(){

    char pala[30];
    int i = 0;
    char let = 0;

    cout << "introduce palabra" << endl; cin.getline(pala, 30, '\n');

    for(; i < 30; i++){
        let = pala[i];
        if(let >= 97 && let <= 122 ){
            let -= 32;
            pala[i] = let;

        }
    }
    cout << pala << endl;

    return 0;
}
