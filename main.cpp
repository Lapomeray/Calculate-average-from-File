#include <iostream>
#include <fstream>

/* Brandon Lapomeray
 *
 * A C++ program that will ask the user for a file name.
 * Contained in this file is a series of integers separated by white space.
 * Read in the numbers, displaying them on the screen, adding them up and then calculating their average.
 * Please remember that you will have to create the input file and
 * it is easiest to read it if you use its entire path name, i.e., "a:\\input.txt".
 *
 *
 * */

using namespace std;

int main() {

    // Create String array
    char name[150];

    // Get file name
    cout << "Enter File name\n";
    cin >> name;

    // Create File Pointer
    ifstream fp;

    //Open File
    fopen(name,"r");

    // Check if file exist
    fp.open(name);
    if(!fp) {
        cerr << "Cant find/open file" << endl;
        exit(1) ;
    }




    //Count number of integers in file
    int i = 0;
    int x,average;
    int sum = 0;

    // Loop through file
    while (fp >> x)
    {
        cout << x << endl;

        //Count number of integers in file
        i++;

        sum += x;

    }

    // Calculate average
    average = sum / i;


    cout << "Number of integers: " << i << endl;

    cout << "Sum: " << sum << endl;

    cout << "Average is " << average << endl;

    // Close file
    fp.close();







    return 0;
}
