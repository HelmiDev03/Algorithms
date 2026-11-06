#include <bits/stdc++.h>
using namespace std;


string addMinutesToTime(const string& time, int added_min) {
    
    int hr, min, sec;
    char colon; 

   
    stringstream ss(time);
    ss >> hr >> colon >> min >> colon >> sec;

    
    min += added_min;

   
    if (min >= 60) {
        hr += min / 60; 
        min %= 60; 
    }

  
    hr %= 24; 

    
    stringstream newTime;
    newTime << setw(2) << setfill('0') << hr << ":" 
            << setw(2) << setfill('0') << min << ":" 
            << setw(2) << setfill('0') << sec;

    return newTime.str();
}


string subtractMinutesFromTime(const string& time, int subtracted_min) {
    
    int hr, min, sec;
    char colon; 

    
    stringstream ss(time);
    ss >> hr >> colon >> min >> colon >> sec;

   
    min -= subtracted_min;

    
    while (min < 0) {
        hr--; 
        min += 60; 
    }

   
    if (hr < 0) {
        hr += 24; 
    }


    stringstream newTime;
    newTime << setw(2) << setfill('0') << hr << ":" 
            << setw(2) << setfill('0') << min << ":" 
            << setw(2) << setfill('0') << sec;

    return newTime.str();
}
int timeToSeconds(const string& time) {
    int hr, min, sec;
    char colon; 

    
    stringstream ss(time);
    ss >> hr >> colon >> min >> colon >> sec;

    return hr * 3600 + min * 60 + sec; 
}
bool isEarlier(const string& time1, const string& time2) {
    int seconds1 = timeToSeconds(time1);
    int seconds2 = timeToSeconds(time2);

    return seconds1 <= seconds2; 
}

void Solve() {
  
        
        int n,k;
        cin >>n>>k ;
        int p=1 , nb=0;
        string currenttime = "20:00:00";
        string limite = subtractMinutesFromTime("00:00:00" ,k) ;
        while (isEarlier(currenttime , subtractMinutesFromTime(limite ,5*p))  && p<=n) {
            currenttime = addMinutesToTime(currenttime , 5*p);
            p++;
            nb++;
        }


        cout <<nb<<endl;

    
   
}


int main () {
    
    
        Solve();
}
