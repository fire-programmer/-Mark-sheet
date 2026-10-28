//C++ project: Students Mark List
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];
    int total[5];
    double avg[5];
    // Read students name !
    for (int i = 0; i < 5; i++) {
        cout << "\nEnter name of students " << i + 1 << ": ";
        cin.getline(names[i], 20);

        total[i] = 0;

        for (int j = 0; j < 3; j++) {
            cout << "Enter mark " << j + 1 << ": ";
            cin >> marks[i][j];

            total[i] += marks[i][j];
        }

        avg[i] = total[i] / 3.0;
        if (i < 4) {
            cin.ignore(1000, '\n');
        }
    }
    // Finding the top student!
    int top = 0;

    for (int i = 1; i < 5; i++) {
        if (total[i] > total[top]) {
            top = i;
        }
    }
  // Printing the table form!
    cout <<"=============Students mark list=============";
    cout << "\n\n";
    cout << left
         << setw(20) << "Name"
         << setw(10) << "M1"
         << setw(10) << "M2"
         << setw(10) << "M3"
         << setw(10) << "Total"
         << setw(10) << "Average" << endl;

    cout << string(70, '-') << endl;

    for (int i = 0; i < 5; i++) {
        cout << left
             << setw(20) << names[i]
             << setw(10) << marks[i][0]
             << setw(10) << marks[i][1]
             << setw(10) << marks[i][2]
             << setw(10) << total[i]
             << fixed << setprecision(1)
             << avg[i] << endl;
    }

   cout << "\nTop student(s) with total " << total[top] << ":" << endl;

    for (int i = 0; i < 5; i++) {
        if (total[i] == total[top]) {
            cout << "- " << names[i] << endl;
}
}
    return 0;
}

