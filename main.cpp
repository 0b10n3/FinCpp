#include <iostream>

int main()
{
    // Integer data types
    // int
    int numberOfStudents = 10;
    double numberOfTeachers = 3;

    std::cout << "Number of students: " << numberOfStudents << std::endl;
    std::cout << "Number of teachers: " << numberOfTeachers << std::endl;

    double ratio = numberOfTeachers / numberOfStudents;

    std::cout << "Teachers to students ratio: " << ratio << std::endl;

    // special double
    double infinity = -1.0/0;

    // NaN - Not a Number
    double notANumber = 0.0/0.0;

    std::cout << "Double at infinity: " << infinity << std::endl;
    std::cout << "Double not a number: " << notANumber << std::endl;

    // char
    char letter = '$';

    std::cout << "Letter: " << letter << std::endl;

    return 0;

}
