#include <stdlib.h>
#include <string.h>
#include "employee.h"

int main(void)
{
  PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
  PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
  PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
  PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

  extern Employee EmployeeTable[];
  extern const int EmployeeTableEntries;

  PtrToEmployee matchPtr;
}
