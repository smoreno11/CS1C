#ifndef DATE_H_
#define DATE_H_

#include <string>
#include "header.h"

class Date{

  public:

    Date()
    {
      month = 0;
      day = 0;
      year = 0;
    }

    Date(int month, int day, int year) : month(month), day(day), year(year)
    {
      
    }

    ~Date()
    {

    }

    void setMonth(int month)
    {
      this->month = month;
    }
    int getMonth()
    {
      return month;
    }

    void setDay(int day)
    {
      this->day = day;
    }
    int getDay()
    {
      return day;
    }

    void setYear(int year)
    {
      this->year = year;
    }
    int getYear()
    {
      return year;
    }

    void printHireDate() const
    {
      std::cout << month << "/" << day << "/" << year;
    }

  private:
    int month;
    int day;
    int year;

};

#endif /* DATE_H_ */