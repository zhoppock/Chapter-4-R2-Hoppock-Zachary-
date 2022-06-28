#include <iostream>

using namespace std;

int main()
{
cout << "a." << endl;

int i = 0;
int j = 10;
while (i < j) { cout << i << " " << j << endl; i++; j--; }

cout << endl << "b." << endl;

i = 0;
j = 10;
while (i < j) { cout << i + j << endl; i++; j--; }

   return 0;
}