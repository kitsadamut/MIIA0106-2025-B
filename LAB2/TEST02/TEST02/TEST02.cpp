#include <iostream>
#include <string>
using namespace std;

enum LinePosition { LEFT, CENTER, RIGHT };

LinePosition readColorSensor() {
    int sensor;
    cin >> sensor;

    if (sensor == 0) return LEFT;
    else if (sensor == 2) return RIGHT;
    else return CENTER;
}

int main() {
    LinePosition position;

    while (true) {
        position = readColorSensor();

        if (position == LEFT) {
            cout << "Turn Left" << endl;
        }
        else if (position == RIGHT) {
            cout << "Turn Right" << endl;
        }
        else if (position == CENTER) {
            cout << "Move Forward" << endl;
        }
    }

    return 0;
}

