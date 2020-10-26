/**
 * CaesarCipher - A shift-substitution cipher
 * author@HamzaMateen
**/

#include <iostream>
#include <string>

using namespace std;   
// ENCRYPTION MEHTOD
string encrypt(string text, int shiftCount) 
{
    // getting the key ready 
    string alphabets = "abcdefghijklmnopqrstuvwxyz";
    
    string end = alphabets.substr(26 - shiftCount, 26);
    
    string keyText = end + alphabets.substr(0,26-shiftCount);
    
    // encrypting  
    string encText = "";
    
    for (unsigned int i = 0; i < text.length(); i++) 
    {
        if (int(text[i]) == 32) continue;
        else 
encText += keyText[alphabets.find(text[i])];
     }
    
    // return the encrypted text 
    return encText;
}

// DECRYPTION METHOD
string decrypt(string cipher, int key)
{
    string decText = "";
    
    for (unsigned int i = 0; i < cipher.length(); i++)
    {
        int asciiValue = int(cipher[i]);
        if (asciiValue + key > 122)
            decText += char((key + asciiValue)-26);
        else decText += char(asciiValue + key);      
    }   
    return decText;
}
// driver program
int main()
{
    int key;
    std::string text;
    
    std::cout << "[input]Enter the text to be encrypted" << std::endl;
    
    std::cin >> text;
    
    std::cout << "[input] Enter the key or shift\n\n" << std::endl;
    
    std::cin >> key;
    while (key < 1 || key > 27) {
        std::cout << "Please entery the key b/w 0-26";
        std::cin >> key;
    }
    std::cout << "[INPUT] " << text << std::endl;
    std::cout << "[ENCRYPTED] " << encrypt(text, key) << std::endl;
    
    
    return 0;
}
