#include <iostream>
using namespace std;

int main(void){
    cout << "숫자를 입력하세요";
    int number;
    cin >> number;
    if (number < 10) {
        cout << "10보다 작습니다." << endl;
    } else if (number < 20) {
        cout << "20보다 작습니다." << endl;
    } else {
        cout << "20 이상입니다." << endl;
    }

    return 0;
}