#include <iostream>
using namespace std;

int main()
{
  int totalSum = 180;
  int angle1, angle2, angle3;

  cout << "Please enter the first angle: ";
  cin >> angle1;
  if (angle1 <= 0 || angle1 >= totalSum)
  {
    cout << "Invalid input. Angles must be positive and less than 180 degrees." << endl;
    return 1;
  }

  cout << "Please enter the second angle: ";
  cin >> angle2;
  if (angle2 <= 0 || angle1 + angle2 >= totalSum)
  {
    cout << "Invalid input. The sum of the first two angles must be less than 180 degrees." << endl;
    return 1;
  }

  angle3 = totalSum - (angle1 + angle2);

  if (angle3 > 0)
  {
    cout << "The third angle of the triangle is: " << angle3 << endl;
  }
  else
  {
    cout << "Error: The calculated third angle is invalid." << endl;
  }

  return 0;
}
