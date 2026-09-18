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
    int length;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    return length;
}

int GetWidthFromUser()
{
    int width;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    return width;
}

int CalculateArea(int length, int width)
{
    int area;

    area = length * width;

    return area;
}

void DisplayArea(int area)
{
    cout << "The area of the rectangle is: " << area << endl;
}
