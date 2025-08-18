#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {

    string cmd = argv[1];
    string line;

    if (argc < 3 || (cmd != "up" && cmd != "down"))
        cout << "USAGE : ./convert [up/down] [your_input]" << endl;
    else if (cmd == "up") {
        for (int i = 2; i < argc; ++i) {
            string str(argv[i]);   
            for (char &c : str)
                line += toupper(static_cast<unsigned char>(c));
            line += ' ';
        }
    }
    else {
        for (int i = 2; i < argc; ++i) {
            string str(argv[i]);   
            for (char &c : str)
                line += tolower(static_cast<unsigned char>(c));
            line += ' ';
        }
    }
    line.resize(line.size() - 1);
    cout << line << endl;
    return 0;
}