#include <iostream>
#include <string>
using namespace std;

int main() {
    // Mood storage array and counters
    string moods[100];
    int count = 0;
    int choice;

    // Mood frequency counters
    int happyCount = 0, sadCount = 0, angryCount = 0, excitedCount = 0;

    cout << "==============================" << endl;
    cout << "     DAILY MOOD TRACKER " << endl;
    cout << "==============================\n" << endl;

    do {
        // Display menu
        cout << "\nChoose an option:\n";
        cout << "1. Enter moods\n";
        cout << "2. Reset moods\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        // To prevent input issues
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Invalid input. Try again.\n";
            continue;
        }

        if (choice == 1) {
            string mood;

            cout << "\n(Type 'exit' to finish entering moods)\n";
            cout << "--------------------------------------\n";

            while (true) {
                cout << "Enter mood for day " << count + 1 << ": ";
                cin >> mood;

                // Case-insensitive exit handling
                if (mood == "exit" || mood == "Exit" || mood == "EXIT") break;

                // Store mood
                moods[count] = mood;

                // Count specific moods
                if (mood == "happy") happyCount++;
                else if (mood == "sad") sadCount++;
                else if (mood == "angry") angryCount++;
                else if (mood == "excited") excitedCount++;

                count++;

                // Optional safety limit
                if (count >= 100) {
                    cout << "❗ Mood limit reached (100 days max).\n";
                    break;
                }
            }

            // Summary
            cout << "\n========= Mood Summary =========\n";
            cout << "Happy   : " << happyCount << endl;
            cout << "Sad     : " << sadCount << endl;
            cout << "Angry   : " << angryCount << endl;
            cout << "Excited : " << excitedCount << endl;

            // Mood log
            cout << "\n========= Mood Log =============\n";
            for (int i = 0; i < count; i++) {
                cout << "Day " << i + 1 << " - " << moods[i] << endl;
            }

        } else if (choice == 2) {
            // Reset all mood data
            count = happyCount = sadCount = angryCount = excitedCount = 0;
            cout << "\n All mood data reset!\n";

        } else if (choice == 3) {
            cout << "\n Exiting... Have a cheerful day!\n";
        } else {
            cout << " Invalid choice. Please select 1, 2 or 3.\n";
        }

    } while (choice != 3);

    return 0;
}
