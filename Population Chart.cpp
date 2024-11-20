// File Name: Population Chart 
// name of programmer: Ebram Azer
// Date: Nov 2024
// Requirments: Write program about populatio v=chart 

#include <iostream>
#include <fstream>  // For file operations
#include <string>   // For string handling
using namespace std;

int main() {
    // Specify the file path for the "people.txt" file in your Downloads folder
    string filePath = "C:/Users/YourUsername/Downloads/people.txt"; // Replace 'YourUsername' with your actual username

    ifstream inputFile(filePath); // Open the file
    if (!inputFile) {
        cout << "Error: Could not open file 'people.txt.'" << endl;
        return 1; // Exit with error code
    }

    // Display the title for the bar chart
    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    int year, population;

    // Read year and population values from the file
    while (inputFile >> year >> population) {
        cout << year << " "; // Print the year
        int numAsterisks = population / 1000; // Calculate number of asterisks (1 per 1,000 people)

        // Print the bar of asterisks
        for (int i = 0; i < numAsterisks; i++) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    inputFile.close(); // Close the file
    return 0;
}

