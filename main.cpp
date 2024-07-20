// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>

int main() {

    std::string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    std::string original_message {};
    std::cout << "Provide the message to encrypt: ";
    std::getline(std::cin,original_message);

    std::string encrypted_message {};
    for (auto c: original_message){
        size_t alphabet_index = alphabet.find(c);
        encrypted_message.push_back( (alphabet_index == std::string::npos)?c:key.at(alphabet_index) ); 
        //if character is not found use the orignal character else use key.at(alphabet_index) and push back to the encrypted message string
    }
    std::cout << "The encrypted message is: " << encrypted_message << std::endl;

    std::string decrypted_message {};
    for (auto c: encrypted_message){
        size_t key_index = key.find(c);
        decrypted_message.push_back( (key_index == std::string::npos)?c:alphabet.at(key_index) ); 
        //if character is not found use the orignal character else use alphabet.at(key_index) and push back to the decrypted message string
    }
    std::cout << "The decrypted message is: " << decrypted_message << std::endl;
    
    /*Pseudo-code
    display comparison of initial and decrypted message
    */
    
    std::cout << std::endl;
    return 0;
}