#include <iostream>
#include <string>


std::string reverse_words(std::string str)
{
    std::string out;
    std::string cword;
    for (char c : str) {
        if (c == ' ') {
        out += cword;
        out += c;
        cword = "";
        continue;
        }
        cword = c + cword;
    }
    out += cword;
    return out;
}

int main(int argc, char *argv[]){
    std::string str = "The quick brown fox jumps over the lazy dog.";
    std::cout << reverse_words(str) << std::endl;
    return 0;
}