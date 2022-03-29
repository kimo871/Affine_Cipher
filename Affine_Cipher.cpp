// FCAI – Programming 1 – 2022 - Assignment 2
// Program Name: Affine Cipher.cpp
// Program Description: ………
// Last Modification Date: 22/03/2022
// Author1 and ID and Group: Mohamed Kamal Mohamed 20210350 A
// Teaching Assistant: Dr.mohammad elramly
// Purpose:To Cipher and Discipher the massedges
#include <iostream>
# include <cstring>
using namespace std;
// defining user interface function
void welcome_user();
// variables we will use
string message="",decryptioned="";
int x,c,a,b,loop,encrypted,decrypted,instruction,ascii_value=65;
// defining  instruction and cipher and decipher
int take_instruction();
string cipher();
string decipher();
bool running = true;
char characters[25];
int main(){

// alphabet container
for(int z=0; z <=25; z++){
    characters[z] = char(ascii_value);
    ascii_value++;
}
// main program sequence
while (running){
welcome_user();
take_instruction();
}

}
// welcome user
void welcome_user(){
cout << "Ahlan ya user ya habibi."<<endl;
if (loop == 0 ){
  cout << "Enter Encryption Factors (AX+B) A THEN B :";
  cin >> a;
  cin >> b;
  for(int y=0; y <26; y++){
if ((a * y)  % 26 == 1 ) {
                c = y;
    }
 }
 }
loop++;


cout << "what do you like to do today ?"<<endl;
cout << "1. Cipher a message "<<endl;
cout << "2. Decipher a message"<<endl;
cout << "3. End"<<endl;


}
// take instruction
int take_instruction(){

cout << "Enter No. of Instruction :";
cin >> instruction;

if (instruction == 1){
cout << "Encrypted Message : " << cipher()<<endl;
cout <<endl;
}

else if (instruction == 2){
cout << "Original Message : " << decipher()<<endl;
cout <<endl;
}

else if (instruction == 3 ){
   running = false;
}

else{
    cout << "Enter No. of instruction from list above !"<<endl;
    cout <<endl;
    welcome_user();
}

}

// cipher message

string cipher(){
cout << "Enter Message You want : ";
cin.ignore();
getline(cin,message);
for (int z=0; z < message.length(); z++){
  for (int i=0; i <= 25; i++){
    if (message[z] == characters[i] ){
            x = i;
            encrypted = ((a*x)+b) % 26;
            message[z] = characters[encrypted];
            break;
    }


  }
}
return message;

}

// decipher message

string decipher(){
cout << "Enter The Encrypted Message  : ";
cin.ignore();
getline(cin,decryptioned);

for (int z=0; z < decryptioned.length(); z++){
  for (int i=0; i <= 25; i++){
    if (message[z] == characters[i] ){
            x = i;

            decrypted = (c * (x-b)) % 26;
            if (decrypted < 0){
                decrypted = 26+decrypted;
            }

            int Y = decrypted;
            message[z] = characters[Y];
            break;
    }


  }
}
return message;

}



