#include <iostream>

using namespace std;

class Student{
   public:
      int roll;
      int cls;
      double gpa;

   Student(int roll, int cls, double gpa){
      this->roll = roll;
      this->cls = cls;
      this->gpa = gpa;
   }
};

int main()
{
   Student asru(1225, 14, 2.83);
   cout << "Roll: " << asru.roll << ", Class: " << asru.cls << ", GPA: " << asru.gpa << endl;

   return 0;
}