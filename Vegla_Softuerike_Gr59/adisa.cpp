#include <iostream>
#include <string>
using namespace std;

void lexo(string days[], string workouts[], int n, int zgjedhja) {
    if (zgjedhja == 1) { // BEGINNER
        days[0] = "Monday";    workouts[0] = "Biceps";
        days[1] = "Tuesday";   workouts[1] = "Triceps";
        days[2] = "Wednesday"; workouts[2] = "Legs";
        days[3] = "Thursday";  workouts[3] = "Chest Workout";
        days[4] = "Friday";    workouts[4] = "Cardio";
    }
    else if (zgjedhja == 2) { // INTERMEDIATE
        days[0] = "Monday";    workouts[0] = "Legs & Glutes";
        days[1] = "Tuesday";   workouts[1] = "Back & Biceps";
        days[2] = "Wednesday"; workouts[2] = "Back & Biceps";
        days[3] = "Thursday";  workouts[3] = "Chest & Triceps";
        days[4] = "Friday";    workouts[4] = "Shoulders & Light Full Body";
    }
    else if (zgjedhja == 3) { // ADVANCED
        days[0] = "Monday";    workouts[0] = "Legs & Glutes";
        days[1] = "Tuesday";   workouts[1] = "Back & Biceps";
        days[2] = "Wednesday"; workouts[2] = "Back & Biceps + Core";
        days[3] = "Thursday";  workouts[3] = "Chest & Triceps";
        days[4] = "Friday";    workouts[4] = "Shoulders & Light Full Body";
    }
}

void shtyp(string days[], string workouts[], int n, string niveli) {
    cout << "\n=== " << niveli << " PLAN ===\n";
    for (int i = 0; i < n; i++) {
        cout << days[i] << ": " << workouts[i] << endl;
    }
}

int main() {
    string days[5];
    string workouts[5];
    int zgjedhja;

    do {
        cout << "\n===== FITNESS PROGRAM =====\n";
        cout << "1. Beginner\n";
        cout << "2. Intermediate\n";
        cout << "3. Advanced\n";
        cout << "0. Exit\n";
        cout << "Zgjedh planin: ";
        cin >> zgjedhja;

        if (zgjedhja == 1) {
            lexo(days, workouts, 5, zgjedhja);
            shtyp(days, workouts, 5, "BEGINNER");
        }
        else if (zgjedhja == 2) {
            lexo(days, workouts, 5, zgjedhja);
            shtyp(days, workouts, 5, "INTERMEDIATE");
        }
        else if (zgjedhja == 3) {
            lexo(days, workouts, 5, zgjedhja);
            shtyp(days, workouts, 5, "ADVANCED");
        }
        else if (zgjedhja == 0) {
            cout << "Programi u mbyll.\n";
        }
        else {
            cout << "Zgjedhje e pavlefshme!\n";
        }

    } while (zgjedhja != 0);

    return 0;
}
