#include <iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
private:
    int *Arr;
    int iSize;

public:
    // Paramterised constructor with default value
    ArrayX(int X = 5)
    {
        iSize = X;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        delete[] Arr;
    }

    void Accept()
    {
        int iCnt = 0;

        cout << "Enter the Element :\n";
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;

        cout << "Element of the array are :\n";
        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout << Arr[iCnt] << "\n";
        }
    }

    int Summation()
    {
        int iCnt = 0, iSum = 0;

        for (iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    }
};

int main()
{
    ArrayX *aobj = NULL;
    int iLenght = 0, iRet = 0;

    cout << "Enter number of the elements : \n";
    cin >> iLenght;

    aobj = new ArrayX(iLenght);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->Summation();
    cout << "Sumamtion is : " << iRet;

    delete aobj;
    return 0;
}