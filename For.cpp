#include <iostream>
using namespace std;
int main(void) {
    //for 문
    for (int i = 0; i <= 10; i++) {
        cout << i+1 <<"입니다" << endl;
    }

    //while문
    bool loop = true;
    char input;
    while(loop) {
        cin >> input;
        if (input == 'p') {
            loop = false;
        }
    }
    return 0;
}