#include<iostream>
using namespace std;


int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum +  Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int *Brr = NULL; 
    int ilenght = 0, iCnt = 0, iRet = 0; 

    cout<<"Enter number of elements : \n";
    cin>>ilenght;

    // c    : Brr = (int *) malloc(sizeof(int) * ilenght);
    // java : Brr = new int[ilenght];
    Brr = new int[ilenght];

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < ilenght; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Array elements are : \n";
    for(iCnt = 0; iCnt < ilenght; iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    iRet = Summation(Brr, ilenght);

    cout<<"Summtion is : "<<iRet<<endl;


    delete []Brr;


    return 0;
}

