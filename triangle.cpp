#include <iostream>

using namespace std;
/*
triangle 1  :  *
                **
                ***
                ****
                *****

triangle 2  :   *****
                ****
                ***
                **
                *

triangle 3  :       *
                   **
                  ***
                 ****
                *****

triangle 4  :   *****
                 ****
                  ***
                   **
                    *

*/

void vTriangle1();
void vTriangle2();
void vTriangle3();
void vTriangle4();

int main()
{   
    char a;
    while(1)
    {
        cout << "enter selection: ";
        cin >> a;
        switch (a)
        {
        case '1':
            vTriangle1();
            break;
        case '2': 
            vTriangle2();
            break;
        case '3':
            vTriangle3();
            break;
        case '4':
            vTriangle4();
            break;
        }  
    }
}
void vTriangle1()
{
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(j <= i)
            {
                cout<< "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout<< endl;
    }
}
void vTriangle2()
{
    for(int i = 5; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            if(j <= i)
            {
                cout<< "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout<< endl;
    }
}
void vTriangle3()
{
    for(int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < 5; j++)
        {
            if(j >= i)
            {
                cout<< "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout<< endl;
    }
}
void vTriangle4()
{
    for(int i = 5; i > 0; i--)
    {
        for (int j = 5; j > 0; j--)
        {
            if(j <= i)
            {
                cout<< "*";
            }
            else 
            {
                cout << " ";
            }
        }
        cout<< endl;
    }
}