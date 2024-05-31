#include "header.h"
#include "date.h"
#include "Employee.h"
#include "Programmer.h"
#include "SoftwareArchitect.h"

int main()
{		
       
  Date tomHireDate(8,31,2018); // Tom Brady
  Employee tom("Tom Apple", 12345, 9495551234, 42,'M', "Salad", 8000000, tomHireDate);

  Date samHireDate(12,24,2017); //Sam Software
  Employee sam("Sam Software", 54321, 8191234567, 21, 'M', "Programmer", 223000, samHireDate);
  Programmer samProgrammer(sam, 5432122, "Joe Boss", 4 , true, false);
  
  Date alexHireDate(12,24,2018);
  Employee alex("Alex Arch", 88888, 8191234444, 31, 'M', "Architect", 323000, alexHireDate);
  SoftwareArchitect alexSoftware(alex,5434222, "Big Boss", 5, 4);

  tom.printEmployee();
  samProgrammer.printProgrammer();
  alexSoftware.printArchitect();
  std::cout << "After changing Alex Job to Bandit" << std::endl;
  //alex.setAge(400);
  alexSoftware.setAge(40);
  std::cout << std::endl << alexSoftware.getAge() << "___________________" << std::endl;
  alexSoftware.printArchitect();
  std::cout << "After changing Sam's Job to Bandit" << std::endl;
  samProgrammer.setJobTitle("Bandit");
  sam.setAge(5);
  sam.printEmployee();
  samProgrammer.setDepartmentNumber(4);
  samProgrammer.printProgrammer();

  return 0;
}
