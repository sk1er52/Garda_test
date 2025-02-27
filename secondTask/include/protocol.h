#ifndef PROTOCOL_H
#define PROTOCOL_H

#include <cstdint>
#include <vector>

std::vector<uint8_t> createRequest(uint8_t op, double a, double b);
double processRequest(const std::vector<uint8_t>& requestBuffer);

#endif // PROTOCOL_H