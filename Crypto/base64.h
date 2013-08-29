#include <string>

std::string base64_encode(const unsigned char* , unsigned int len);
void base64_decode(const std::string& s, unsigned char* outputBuf);
void base64_decode(const std::string& s, std::string& outputString);
std::string generate_base64_salt();