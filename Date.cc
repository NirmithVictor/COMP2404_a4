#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Date.h"

Date::Date(int d, int m, int y)
{
  setDate(d, m, y);
}

Date::~Date()
{
  cout<<"in dtor "<<day<<endl;
}

//bool lessThan if it is less than this date return true else return false
bool Date::lessThan(Date& a){
	if(year<a.year){
		return true;
	}
	else if(year==a.year){
		if(month<a.month){
			return true;
		}
		else if(month==a.month){
			if(day<a.day){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}

bool Date::equals(Date& d){
	if(!lessThan(d)){
		return true;
	}
	else{
		return false;
	}
}

//add function that increments the day if it is 
void Date::add(int d){
	day+=d;
	if(day>lastDayInMonth()){
		day=day-lastDayInMonth();
		month+=1;
		if(month>12){
			year+=1;
			month=month-12;
		}
		//cout<<"DAY IS GREATER THAN THE LIMIT"<<endl;
	}
	//cout<<year<<endl;
	//cout<<month<<endl;
	//cout<<day<<endl;
}

void Date::setDate(int d,int m,int y)
{
  year  = ( ( y > 0) ? y : 0 );
  month = ( ( m > 0 && m <= 12) ? m : 0 );
  day   = ( ( d > 0 && d <= lastDayInMonth() ) ? d : 0 );
}

void Date::print()
{
  cout<<setfill('0')<<setw(4)<<year<<"-"
      <<setfill('0')<<setw(2)<<month<<"-"
      <<setfill('0')<<setw(2)<<day<<endl;
}

int Date::lastDayInMonth()
{
  switch(month)
  {
    case 2:
      if (leapYear())
        return 29;
      else
        return 28;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    default:
      return 30;
  }
}

bool Date::leapYear()
{
  if ( year%400 == 0 ||
       (year%4 == 0 && year%100 != 0) )
    return true;
  else
    return false;
}

string Date::getMonthStr() const
{
  string monthStrings[] = { 
    "January", "Februrary", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December" };

  if ( month >= 1 && month <= 12 )
    return monthStrings[month-1];
  else
    return "Unknown";
}

