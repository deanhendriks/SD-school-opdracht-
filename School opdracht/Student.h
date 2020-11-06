#pragma once
#pragma once

#include <string>

class Student
{
public:
    Student();
    ~Student();

    void SetName(std::string aName);
    void SetLastName(std::string aLastName);
    void SetBirthDate(std::string aBirthDate);
    void SetAdress(std::string aAdress);
    void SetPostalCode(std::string aPostalCode);
    void SetPhoneNumber(std::string aPhoneNumber);
    void SetYear(std::string aYear);
    void SetRegistationDate(std::string aRegistationDate);
    void SetFirstContactName(std::string aFirstContactName);
    void SetFirstContactLastName(std::string aFirstContactLastName);
    void SetFirstContactNumber(std::string aFirstContactNumber);

    std::string GetName();
    std::string LastName();
    std::string BirthDate();
    std::string Adress();
    std::string PostalCode();
    std::string PhoneNumber();
    std::string Year();
    std::string RegistrationDate();
    std::string FirstContactName();
    std::string FirstContactLastName();
    std::string FirstContactNumber();
    std::string DateOfRegistration();
   
    int GetGrade();

    std::string name;
    std::string lastName;
    std::string birthDate;
    std::string adress;
    std::string postalCode;
    std::string phoneNumber;
    std::string year;
    std::string registrationDate;

    std::string firstContactName;
    std::string firstContactLastName;

    std::string firstContactnumber;

    int grade; //leerjaar
    std::string dateOfRegistration;

private:

    

protected:
};
