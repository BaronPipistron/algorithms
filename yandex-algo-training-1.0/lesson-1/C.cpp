#include <iostream>
#include <string>

void formatPhoneNumber(std::string& phoneNumber) {
    std::string formatedPhoneNumber { };
    size_t index = 0;
    
    if (phoneNumber[0] == '+') {
        formatedPhoneNumber.push_back('8');
        index = 2;
    }

    for (; index != phoneNumber.length(); ++index) {
        if (phoneNumber[index] == '-' || phoneNumber[index] == '(' || phoneNumber[index] == ')') {
            continue;
        }
        
        formatedPhoneNumber.push_back(phoneNumber[index]);
    }

    if (formatedPhoneNumber.length() == 7) {
        formatedPhoneNumber = "8495" + formatedPhoneNumber;
    }

    phoneNumber = std::move(formatedPhoneNumber);
}

int main() {
    std::string addedPhoneNumber;
    std::string phoneNumber1;
    std::string phoneNumber2;
    std::string phoneNumber3;

    std::cin >> addedPhoneNumber;
    std::cin >> phoneNumber1 >> phoneNumber2 >> phoneNumber3;

    formatPhoneNumber(addedPhoneNumber);
    formatPhoneNumber(phoneNumber1);
    formatPhoneNumber(phoneNumber2);
    formatPhoneNumber(phoneNumber3);

    if (addedPhoneNumber ==  phoneNumber1) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    if (addedPhoneNumber ==  phoneNumber2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    if (addedPhoneNumber ==  phoneNumber3) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}