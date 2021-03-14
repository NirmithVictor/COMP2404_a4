#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    Date(int=0, int=0, int=2000);
    ~Date();
    void setDate(int, int, int);
    bool lessThan(Date&);
    bool equals(Date&);
    void print();
    void add(int duration);

  private:
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr() const;
};

#endif
