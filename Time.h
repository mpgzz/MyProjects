//
//  EventTime.h
//  EventTime
//
//  Created by Μιτχελλ on 18/11/22.
//

#ifndef Time_h
#define Time_h

class Time {
public:
    // constructors
    Time();
    Time(int, int);
    // getters
    int getHour() { return hour; }
    int getMinut() { return minut; }
    // setters
    void setHour(int h) { hour = h; }
    void setMinut(int m) { minut = m; }
private:
    int hour, minut;
};


Time::Time() {
    hour = 1;
    minut = 0;
}

Time::Time(int h, int m) {
    setHour(h);
    setMinut(m);
}

#endif /* Time_h */
