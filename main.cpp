#include <iostream>
#include <string>
using namespace std;

int main() {
    string moods[100];
    int count = 0;
    int choice;

    int happyCount = 0, sadCount = 0, angryCount = 0, excitedCount = 0;

    cout << "==============================" << endl;
    cout << "     DAILY MOOD TRACKER " << endl;
    cout << "==============================\n" << endl;

    do {
        cout << "\nChoose an option:\n";
        cout << "1. Enter moods\n";
        cout << "2. Reset moods\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string mood;
            cout << "\n(Type 'exit' to finish entering moods)\n";
            cout << "------------------------------" << endl;

            while (true) {
                cout << "Enter mood for day " << count + 1 << ": ";
                cin >> mood;

                if (mood == "exit") break;

                moods[count] = mood;

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

        } else if (choice == 2) {
            count = happyCount = sadCount = angryCount = excitedCount = 0;
            cout << "\n Mood data reset successfully!\n";
        } else if (choice == 3) {
            cout << "\n Exiting... Have a good day!\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}
