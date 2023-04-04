#include <iostream>
using namespace std;
int main() {
  double speed = 0;
  do {
    cout << "Input delta speed: ";
    double delta;
    cin >> delta;
    speed = speed + delta;
    if (speed < 0)
      speed = 0;
    if (speed > 150)
      speed = 150;
    char speed_str[5];
    sprintf(speed_str, "%.1f", speed);
    cout << "Speed: " << speed_str << " km/h" << endl;
    if (speed <= 0)
      break;
  } while (true);
}
