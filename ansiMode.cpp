#include <cstdlib>
#include <iostream>
using namespace std;

enum modes {CLEAR = 0, COLOR, BACK, MOVE, BLANK};

int main(int argc, char **argv) {
    modes mode = CLEAR;
    int action = 0;
    int action2 = 0;
    if(argc == 2) {
        mode = (modes)atoi(argv[1]);
    }else if(argc == 3) {
        mode = (modes)atoi(argv[1]);
    }else if(argc == 4) {
        mode = (modes)atoi(argv[1]);
    }else {
        return 1;
    }
    if(argc == 3) {
        action = atoi(argv[2]);
    }else if(argc == 4) {
        action = atoi(argv[2]);
        action2 = atoi(argv[3]);
    }else{

    }
    if(mode == CLEAR) {
        cout << "\33[m";
        return 0;
    }else if(mode == COLOR) {
        if(action < 0 || action > 14) {
            return 1;
        }
        if(action < 8) {
            action += 30;
        }else{
            action -= 8;
            action += 90;
        }
        cout << "\33[" << action << "m";
        return 0;
    }else if(mode == BACK) {
        if(action < 0 || action > 15) {
            return 1;
        }
        if(action < 8) {
            action += 40;
        }else{
            action -= 8;
            action += 100;
        }
        cout << "\33[" << action << "m";
        return 0;
    }else if(mode == MOVE) {
        cout << "\33[" << action << ";" << action2 << "H";
        return 0;
    }else if(mode == BLANK) {
        cout << "\33[" << action << "J";
        return 0;
    }else{
        return 1;
    }
}
