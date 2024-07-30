#include<iostream>
#include<string>
using namespace std;

void rotateClock(string &clock) {
    char c = clock[clock.size()-1];
    for (int index = clock.size()-1; index > 0; index--) {
        clock[index] = clock[index-1];
    }
    clock[0] = c;
}

void rotateAntiClock(string &anticlock) {
    char c = anticlock[0];
    for (int index = 0; index < anticlock.size()-1; index++) {
        anticlock[index] = anticlock[index+1];
    }
    anticlock[anticlock.size()-1] = c;
}

int main() {
    string str1 = "amazon";
    string str2 = "onamaz";

    string clock = str1;
    string anticlock = str1;

    rotateClock(clock);
    rotateClock(clock);

    if(clock == str2)
      cout<<"clockwise";

    rotateAntiClock(anticlock);
    rotateAntiClock(anticlock);

    if(anticlock == str2)
      cout<<"anticlockwise";

    return 0;
}
