#include <iostream>
using namespace std;

int GetLengthFromUser();
int GetWidthFromUser();
int CalculateArea(int length, int width);
void DisplayArea(int area);

int main()
{
    int length = GetLengthFromUser();
    int width = GetWidthFromUser();
    int area = CalculateArea(length, width);

    DisplayArea(area);

    return 0;
}

int GetLengthFromUser()
{
    int returnValue;

    cout << "Enter the length of the rectangle: ";
    cin >> returnValue;

    return returnValue;
}

int GetWidthFromUser()
{
    int returnValue;

    cout << "Enter the width of the rectangle: ";
    cin >> returnValue;

    return returnValue;
}

int CalculateArea(int length, int width)
{
    int returnValue;

    returnValue = length * width;

    return returnValue;
}

void DisplayArea(int area)
{
    cout << "The area of the rectangle is: " << area << endl;
}
