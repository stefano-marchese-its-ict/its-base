#include <iostream>

using namespace std;

#define ENDLN std::cout << std::endl << std::endl

inline void end_ln() {std::cout << std::endl << std::endl;}

int main()
{
    cout << "Hello World!!!" << endl;

    ENDLN;

    end_ln();

    return 0;
}