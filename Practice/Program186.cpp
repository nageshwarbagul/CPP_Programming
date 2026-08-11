#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL; 
    int ilenght = 0, iCnt = 0;

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
    
    delete []Brr;


    return 0;
}

