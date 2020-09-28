
// Justin Stuelke
// C++ Fall semester
// due sept 28th



#include <fstream>
#include <string>
#include <iostream>
#include <math.h>

using namespace std; //

int main() //
{
    int data; // intager
    int data2; // intager
    int data3; // intager
    int data4; // intager
    string inputFileName = "/Users/justin_stuelke/Desktop/C++Busch/inMeanStd.dat"; // input file saved to computer
    string outputFileName = "/Users/justin_stuelke/Desktop/C++Busch/outMeanStd.dat"; // input file saved to computer
    ifstream inFile;
    ofstream outFile;
    
    inFile.open(inputFileName);        // Assumes input file is in the project folder
    outFile.open(outputFileName);        // Places output file in the project folder

    cout << "4 values from file " << endl;     inFile >> data >> data2 >> data3 >> data4;
    
         
        
    float mean = (data + data2 + data3 + data4) / 4.0;
    float dataDev = (data - mean) * (data - mean);
    float data2Dev = (data2 - mean) * (data2 - mean);
    float data3Dev = (data3 - mean) * (data3 - mean);
    float data4Dev = (data4 - mean) * (data4 - mean);
    float stdDev = sqrt((dataDev + data2Dev + data3Dev + data4Dev) / 4);

    
    cout << data << " " << data2 << " " << data3 << " " << data4 << endl;
    cout << "Mean " << mean << endl; // print out average
    cout << "Std Dev: " << stdDev << endl << endl; //
    
     outFile << data << " " << data2 << " " << data3 << " " << data4 << endl;
    outFile << "Mean " << mean << endl;//
    outFile << "Std Dev: " << stdDev << endl;
    
    cout << "enter 4 values in console: ";
    cin >> data >> data2 >> data3 >> data4;
    mean = (data + data2 + data3 + data4) / 4.0;
    dataDev = (data - mean) * (data - mean);
    data2Dev = (data2 - mean) * (data2 - mean);
    data3Dev = (data3 - mean) * (data3 - mean);
    data4Dev = (data4 - mean) * (data4 - mean);
    stdDev = sqrt((dataDev + data2Dev + data3Dev + data4Dev) / 4);

    
    cout << data << " " << data2 << " " << data3 << " " << data4 << endl;
    cout << "Mean " << mean << endl;
    cout << "Std Dev: " << stdDev << endl;
     outFile << data << " " << data2 << " " << data3 << " " << data4 << endl;
    outFile << "Mean " << mean << endl;
    outFile << "Std Dev: " << stdDev << endl; 
    inFile.close();
    outFile.close();

    return 0;
}

