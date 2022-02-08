// Main function of the C++ program.
#include <string>
#include <iostream>
using namespace std;
//Declaring funtion for encrypt
void encrypt(string, char[], char[], int); 
//Declaring function for decrypt
void decrypt(string, char[], char[], int);

int main()
{ // beginning of main

        //Banner Of program
        cout << "-----------------------------" << endl;
        cout << "<---Encryption Algorithm--->" << endl;
        cout << "-----------------------------" << endl;
        cout << "<<<<<<----Developer---->>>>>>" << endl;
        cout << "-----------------------------" << endl;
        cout << "*******Ahmed S. Rashwan******" << endl;
        cout << "-----------------------------" << endl;
        // End Of Banner
        
        
        // constant array of size
        const int arraySize = 53;
        // declaring variable array with stored alphabet 
         char standardAlphabet[arraySize] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
        // array with encrypted correspondants to standard alphabet array
         char encryptedAlphabet[arraySize] = {'s','x','g','w','l','z','p','d','o','k','f','i','v','u','h','j','y','t','q','b','n','m','a','c','e','r','S','X','G','W','L','Z','P','D','O','K','F','I','V','U','H','J','Y','T','Q','B','N','M','A','C','E','R','%'};
        // end of array
        
        
        // integer variable for user to decide if they want to encrypt or decrypt
        int encryptOrDecrypt;
        //declare variable to store user input
        string input;
        // ask user what they would like to encrypt
        cout << "[#]Enter the text you would like to Encrypt or Decrypt" << endl;
        // using getline to get all of the users input including spaces
        getline (cin, input);
        // displaying list of options to user to choose either to encrypt or decrypt
        cout << "[#]1. Encrypt Text" << endl;
        cout << "[#]2. Decrypt Text" << endl;
        // asking user what they would like to choose
        cout << "[?]What would you like to do (enter 1 or 2): " << endl;
        // if statement to find out if user wants to encrypt or decrypt data
        cin >> encryptOrDecrypt;
        // taking in users input and storing it in a variable encryptOrDecrypt
        if(encryptOrDecrypt == 1)
            encrypt(input, standardAlphabet, encryptedAlphabet, arraySize);
        else if(encryptOrDecrypt == 2)
            decrypt(input, standardAlphabet, encryptedAlphabet, arraySize);
        else 
            cout << "[!]Invalid Input, Please Try Again" << endl;
} // end of main

//function encrypt
        void encrypt(string encode, char standardAlphabet[], char encryptedAlphabet[], int arraySize){
        // encryption
        //declare variable to store length of user input
        int lengthofInput;
        // length will be used in for loop
        // get lenght of user input & aassign to declared variable
        lengthofInput = encode.length();
        // for loop will iterate through the letters of user input
        cout << "[+]Your encrypted output is: ";
        for(int i = 0; i < lengthofInput; i++){
           for(int j = 0 ; j < arraySize; j++){
               if(encode[i] == standardAlphabet[j]){
                   cout <<encryptedAlphabet[j];
               }
           }
        }
        
}
// end of function encrypt


// function decrypt
        void decrypt(string decode, char standardAlphabet[], char encryptedAlphabet[], int arraySize){ 
        // decryption
        //declare variable to store length of user input
        int lengthofInput;
        // length will be used in for loop
        // get lenght of user input & aassign to declared variable
        lengthofInput = decode.length();
        // for loop will iterate through the letters of user input
        cout << "[+]Your decrypted output is: "; // showing user what there encrypted output is 
        // for loop will iterate through the characters of user input
        // will iterate the length of 
        for(int i = 0; i < lengthofInput; i++){
        // for loop will iterate through the index of array for characters in encryptedAlphabet
           for(int j = 0 ; j < arraySize; j++){ 
        //if statement will check if the character is equal to any of the characters in array
        // if statement will then check if the  character from user is equal 
               if(decode[i] == encryptedAlphabet[j]){ 
                   cout << standardAlphabet[j]; // Displaying Decrypted output 
           }
        }
    }
} 
// function decrypt
