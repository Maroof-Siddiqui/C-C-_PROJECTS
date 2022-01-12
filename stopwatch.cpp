#include <iostream>
#include <windows.h>
using namespace std;

class Utility
{
    int hours,minutes,seconds;

    public:

    int stopWatch()
    {
        cout<<"Set the timer duration"<<endl;
        cout<<"Enter Hours, minutes, seconds with space (' ')"<<endl;
        cin>>hours>>minutes>>seconds;

        for(;hours>=0;hours--) 
        {
            for(;minutes>=0;minutes--)
            {
                for(;seconds>=0;seconds--)
                {
                    cout << "\033[2J\033[1;1H";
                    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
                    Sleep(1000);    
                }
            }
        }
        return 0;
    }

    int clock()
    {
    system("color f1");
    for(int i=0;i<24;i++)
    {
        for(int j=0;j<60;j++)
        {
            for(int k=0;k<60;k++)
            {
                cout << "\033[2J\033[1;1H";
                cout<<"\t\t\t\t\t--------------------------------\n\t\t\t\t\t~~~~~~~~~~~~~~CLOCK~~~~~~~~~~~~~"<<endl;
                cout<<"\t\t\t\t\t\t      "<<i<<":"<<j<<":"<<k<<endl;
                cout<<"\t\t\t\t\t--------------------------------"<<endl;
                Sleep(1000);
            }
        }
    }
    return 0;
    }
};

int main()
{
    Utility myutil;
    // myutil.stopWatch();
    myutil.clock();
}