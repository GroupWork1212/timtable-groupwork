#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string day, time;

    cout<<"ENTER DAY OF LECTURES HERE: "; cin>>day;
    cout<<"ENTER THE TIME OF LECTURES HERE: "; cin>>time;

     cout<<"\n ============================\n";

    if (day=="monday" && time =="12pm"){
        cout<<"COM 316 PRACTICAL AT NDDC LAB ";
    }
    else if(day=="monday" && time =="2pm"){
        cout<<"COM 312 DATABASE DESIGN I";
    }
    else if (day=="monday" && time =="4pm"){
       cout<<"COM 311 OPERATING SYSTEM I";
    }
    else if (day=="tuesday" && time =="12pm"){
       cout<<"COM 313 PRACTICAL AT HARDWARE LAB";
    }
     else if(day=="tuesday" && time =="2pm"){
        cout<<"COM 313 C++";
    }
    else if (day=="tuesday" && time =="4pm"){
       cout<<"COM 315 PYTHON PROGRAMMING";
    }
     else if(day=="wednesday" && time =="12pm"){
        cout<<"COM 312 PRACTICAL";
    }
    else if (day=="wednesday" && time =="2pm"){
       cout<<"COM 314 LECTURES";
    }
    else if (day=="wednesday" && time =="4pm"){
       cout<<"STA 314 LECTURES (OPERATIONAL RESEARCH I)";
    }
    else if(day=="thursday" && time =="12pm"){
        cout<<"COM 315 PRACTICAL AT HARDWARE LAB";
    }
    else if (day=="thursday" && time =="2pm"){
       cout<<"GNS 301 LECTURES USE OF ENGLISH ";
    }
    else if (day=="thursday" && time =="4pm"){
       cout<<"STA 314 practical (COMPUTER ARCHITECTURE)";
    }

    else if(day=="friday" && time =="11am"){
        cout<<"COM 311 PRACTICAL AT NDDC LAB";
    }
    else if (day=="friday" && time =="2pm"){
       cout<<"COM 316 LECTURES CISCO CERTIFICATION";
    }
    else if (day=="friday" && time =="4pm"){
       cout<<"STA 311 LECTURES (STAT THEORY)";
    }

    else{
        cout<<"NO LECTURE TIME ALLOCATED TO US BY THIS DAY AND TIME";
    }

    cout<<"\n ============================\n";

    return 0;
}
