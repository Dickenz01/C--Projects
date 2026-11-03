#include <iostream> //For common sense
#include <fstream> //for an ifstream functionality
#include <string> // For name giving
#include <cctype> // For character analysis
#include <sstream> // For std::stringstream
#include <cstring>
using namespace std; //Another common sense

int NumVowels(string data){
    int vowels = 0;

    for (char c : data){
        char lowerC = tolower(c);
        if (lowerC== 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u' )
            vowels++;
    }

    return vowels;
}

int wordCount(string variable){
    int count = 0;
    stringstream ss(variable);
    string word;

    //Extracting and counting words one by one
    while (ss >> word){
    count++;
    }

    return count;
}

void Reverse(string word){
    for (int i = static_cast<int>(word.size()) - 1; i >= 0; --i){
        cout << word[i];
    }
    return;
}

void capitalize(string word){
    stringstream ss(word);

    //Extracting and capitalizing second character one by one
    while (ss >> word){
        word[1] = toupper(word[1]);
        cout << word << " ";
    }
    return;
}

int main () {

    string filedata;

        //Opening a text file named "unknown"
    ifstream infile;
    infile.open("Unknown.txt");

    //Checkin if file is open & copying contents of unknown to a string "filedata"
    if (infile.is_open()){
        getline(infile, filedata);
    }
    else{
        cout << "Unable to open file" << endl;
    }

    cout << "Number of the vowels in the string is " << NumVowels(filedata) << endl;
    cout << "Number of words in the statement are " << wordCount(filedata) << endl;
    cout << "Reversed string is: ";
    Reverse(filedata);
    cout << endl;
    cout << "Capitalized string is: ";
    capitalize(filedata);
    cout << endl;
}