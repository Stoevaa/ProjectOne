// ProjectOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
#define Debug_A 

#ifdef Debug_A
#define a 10
#elif Debug_B
#define a 100
#else
#define a 1000
#endif
int main()
{
    cout << "Hello C++!\n";
    cout << a;
}
