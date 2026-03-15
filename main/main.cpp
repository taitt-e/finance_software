#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    // Specify the input and output file paths
    string pdfPath = "Individual-Transaction_01-22-2026.pdf";
    string outputFilePath = "output.txt";
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
    return 0; // Exit the program successfully
}