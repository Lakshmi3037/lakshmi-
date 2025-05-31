#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

// Structure to store student data
struct Student {
    int regNo;
    string name;
    string category;
    string gender;
    string address;
    string email;
    string subject;
    int cetScore;
    bool isPresent;
    int rank;
};

// Comparison function for ranking
bool compareByScore(const Student& a, const Student& b) {
    return a.cetScore > b.cetScore;
}

int main() {
    const int MAX_USERS = 30;
    vector<Student> students;
    int num;

    cout << "=== CET Registration System ===\n";
    cout << "Enter number of students to register (max 30): ";
    cin >> num;
    if (num > MAX_USERS || num <= 0) {
        cout << "Invalid number of students. Max allowed is 30.\n";
        return 1;
    }

    cin.ignore();  // Clear input buffer

    // Input details for each student
    for (int i = 0; i < num; ++i) {
        Student s;
        s.regNo = 1001 + i;

        cout << "\n--- Enter details for Student " << i + 1 << " ---\n";
        cout << "Name: ";
        getline(cin, s.name);

        cout << "Category (General/SC/ST/OBC): ";
        getline(cin, s.category);

        cout << "Gender (Male/Female/Other): ";
        getline(cin, s.gender);

        cout << "Address: ";
        getline(cin, s.address);

        cout << "Email: ";
        getline(cin, s.email);

        cout << "Subject: ";
        getline(cin, s.subject);

        cout << "CET Score (0-200): ";
        cin >> s.cetScore;

        cout << "Present? (1 for Yes, 0 for No): ";
        cin >> s.isPresent;

        cin.ignore(); // Clear buffer for next input
        students.push_back(s);
    }

    // Filter present students for ranking
    vector<Student> presentStudents;
    for (const auto& s : students) {
        if (s.isPresent)
            presentStudents.push_back(s);
    }

    // Sort by CET Score for ranking
    sort(presentStudents.begin(), presentStudents.end(), compareByScore);

    // Assign ranks to present students
    for (size_t i = 0; i < presentStudents.size(); ++i) {
        for (auto& s : students) {
            if (s.regNo == presentStudents[i].regNo) {
                s.rank = i + 1;
                break;
            }
        }
    }

    // Display all student data
    cout << "\n=== Registered Students Summary ===\n";
    cout << left << setw(6) << "Reg#" << setw(15) << "Name" << setw(10) << "Gender" << setw(10)
         << "Category" << setw(20) << "Email" << setw(10) << "Score" << setw(10)
         << "Present" << setw(10) << "Rank" << endl;

    for (const auto& s : students) {
        cout << left << setw(6) << s.regNo
             << setw(15) << s.name
             << setw(10) << s.gender
             << setw(10) << s.category
             << setw(20) << s.email
             << setw(10) << s.cetScore
             << setw(10) << (s.isPresent ? "Yes" : "No")
             << setw(10) << (s.isPresent ? to_string(s.rank) : "-") << endl;
    }

    return 0;
}