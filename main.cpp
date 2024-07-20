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

    /*Pseudo-code
    create a string to store the message
    prompt the user for the message
    save the message in the string

    create the string for encrypted message
    Go through the message string using range-base for loop 
        use each character as an input for alphabet.find method to get the index in the alphabet
        use key.at(alphabet_index) and push back to the encrypted message string
    display the encrypted message

    Go through the encrypted message string using range-base for loop 
        use each character as an input for key.find method to get the index in the key
        use alphabet.at(alphabet_index) and push back to the decrypted message string
    display the decrypted message

    display comparison of initial and decrypted message
    */
    
    std::cout << "Default Template." << std::endl;
    return 0;
}