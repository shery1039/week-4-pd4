#include <iostream>
#include <windows.h>
using namespace std;

void printMenu();
void calculate_Aggregate(string name, float matric_Marks, float Inter_Marks, float Ecat_Marks);
void compare_Marks(string std1, string std2, float ecatMarksStd1, float ecatMarksStd2);

main()
{
    string name;
    float matric_Marks, Inter_Marks, Ecat_Marks;
    string std1, std2;
    float ecatMarksStd1, ecatMarksStd2;

    int choice;
    while (true)
    {

        printMenu();
        cin >> choice;

        if (choice == 1)
        {
            calculate_Aggregate(name, matric_Marks, Inter_Marks, Ecat_Marks);
        }

        if (choice == 2)
        {
            compare_Marks(std1, std2, ecatMarksStd1, ecatMarksStd2);
        }

        if (choice == 3)
        {
            cout << "Exiting:";
            break;
        }
    }
}

void printMenu()
{
    cout << "University Admission Management System" << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Calculate Aggregate" << endl;
    cout << "2. Compare Ecat Marks" << endl;
    cout << "3. Quit" << endl;
    cout << "Enter your choice: ";
}

void calculate_Aggregate(string name, float matric_Marks, float Inter_Marks, float Ecat_Marks)
{
    float matric_Weightage = 30;
    float Inter_Weight = 30;
    float Ecat_Weight = 40;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter your Matric Marks: ";
    cin >> matric_Marks;
    cout << "Enter your Inter Marks: ";
    cin >> Inter_Marks;
    cout << "Enter your Ecat Marks: ";
    cin >> Ecat_Marks;

    float calculate = ((matric_Marks * matric_Weightage) / 1100) + ((Inter_Marks * Inter_Weight) / 520) + ((Ecat_Marks * Ecat_Weight) / 1100);
    cout << "The aggragate of " << name << " is " << calculate << endl;
}

void compare_Marks(string std1, string std2, float ecatMarksStd1, float ecatMarksStd2)
{
    cout << "Enter 1st student name: ";
    cin >> std1;
    cout << "Enter 1st student Ecat Marks: ";
    cin >> ecatMarksStd1;
    cout << "Enter 2nd student name: ";
    cin >> std2;
    cout << "Enter 2nd student Ecat Marks: ";
    cin >> ecatMarksStd2;

    if (ecatMarksStd1 > ecatMarksStd2)
    {
        cout << std1 << " has higher Ecat marks." << endl;
    }
    if (ecatMarksStd2 > ecatMarksStd1)
    {
        cout << std2 << " has higher Ecat marks." << endl;
    }
}
