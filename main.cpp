#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

int textTocsv(string textFilePath, string outputFilePath){
    //Generate first columns based on reading .cfg

}

int pdfToText(string pdfPath, string outputFilePath) {
    // Construct the command to run pdftotext
    string command = "pdftotext " + pdfPath + " " + outputFilePath;
    int status = system(command.c_str());
    // Check if the command executed successfully
    if (status == 0) {
        cout << "Text extraction successful." << endl;
    } else {
        cout << "Text extraction failed." << endl;
        return 1; // Exit the program with error code
    }
    // Open the output file to read the extracted text
    ifstream outputFile(outputFilePath);
    if (outputFile.is_open()) {
        string textContent;
        string line;
        while (getline(outputFile, line)) {
            textContent += line + "\n"; // Append each line to the textContent
        }
        outputFile.close();
        // Display the extracted text
        cout << "Text content extracted from PDF document:" << endl;
        cout << textContent << endl;
    } else {
        cout << "Failed to open output file." << endl;
        return 1; // Exit the program with error code
    }
    return 0; // Exit the function successfully
}

int main(){
    pdfToText("transactions/Individual-Transaction_04-14-2026.pdf", 
        "transactions/Individual-Transaction_04-14-2026.txt");
    return 0;
}
