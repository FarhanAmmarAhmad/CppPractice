// Take the following IPv4 address: 128.32.10.1. This address has 4 octets where each octet is a single byte (or 8 bits).

//     1st octet 128 has the binary representation: 10000000
//     2nd octet 32 has the binary representation: 00100000
//     3rd octet 10 has the binary representation: 00001010
//     4th octet 1 has the binary representation: 00000001

// So 128.32.10.1 == 10000000.00100000.00001010.00000001

// Because the above IP address has 32 bits, we can represent it as the 32 bit number: 2149583361.

// Write a function ip_to_int32(ip) ( JS: ipToInt32(ip) ) that takes an IPv4 address and returns a 32 bit number.
#include <iostream>
#include <cstdint>
#include <string>
#include <bitset>
#include <vector>
#include <cmath>

#define MESSAGE_LOG

#ifdef MESSAGE_LOG
    #define LOG(msg) std::cout<<msg<<std::endl;
#else
    #define LOG(msg)
#endif


uint32_t ip_to_int32(const std::string& ip){
    std::string temp = "";
    std::vector<std::string> bitsString;
    std::string concatBits = "";
    for(int i = 0; i <= ip.size(); i++){
        if (ip[i] == '.' || ip[i] == '\0'){
            uint8_t num = std::stoi(temp);
            std::bitset<8> bits(num);
            bitsString.push_back(bits.to_string());
            temp = "";
            continue;
        }
        else{
            temp += ip[i];
        }
    }
    for (int i = 0; i < bitsString.size(); i++){
        concatBits += bitsString[i];
    }
    std::bitset<32> bits(concatBits);
    uint32_t result = bits.to_ulong();
    return result;    
}

//This is more efficient solution
// uint32_t ip_to_int32(const std::string& ip) {
//     int a,b,c,d;
//     sscanf(ip.c_str(),"%i.%i.%i.%i",&a,&b,&c,&d);
//     return a*pow(2,24) + b*pow(2,16) + c*pow(2,8) + d;
// } 


int main(){
    std::string ip = "128.32.10.1";
    uint32_t result  = ip_to_int32(ip);
    LOG(result);
    return 0;
}