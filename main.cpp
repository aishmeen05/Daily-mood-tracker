#include <iostream>
#include <string>
using namespace std;

int main() {
    string moods[100]; // to store up to 100 moods
    int count = 0;
    string mood;

    cout << "Welcome to Daily Mood Tracker!" << endl;
    cout << "Type your mood for today (happy/sad/angry/etc)." << endl;
    cout << "Type 'exit' to finish and see summary.\n\n";

    while (true) {
        cout << "Enter mood for day " << count + 1 << ": ";
        cin >> mood;

        if (mood == "exit") {
            break;
        }

        moods[count] = mood;
        count++;
    }

    // Mood input complete
    cout << "\nThank you! You entered moods for " << count << " days.\n";

    return 0;
}
