#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int N, min_hours = 99, min_mins = 99, min_secs = 99;

    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) 
    {
        string t;
        cin >> t; cin.ignore();
        
        int hours, mins, secs; 
        hours = stoi(t.substr(0,2)); 
        mins = stoi(t.substr(3,2)); 
        secs = stoi(t.substr(6,2)); 

         if (hours < min_hours || (hours == min_hours && mins < min_mins) || (hours == min_hours && mins == min_mins && secs < min_secs))
            {
            min_hours = hours;
            min_mins = mins;
            min_secs = secs;
            }
    }

    cout << setw(2) << setfill('0') << min_hours << ":"
         << setw(2) << setfill('0') << min_mins << ":"
         << setw(2) << setfill('0') << min_secs << endl;    
}