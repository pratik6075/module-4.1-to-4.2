#include<iostream>
using namespace std;
class Person:
{
	def __init__(self, name, age):
        self.name = name
        self.age = age
    def read(self):
        self.name = input("Enter name: ")
        self.age = int(input("Enter age: "))
    def write(self):
        print("Name:", self.name)
        print("Age:", self.age)
};
class Student(Person):
{
	 def __init__(self, name, age, percentage):
        super().__init__(name, age)
        self.percentage = percentage
    def read(self):
        super().read()
        self.percentage = float(input("Enter percentage: "))
    def write(self):
        super().write()
        print("Percentage:", self.percentage)
};
class Teacher(Person):
{
	def __init__(self, name, age, salary):
        super().__init__(name, age)
        self.salary = salary
    def read(self):
        super().read()
        self.salary = float(input("Enter salary: "))
    def write(self):
        super().write()
        print("Salary:", self.salary)
};
main()
{
    s = Student("John", 20, 85.5)
    t = Teacher("Jane", 30, 50000)
    s.write()
    t.write()
}
