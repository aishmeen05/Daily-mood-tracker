#include <iostream>
#include <string>
using namespace std;

int main() {
    string moods[100];
    int count = 0;
    string mood;

    int happyCount = 0, sadCount = 0, angryCount = 0, excitedCount = 0;

    // Header
    cout << "==============================" << endl;
    cout << "     DAILY MOOD TRACKER 😊" << endl;
    cout << "==============================\n" << endl;

    cout << "Enter your mood for each day!" << endl;
    cout << "(Type 'exit' to finish)\n" << endl;

    cout << "------------------------------" << endl;

    // Input loop
    while (true) {
        cout << "Enter mood for day " << count + 1 << ": ";
        cin >> mood;

        if (mood == "exit") {
            break;
        }

        moods[count] = mood;

        // Mood count logic
        if (mood == "happy") happyCount++;
        else if (mood == "sad") sadCount++;
        else if (mood == "angry") angryCount++;
        else if (mood == "excited") excitedCount++;

        count++;
    }

    cout << "------------------------------\n";

    // Summary
    cout << "\nYou entered moods for " << count << " days.\n";

    cout << "\n========= Mood Summary ========\n";
    cout << "Happy   : " << happyCount << endl;
    cout << "Sad     : " << sadCount << endl;
    cout << "Angry   : " << angryCount << endl;
    cout << "Excited : " << excitedCount << endl;

    // Log
    cout << "\n========= Mood Log ============\n";
    for (int i = 0; i < count; i++) {
        cout << "Day " << i + 1 << " - " << moods[i] << endl;
    }

    return 0;
}
