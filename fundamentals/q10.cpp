//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int red, green, blue, alpha;
   unsigned colour;
   alpha = 128;
   red = 255;
   green = 128;
   blue = 64;
   colour = (alpha * 16777216) + (red * 65536) + (green * 256) + blue;
   cout << "colour is " << colour;
   return 0;
}


