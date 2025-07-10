#include <iostream>
#include <string>
using namespace std;

int main() {
    string moods[100];
    int count = 0;
    string mood;

    int happyCount = 0, sadCount = 0, angryCount = 0, excitedCount = 0;

    cout << "Welcome to Daily Mood Tracker!" << endl;
    cout << "Type your mood for today (happy/sad/angry/excited)." << endl;
    cout << "Type 'exit' to finish and see summary.\n\n";

    while (true) {
        cout << "Enter mood for day " << count + 1 << ": ";
        cin >> mood;

        if (mood == "exit") {
            break;
        }

        moods[count] = mood;

        // Mood counting logic
        if (mood == "happy") happyCount++;
        else if (mood == "sad") sadCount++;
        else if (mood == "angry") angryCount++;
        else if (mood == "excited") excitedCount++;

        count++;
    }

    cout << "\nYou entered moods for " << count << " days.\n";

    // Final Mood Summary
    cout << "\nMood Summary:\n";
    cout << "Happy: " << happyCount << endl;
    cout << "Sad: " << sadCount << endl;
    cout << "Angry: " << angryCount << endl;
    cout << "Excited: " << excitedCount << endl;

    cout << "\nMood Log:\n";
    for (int i = 0; i < count; i++) {
        cout << "Day " << i + 1 << " - " << moods[i] << endl;
    }


    return 0;
}
