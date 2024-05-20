#include <string>

class Date{

  public:

    Date();
    Date(int month, int day, int year);
    ~Date();

    void setMonth(int month);
    int getMonth();

    void set(int day);
    int getMonth();

    void setYear(int year);
    int getYear();

  private:
    int month;
    int day;
    int year;

};