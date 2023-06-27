#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string dateOfBirth;
    std::string phoneNumber;
    std::string address;
    std::string groupNumber;

public:
    // Функція для введення даних студента
    void inputStudentData()
    {
        std::cout << "Enter student data:\n";
        std::cout << "Name: ";
        std::getline(std::cin, name);
        std::cout << "Date of Birth: ";
        std::getline(std::cin, dateOfBirth);
        std::cout << "Phone Number: ";
        std::getline(std::cin, phoneNumber);
        std::cout << "Address: ";
        std::getline(std::cin, address);
        std::cout << "Group Number: ";
        std::getline(std::cin, groupNumber);
    }

    // Функція для виведення даних студента
    void displayStudentData()
    {
        std::cout << "Student Data:\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Date of Birth: " << dateOfBirth << "\n";
        std::cout << "Phone Number: " << phoneNumber << "\n";
        std::cout << "Address: " << address << "\n";
        std::cout << "Group Number: " << groupNumber << "\n";
    }

    // Функції для редагування окремих змінних
    void editName(const std::string& newName) { name = newName; }
    void editDateOfBirth(const std::string& newDateOfBirth) { dateOfBirth = newDateOfBirth; }
    void editPhoneNumber(const std::string& newPhoneNumber) { phoneNumber = newPhoneNumber; }
    void editAddress(const std::string& newAddress) { address = newAddress; }
    void editGroupNumber(const std::string& newGroupNumber) { groupNumber = newGroupNumber; }
};

int main()
{
    Student student;

    // Введення даних студента
    student.inputStudentData();
    std::cout << "\n";

    // Виведення даних студента
    student.displayStudentData();
    std::cout << "\n";

    // Редагування окремих змінних
    student.editName("John Doe");
    student.editPhoneNumber("1234567890");

    // Виведення оновлених даних студента
    student.displayStudentData();

    return 0;
}