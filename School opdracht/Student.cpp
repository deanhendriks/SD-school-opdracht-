#include "Student.h"
#include <string>

Student::Student()
{

}

Student::~Student()
{

}

void Student::SetName(std::string aName)
{
    name = aName;
}

void Student::SetLastName(std::string aLastName)
{
    lastName = aLastName;
}

void Student::SetBirthDate(std::string aBirthDate)
{
    birthDate = aBirthDate;
}

void Student::SetAdress(std::string aAdress)
{
    adress = aAdress;
}

void Student::SetPostalCode(std::string aPostalCode)
{
    postalCode = aPostalCode;
}

void Student::SetPhoneNumber(std::string aPhoneNumber)
{
    phoneNumber = aPhoneNumber;
}

void Student::SetYear(std::string aYear)
{
    year = aYear;
}

void Student::SetRegistationDate(std::string aRegistationDate)
{
    registationDate = aRegistationDate;
}

void Student::SetFirstContactName(std::string aFirstContactName)
{
}

void Student::SetFirstContactLastName(std::string aFirstContactLastName)
{
}

void Student::SetFirstContactNumber(std::string aFirstContactNumber)
{
}

std::string Student::GetName()
{
    return name;
}

std::string Student::LastName()
{
    return lastName;
}

std::string Student::BirthDate()
{
    return birthDate;
}

std::string Student::Adress()
{
    return adress;
}

std::string Student::PostalCode()
{
    return postalCode;
}

std::string Student::PhoneNumber()
{
    return phoneNumber;
}

std::string Student::Year()
{
    return year;
}

std::string Student::RegistrationDate()
{
    return registrationDate;
}

std::string Student::FirstContactName()
{
    return firstContactName;
}

std::string Student::FirstContactLastName()
{
    return firstContactLastName;
}

std::string Student::FirstContactNumber()
{
    return firstContactnumber;
}

std::string Student::DateOfRegistration()
{
    return dateOfRegistration;
}
