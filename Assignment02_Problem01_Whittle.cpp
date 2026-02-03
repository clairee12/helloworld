#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int choice;
    do{
        //Choose one of the choices below
        //1 will decode the message you give using your provided numbers
        //2 will tell you the instructions
        //0 will exit the loop and stop decoding
        cout << "Secret Message Decoder" << endl;
        cout << "1: Decode message" << endl;
        cout << "2: Help" << endl;
        cout << "0: Exit" << endl;
        cout << "Enter your choice: " << endl;
        
        cin >> choice;

        switch(choice){
            //This choice will decode the users numbers into a secret message
            case 1: {
                int length;
                string decodedMessage = "";

                //Choose length of secret message
                cout << "How many numbers are in your secret sequence? ";
                cin >> length;

                //makes sure the length can't be less than 0
                //asks for a new number if it is 
                while (length <= 0) {
                    cout << "The length can not be less than 0. Enter a new number: ";
                    cin >> length;
                }

                //Ask user for the numbers in their code
                //Will ask for as many numbers that are in the length inputted above
                for (int i = 0; i < length; i++) {
                    int num;
                    cout << "Enter number " << (i + 1) << " :";
                    cin >> num;

                    if(num >= 1 && num <= 26) {
                        //convert number to character using static_cast
                        char letter = static_cast<char>((num - 1) + 'A');
                        decodedMessage += letter;
                    }
                    else{
                        //if number is above 26, will print ? instead of a letter
                        decodedMessage += "?";
                    }
                }

                //prints decoded message found through case 1
                cout << "Decoded message: " << decodedMessage << endl;
                break;
            }

            //case 2 will explain what the numbers match up to (letters of the alphabet)
            case 2: 
                cout << "Numbers between 1 and 26 will match up to letters A through Z" << endl;
                cout << "Numbers above 27 will be written as a question mark" << endl;
                break;
            
            //case 0 will exit the loop
            case 0: 
                cout << "No longer decoding the secret code." << endl;
                break;
            
            //Tells user that a selection like 5 would be invalid (anything besides 1, 2, 0)
            default:
                cout << "This option is invalid" << endl;
                cout << "Try again" << endl;
        }
    }

    //if choice entered by user isn't 0, will ask the question again (restart the loop)
    //(do-while loop)
    while (choice != 0);
    return 0;
}
