#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
public:
    int *Arr;
    int iSize;

    ArrayX(int x) // Parameterised Constructor
    {
        cout << "Inside constructor\n";

        iSize = x;            // Characteristics initialisation
        Arr = new int[iSize]; // Resource allocation
    }

    // Destructor
    ~ArrayX()
    {
        cout << "Inside destructor\n";

        delete[] Arr; // Resource deallocation
    }
};
int main()
{
    ArrayX aobj2(5);

    return 0;
}