// This is a chatgpt example i am using to practice user input and classes
#include <iostream>
#include <string>
using std::cout, std::string, std::cin;

class Student {
    private: 
    string name;
    int age;
    int grade;

    public:
      Student(string n, int a, int g) {
        name = n;
        age = a;
        grade = g;
}

    string getName() {
         return name;
}

    int getAge() {
       return age;
}

    int getGrade() {
        return grade;
}

  void printDetails() {
      cout << "Name: " << name << std::endl;
      cout << "Age: " << age << std::endl;
      cout << "Grade: " << grade << std::endl;
    }
};

    int main()
  {
     string name;
     int age, grade;

     cout << "Enter student name: ";
     cin >> name;
     cout << "Enter student age: ";
     cin >> age;
     cout << "Enter student grade: ";
     cin >> grade;

     Student student(name, age, grade);
     student.printDetails();

     return 0;
}
