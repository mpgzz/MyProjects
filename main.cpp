//
//  main.cpp
//  EventTime
//
//  Created by Μιτχελλ on 18/11/22.
//

#include <iostream>
using namespace std;
#include "Event.h"

int main() {
    Event oneEvent;
    string name;
    int hour, minutes, duration;
    Time startHour;

    cout << "Type the name of the event ";
    cin >> name;
    cout << "start hour and minutes of the event ";
    cin >> hour >> minutes;
    cout << "duration of the event ";
    cin >> duration;

    // We use startHour as a temporary variable to be able to use the setStart method
    startHour.setHour(hour);
    startHour.setMinut(minutes);

    oneEvent.setName(name);
    oneEvent.setDuration(duration);
    oneEvent.setStart(startHour);

    // print the values of the event
    cout << "Event: " << oneEvent.getName() << endl;
    cout << "duration: " << oneEvent.getDuration() << endl;
    cout << "Start hour: ";
    cout << oneEvent.getStart().getHour() << ":" << oneEvent.getStart().getMinut() << endl;

    // This is another way to do the same that the last line does
    Time auxVariable = oneEvent.getStart();
    cout << auxVariable.getHour() << ":" << auxVariable.getMinut() << endl;

    return 0;
}
