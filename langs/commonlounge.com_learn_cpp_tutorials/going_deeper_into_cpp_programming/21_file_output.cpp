#include <fstream>
using namespace std;

int main(void) {
    // Declare the variables and open the file
    ofstream output_file;
    output_file.open("super_temp.txt");

    // Write something to the file
    string name = "Batman";
    output_file << "My favorite superhero is " << name << endl;
    // Just like "cout << My favorite superhere is " << name << endl;

    // Close the file once done
    output_file.close();

    return 0;
}