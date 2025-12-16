#include <iostream>
using namespace std;

void personalInfo() {
    cout << "\n----- PERSONAL INFORMATION -----\n";
    cout << "Name      : Kshirsagar Saideep Kumar\n";
    cout << "Mobile    : 9390234450\n";
    cout << "Email     : saideep518@gmail.com\n";
    cout << "LinkedIn  : linkedin.com/in/saideep-kumar-990ba1314\n";
}

void careerObjective() {
    cout << "\n----- CAREER OBJECTIVE -----\n";
    cout << "To be part of an enthusiastic work environment where I can\n";
    cout << "use my technical and personal skills to achieve organizational goals\n";
    cout << "and continuously upgrade my knowledge.\n";
}

void education() {
    cout << "\n----- ACADEMIC QUALIFICATIONS -----\n";
    cout << "B.Tech CSE (AIML) - Malla Reddy University (2025-Present)\n";
    cout << "CGPA: 8.1\n\n";
    cout << "Intermediate (MPC) - Narayana Junior College (2020-2022)\n";
    cout << "Percentage: 91%\n\n";
    cout << "SSC - St. Joseph's High School (2008-2020)\n";
    cout << "Percentage: 95%\n";
}

void skills() {
    cout << "\n----- TECHNICAL SKILLS -----\n";
    cout << "Programming Languages : Python, Java, C, C++\n";
    cout << "Web Technologies     : HTML, CSS\n";
    cout << "Database             : MySQL\n";

    cout << "\n----- PERSONAL SKILLS -----\n";
    cout << "Quick Learner\n";
    cout << "Time Management\n";
    cout << "Communication\n";
    cout << "Problem Solving\n";
}

void projects() {
    cout << "\n----- PROJECTS -----\n";
    cout << "1. Automated Attendance System using Deep Learning\n";
    cout << "2. Sentiment Analysis using Natural Language Processing\n";
    cout << "3. Identity Verifier using Machine Learning\n";
    cout << "4. Smart Campus Sentry using Artificial Intelligence\n";
}

void certifications() {
    cout << "\n----- CERTIFICATIONS & ACHIEVEMENTS -----\n";
    cout << "• Winner - Infra Institutional Startup Competition 2025\n";
    cout << "• Building Language Models on AWS (AWS Training)\n";
    cout << "• Programming Fundamentals - Duke University\n";
    cout << "• Introduction to Python Programming - Penn University\n";
}

int main() {
    int choice;

    do {
        cout << "\n================ DIGITAL PORTFOLIO =================\n";
        cout << "1. Personal Information\n";
        cout << "2. Career Objective\n";
        cout << "3. Education\n";
        cout << "4. Skills\n";
        cout << "5. Projects\n";
        cout << "6. Certifications & Achievements\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: personalInfo(); break;
            case 2: careerObjective(); break;
            case 3: education(); break;
            case 4: skills(); break;
            case 5: projects(); break;
            case 6: certifications(); break;
            case 0: cout << "\nThank you for viewing my digital portfolio!\n"; break;
            default: cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
