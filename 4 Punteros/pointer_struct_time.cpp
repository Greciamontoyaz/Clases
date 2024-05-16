#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);  // Get current time
    tm* local_time = localtime(&now);  // Convert to local time structure
    ///localtime() Parameters
    //time_ptr: pointer to a time_t object to be converted.
    int hour = (*local_time).tm_hour;
    int minutes = (*local_time).tm_min;
    int seconds = (*local_time).tm_sec;

    cout << "Current local time: " << hour << ":" << minutes << ":" <<seconds;

    // Provide a greeting based on the time of day
    if (hour < 10) {
        cout << " (Good morning!)" << endl;
    } else if (hour < 20) {
        cout << " (Good day!)" << endl;
    } else {
        cout << " (Good evening!)" << endl;
    }

    return 0;
}