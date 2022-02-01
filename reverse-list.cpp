#include<iostream>

using namespace std;

void vAscending_Order(int*,int);
void vDescending_Order(int*,int);

int main()
{
    int arrayList[] = {1,2,3,4,5,6,23,2,4,5,6,2,3,1,2,2,7,5,8,7};
    
    vDescending_Order(arrayList, size(arrayList));
    vAscending_Order(arrayList, size(arrayList));
    cin.get();
}
void vAscending_Order(int* arrayList,int sizeOfArray)
{
    for(int i = 0; i < sizeOfArray; i++)
    {
        if(arrayList[i] > arrayList[i+1])
        {
            int tempNum = arrayList[i];
            arrayList[i] = arrayList[i+1];

            arrayList[i+1] = tempNum;
            //restart loop 
            i = -1; 
        }
    }

    cout << "sorted array in ascending order: ";
    for(int i = 0; i <= sizeOfArray; i++)
    {
        cout << arrayList[i] << ",";
    }
    cout << endl;
}
void vDescending_Order(int* arrayList,int sizeOfArray)
{ 
    for(int i = 0; i <= sizeOfArray; i++)
    {
        if(arrayList[i] < arrayList[i+1])
        {
            int tempNum = arrayList[i];
            arrayList[i] = arrayList[i+1];
            arrayList[i+1] = tempNum;
            //restart loop 
            i = -1; 
        }
    }

    cout << "sorted array in descending order: ";
    for(int i = 0; i <= sizeOfArray; i++)
    {
        cout << arrayList[i] << ",";
    }
    cout << endl;
}