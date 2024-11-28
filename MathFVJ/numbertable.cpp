#include "numbertable.h"


namespace numbertable {

    int baseToDecimal(const std::string& number, int base) {
        if (base < 2 || base > 16) {
            throw std::invalid_argument("Основание системы счисления должно быть от 2 до 16.");
        }

        int decimalValue = 0;
        int positionValue = 1; // Starting from a position with weight 1 (base^0)

        // Go down the line from the end
        for (int i = number.length() - 1; i >= 0; --i) {
            char digit = number[i];

            // If the symbol is a number
            if (digit >= '0' && digit <= '9') {
                int digitValue = digit - '0';
                if (digitValue >= base) {
                    throw std::invalid_argument("Некорректный символ в числе для данной системы счисления.");
                }
                decimalValue += digitValue * positionValue;
            }
            // If the character is a letter (for number systems greater than 10)
            else if (digit >= 'A' && digit <= 'F') {
                int digitValue = digit - 'A' + 10;
                if (digitValue >= base) {
                    throw std::invalid_argument("Некорректный символ в числе для данной системы счисления.");
                }
                decimalValue += digitValue * positionValue;
            }
            else {
                throw std::invalid_argument("Некорректный символ в числе.");
            }

            positionValue *= base; // Multiply by the base for the next position
        }

        return decimalValue;
    }
}
