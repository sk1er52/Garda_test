#include "protocol.h"
#include <cstring>
#include <iostream>

std::vector<uint8_t> createRequest(uint8_t op, double a, double b) {
    std::vector<uint8_t> buffer(17); // 1 байт для операции, 8 байт для каждого числа
    buffer[0] = op;
    std::memcpy(&buffer[1], &a, sizeof(double));
    std::memcpy(&buffer[9], &b, sizeof(double));
    return buffer;
}

double processRequest(const std::vector<uint8_t>& requestBuffer) {
    if (requestBuffer.size() != 17) {
        throw std::invalid_argument("Недопустимый размер буфера");
    }
    uint8_t op = requestBuffer[0];
    double a, b;
    std::memcpy(&a, &requestBuffer[1], sizeof(double));
    std::memcpy(&b, &requestBuffer[9], sizeof(double));
    double result;
    switch (op) {
        case 0: result = a + b; break; // Сложение
        case 1: result = a - b; break; // Вычитание
        case 2: result = a * b; break; // Умножение
        case 3: 
            if (b == 0) throw std::invalid_argument("Деление на ноль");
            result = a / b; 
            break; // Деление
        default: throw std::invalid_argument("Недопустимая операция");
    }
    return result;
}