#include<iostream>
using namespace std;
#include "Student.cpp"
int main()
{
    Student s1;
    Student *s2 = new Student;
    s1.rollno = 01;
    s1.getAge(19);
    s2 -> rollno = 02;
    s2 -> getAge(21);
    s1.display();
    s2 -> display();
    //cout << s2 -> rollno << " " << s2 -> getAge << endl;
}