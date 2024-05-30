#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "header.h"
#include "Employee.h"

class Programmer: public Employee{

  public:
    Programmer()
    {
      departmentNumber = 0;
      supervisorsName = "";
      percentOfSalaryIncrese = 0;
      cPlusPlusIndentifier = false;
      javaIdentifier = false;
    }

    Programmer(Employee employed, int departmentNumber, std::string supervisorsName, int percentOfSalaryIncrease,
               bool cPlusPlusIdentified, bool javaIdentifier): employed(employed), departmentNumber(departmentNumber),
               supervisorsName(supervisorsName),percentOfSalaryIncrese(percentOfSalaryIncrease),
               cPlusPlusIndentifier(cPlusPlusIdentified), javaIdentifier(javaIdentifier)
    {

    }

    int getDepartmentNumber()
    {
      return departmentNumber;
    }

    void setDepartmentNumber(int departmentNumber)
    {
      this->departmentNumber = departmentNumber;
    }

    std::string getSupervisorsName()
    {
      return supervisorsName;
    }

    void setSupervisorsName(std::string supervisorName)
    {
      this->supervisorsName = supervisorName;
    }

    int getPecentOfSalaryIncrease()
    {
      return percentOfSalaryIncrese;
    }

    void setPercentOfSalaryIncrease(int percentOfSalaryIncrease)
    {
      this->percentOfSalaryIncrese = percentOfSalaryIncrease;
    }

    bool getCPlusPlusIdentifier()
    {
      return cPlusPlusIndentifier;
    }

    void setCPlusPlusIdentifier(bool cPlusPlusIdentifier)
    {
      this->cPlusPlusIndentifier = cPlusPlusIdentifier;
    }

    bool getJavaIdentifier()
    {
      return javaIdentifier;
    }

    void setJavaIdentifier(bool javaIdentifier)
    {
      this->javaIdentifier = javaIdentifier;
    }

    void printHeader()
    {
      std::cout << std::left;
      std::cout << std::setw(SET_NAME) << "Name" << std::setw(SET_ID) << "Department"
                << std::setw(SET_SUPER) << "Supervisor's Name" << std::setw(SET_GEN) << "Raise %"
                << std::setw(SET_LANGUAGE) << "C++ Knowledge" << std::setw(SET_LANGUAGE) << "Java Language";
      std::cout << std::right;
      std::cout << std::endl;
    }

    void printProgrammer()
    {
      employed.printEmployee();
      printHeader();

      std::cout << std::left;
      std::cout << std::setw(SET_NAME) << employed.getEmployee() << std::setw(SET_ID) << departmentNumber
                << std::setw(SET_SUPER) << supervisorsName << std::setw(SET_GEN) << percentOfSalaryIncrese
                << std::setw(SET_LANGUAGE);
      if(cPlusPlusIndentifier == 1)
      {
        std::cout << "true ";
      }
      else
      {
        std::cout << "false ";
      }
      std::cout << std::setw(SET_LANGUAGE);
      if(javaIdentifier == 1)
      {
        std::cout << "true ";
      }
      else
      {
        std::cout << "false ";
      }
    
      std::cout << std::right;
      std::cout << std::endl << std::endl; 
      
    }

    private:
      int departmentNumber;
      std::string supervisorsName;
      int percentOfSalaryIncrese;
      bool cPlusPlusIndentifier;
      bool javaIdentifier;
      Employee employed;
      

};

#endif