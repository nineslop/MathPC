#include "algebra.h"

#include <stdexcept>

namespace algebra {

    double solve_linear_equation(double a, double b) {
        if (a == 0) {
            if (b == 0) {
                throw std::invalid_argument("��������� ����� ���������� ����� �������.");
            }
            else {
                throw std::invalid_argument("��������� �� ����� �������.");
            }
        }
        return -b / a;  // ������� ��������� ax + b = 0
    }

}
