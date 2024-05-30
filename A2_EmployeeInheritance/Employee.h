#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "header.h"
#include "date.h"
class Employee{

  public:
    
    Employee()
    {
      employee = "";
      employeeId = 0;
      phoneNumber = 0;
      age = 0;
      gender = 'T';
      jobTitle = "";
      salary = 0.0;
    }

    Employee(std::string employee, int employeeId, long phoneNumber, int age, 
             char gender, std::string jobTitle, double salary, Date hireDates)
             : employee(employee), employeeId(employeeId), phoneNumber(phoneNumber),
               age(age), gender(gender), jobTitle(jobTitle), salary(salary), hireDate(hireDates)
    {
    }

     void print()
    {
      std::cout << employee << " "; 
      hireDate.printHireDate();
    }

    ~Employee()
    {

    }

    std::string getEmployee()
    {
      return employee;
    }

    void setEmployee(std::string employee)
    {
      this->employee = employee;
    }

    int getEmployeeId()
    {
      return employeeId;
    }

    void setEmployeeId(int employeeId)
    {
      this->employeeId = employeeId;
    }

    long getPhoneNumber()
    {
      return phoneNumber;
    }

    void setPhoneNumber(long phoneNumber)
    {
      this->phoneNumber = phoneNumber;
    }

    int getAge()
    {
      return age;
    }

    void setAge(int age)
    {
      this->age = age;
    }

    char getGender()
    {
      return gender;
    }

    void setGender(char gender)
    {
      this->gender = gender;
    }

    std::string getJobTitle()
    {
      return jobTitle;
    }

    void setJotTitle(std::string jobTitle)
    {
      this->jobTitle = jobTitle;
    }

    double getSalary()
    {
      return salary;
    }

    void setSalary(double salary)
    {
      this->salary = salary;
    }

    Date getHireDate()
    {
      return hireDate;
    }

    void setHireDate(Date hireDate)
    {
      this->hireDate = hireDate;
    }

    void printHeader() const
    {
      std::cout << std::left;
      std::cout << std::setprecision(7);

      std::cout << std::setw(SET_NAME) << "Name" << std::setw(SET_ID) << "Employee's Id"
                << std::setw(SET_PHONE) << "Phone" << std::setw(SET_AGE) << "Age"
                << std::setw(SET_GEN) << "Gender" << std::setw(SET_TITLE) << "Job Title"
                << std::setw(SET_SAL) << "Salary" << std::setw(SET_DATE) << "Hire Date";

      std::cout << std::right << std::endl;
      
    }

    void printEmployee() 
    {
      printHeader();
      std::cout << std::left;

      std::cout << std::setw(SET_NAME) << employee << std::setw(SET_ID) << employeeId
                << std::setw(SET_PHONE) << phoneNumber << std::setw(SET_AGE) << age
                << std::setw(SET_GEN) << gender << std::setw(SET_TITLE) << jobTitle << "$"
                << std::setw(SET_SAL)  << salary;
      hireDate.printHireDate();
      std::cout << std::right << std::endl;

      std::cout << std::endl << std::right;
    }


  private:
    std::string employee;
    int employeeId;
    long phoneNumber;
    int age;
    char gender;
    std::string jobTitle;
    double salary;
    Date hireDate;

  protected:
    const int SET_NAME  = 15; // - column width for the name
	  const int SET_ID    = 14; // - column width for the id
	  const int SET_PHONE = 14; // - column width for the phone
	  const int SET_AGE   = 5;  // - column width for the age
	  const int SET_GEN   = 9;  // - column width for the gender
	  const int SET_TITLE = 16; // - column width for the job title
	  const int SET_SAL   = 16; // - column width for the salary
	  const int SET_DATE  = 15;  // - column width for the date
    const int SET_SUPER = 18;
    const int SET_LANGUAGE = 14;
};

#endif