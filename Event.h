//
//  Event.h
//  EventTime
//
//  Created by Μιτχελλ on 18/11/22.
//
#ifndef Event_h
#define Event_h

#include "Time.h"
class Event {
public:
    Event();
    Time getStart() { return start;}
    int getDuration() { return duration; }
    string getName() { return name; }
    void setStart( Time st) { start = st; }
    void setDuration( int dur) { duration = dur; }
    void setName( string na) { name = na; }
private:
    Time start;
    int duration;
    string name;
};

// a default event will be at 8:00 hrs and its duration is 30 minutes
Event::Event() {
    Time tmpTime(8, 0);
    start = tmpTime;
    duration = 30;
    name = "event";
}

#endif /* Event_h */
