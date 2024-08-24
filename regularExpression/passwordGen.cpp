// You need to write a password generator that meets the following criteria:

//     6 - 20 characters long
//     contains at least one lowercase letter
//     contains at least one uppercase letter
//     contains at least one number
//     contains only alphanumeric characters (no special characters)

// Return the random password as a string.

// Note: "randomness" is checked by counting the characters used in the generated passwords - all characters should have less than 50% occurance. Based on extensive tests, the normal rate is around 35%.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string password_gen() {
    int random  = 0;
    std::string password = "";
    std::srand(std::time(0));
    for ( int i = 0; i < std::rand()%20+6; i++){
        random = std::rand()%127+1;
        if (random >= 48 && random <= 57){
            password += random;
            continue;
        }
        else if (random >= 65 && random <= 90){
            password += random;
            continue;
        }
        else if (random >= 97 && random <= 122){
            password += random;
            continue;
        }
        else{
            i--;
        }
    }
    return password;
}

int main(){
    std::cout<<password_gen()<<std::endl;    
    return 0;
}