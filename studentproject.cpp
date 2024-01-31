#include <iostream>
#include <string>
#include<fstream>
#include <iomanip>
using namespace std;

int  flag = 0,pos;
string student_name;

void heading() {
    cout.setf(ios::left);
    cout << setw(20) << "Name";
    cout << setw(10) << "Maths";
    cout << setw(10) << "Coi";
    cout << setw(10) << "English";
    cout << setw(10) << "Physics";
    cout << setw(10) << "Workshop";
    cout << endl;
}

class student {
private:
    string name;
    double maths;
    double coi;
    double physics;
    double english;
    double workshop;

public:
    string get_student_name() {
        return name;
    }

    void add_student() {
        cout << "Enter student name : ";
        cin.ignore();
        getline(cin, name);
        cout << "Marks of MATHS : ";
        cin >> maths;
        cout << "Marks of COI : ";
        cin >> coi;
        cout << "Marks of PHYSICS : ";
        cin >> physics;
        cout << "Marks of ENGLISH : ";
        cin >> english;
        cout << "Marks of WORKSHOP : ";
        cin >> workshop;
    }

    void display_student() {
        cout << "Name : " << name << endl;
        cout << "MATHS : " << maths << endl;
        cout << "COI : " << coi << endl;
        cout << "PHYSICS : " << physics << endl;
        cout << "ENGLISH : " << english << endl;
        cout << "WORKSHOP : " << workshop << endl;
    }

    void heading_data() {
        cout.setf(ios::left);
        cout << setw(20) << name;
        cout << setw(10) << maths;
        cout << setw(10) << coi;
        cout << setw(10) << english;
        cout << setw(10) << physics;
        cout << setw(10) << workshop;
        cout << endl;
    }

    void maths_heading_data() {
        cout.setf(ios::left);
        cout << setw(20) << name;
        cout << setw(10) << maths;
        cout << endl;
    }

    void coi_heading_data() {
        cout.setf(ios::left);
        cout << setw(20) << name;
        cout << setw(10) << coi;
        cout << endl;
    }

    void physics_heading_data() {
        cout.setf(ios::left);
        cout << setw(20) << name;
        cout << setw(10) << physics;
        cout << endl;
    }

    void english_heading_data() {
        cout.setf(ios::left);
        cout << setw(20) << name;
        cout << setw(10) << english;
        cout << endl;
    }

    void workshop_heading_data() {
        cout.setf(ios::left);
        cout << setw(20) << name;
        cout << setw(10) << workshop;
        cout << endl;
    }

    double avg_grade() {
        double avg = (maths + coi + english + physics + workshop) / 5.0;
        return avg;
    }

    void subject_wise_performance(student s[], int n) {
    if (n > 0) {
        int choice;
        cout << "1. Maths" << endl;
        cout << "2. Coi" << endl;
        cout << "3. Physics" << endl;
        cout << "4. English" << endl;
        cout << "5. Workshop" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        double max_marks = -1.0; // Initialize to a value lower than possible marks
        int top_performer_index = -1; // Index of the top performer

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) {
                    if (s[i].maths > max_marks) {
                        max_marks = s[i].maths;
                        top_performer_index = i;
                    }
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    if (s[i].coi > max_marks) {
                        max_marks = s[i].coi;
                        top_performer_index = i;
                    }
                }
                break;
            case 3:
                for (int i = 0; i < n; i++) {
                    if (s[i].physics > max_marks) {
                        max_marks = s[i].physics;
                        top_performer_index = i;
                    }
                }
                break;
            case 4:
                for (int i = 0; i < n; i++) {
                    if (s[i].english > max_marks) {
                        max_marks = s[i].english;
                        top_performer_index = i;
                    }
                }
                break;
            case 5:
                for (int i = 0; i < n; i++) {
                    if (s[i].workshop > max_marks) {
                        max_marks = s[i].workshop;
                        top_performer_index = i;
                    }
                }
                break;
            default:
                cout << "Invalid Choice" << endl;
                return;
        }

        if (top_performer_index != -1) {
            cout << "Top Scorer in the chosen subject:" << endl;
            heading();
            s[top_performer_index].heading_data();
        } else {
            cout << "No data available for the chosen subject." << endl;
        }
    } else {
        cout << "No Student records available..." << endl;
    }
    }

    void maths_heading() {
        cout.setf(ios::left);
        cout << setw(20) << "Name";
        cout << setw(10) << "Maths";
        cout << endl;
    }

    void coi_heading() {
        cout.setf(ios::left);
        cout << setw(20) << "Name";
        cout << setw(10) << "Coi";
        cout << endl;
    }

    void physics_heading() {
        cout.setf(ios::left);
        cout << setw(20) << "Name";
        cout << setw(10) << "Physics";
        cout << endl;
    }

    void english_heading() {
        cout.setf(ios::left);
        cout << setw(20) << "Name";
        cout << setw(10) << "English";
        cout << endl;
    }

    void workshop_heading() {
        cout.setf(ios::left);
        cout << setw(20) << "Name";
        cout << setw(10) << "Workshop";
        cout << endl;
    }
    
    void update_data() {
            cout << "Enter Students Details...."<<endl;
            cout << "Enter students name : ";
            cin.ignore();
            getline(cin, name);
            cout << "Marks of MATHS : ";
            cin >> maths;
            cout << "Marks of COI : ";
            cin >> coi;
            cout << "Marks of PHYSICS : ";
            cin >> physics;
            cout << "Marks of ENGLISH : ";
            cin >> english;
            cout << "Marks of WORKSHOP : ";
            cin >> workshop;
    }

    void update_student_record(student s[], int n){
        if (n > 0) {
            cout << "Enter Name of the student to update :";
            cin>>student_name;
            for (int i = 0; i < n; i++) {
                if (student_name == s[i].get_student_name()) {
                    cout<<"Following record will be modified....."<<endl;
                    heading();
                    s[i].heading_data();
                    cout<<"Enter New Data"<<endl;
                    s[i].update_data();
                    flag=1;
                }
            }    
            if (flag == 0) {
                cout << "No such name found..... " << endl;
            }   
        }else {
        cout << "No Student records available..." << endl;
        }
    }

    void save_to_file(student s[], int n) {
    ofstream outputfile("student_details.txt"); 

    if (outputfile.is_open()) {
        if (n > 0) {
            outputfile << ".............................Student Details:............................." << endl;
            outputfile <<"Name" << setw(10) << "Maths" << setw(10) << "Coi" << setw(10) << "Physics" << setw(10) << "English" << setw(10) << "Workshop" << endl;
            for (int i = 0; i < n; i++) {
                outputfile << s[i].get_student_name() << setw(10) << s[i].maths << setw(10) << s[i].coi << setw(10) << s[i].physics << setw(10) << s[i].english << setw(10) << s[i].workshop << endl;
            }
            cout << "Student details saved to file successfully." << endl;
            outputfile << "............................................................................." << endl;
        }else {
            cout << "No Student records available..." << endl;
        }
        outputfile.close();
    } else {
        cout << "Unable to open the file." << endl;
    }
    }
};

void average(student s[], int n){
if (n > 0) {
        double total_avg = 0.0;
        for (int i = 0; i < n; i++) {
            total_avg += s[i].avg_grade();
        }
        double class_avg = total_avg / n;
        cout << "Average Grade : " << class_avg << endl;
    } else {
        cout << "No Student records available..." << endl;
    }
}

void display_TopScorer(student s[], int n) {
    if (n > 0) {
        double max_avg = -1.0;         // Initialize to a value lower than possible averages
        int top_scorer_index = -1;    // Index of the top scorer means the position of the top scrorer

        for (int i = 0; i < n; i++) {
            double student_avg = s[i].avg_grade();
            if (student_avg > max_avg) {
                max_avg = student_avg;
                top_scorer_index = i;
            }
        }

        if (top_scorer_index != -1) {
            cout << "Top Scorer:" << endl;
            heading();
            s[top_scorer_index].heading_data();
        } else {
            cout << "No top scorer found." << endl;
        }
    } else {
        cout << "No Student records available..." << endl;
    }
}


void passing_student(student s[],int n) {   //here n means how many details have been entered
    if(n>0){
        double passingavg=30.0;
        int flag=0;
        for (int i = 0; i < n; i++) {
            double passing_grade = s[i].avg_grade();
            if(passing_grade > passingavg){
                heading();
                s[i].heading_data();
                flag=1;
            }
        }
        if(flag==0){
            cout<<"None of the students passed...."<<endl;
        }
    }else{
        cout<<"No Student records available..."<<endl;
    }
}  

void delete_record(student s[], int& n){
    if (n > 0) {
        int flag=0;
        cout << "Name of the student to delete :";
        cin >> student_name;
        for (int i = 0; i < n; i++) {
            if (student_name == s[i].get_student_name()) {
                cout<<"Following record is deleted...."<<endl;
                heading();
                s[i].heading_data();
                flag=1;
                pos=i;    // array box no. like 0 1 2 3 ...
                break;
            }
        }
        if(flag==0){
            cout<<"No such name found...."<<endl;
        }else{
            for (int i = pos; i < n-1; i++) {
            s[i]=s[i+1];         // by this detail of 1=2 means in info box 1 2 3 4 5 = 2 3 4 5 5 then n-- deletes the last box 
        }
        n--;  
        } 
    } 
}

void Search_for_a_student(student s[],int n){
    cout << "Enter Name of the student : ";
    cin >> student_name;
    // int flag=0;
    for (int i = 0; i < n; i++) {
        if (student_name == s[i].get_student_name()) {
            heading();
            s[i].heading_data();
            flag=1;
        }
    }
        if (flag == 0) {
            cout << "No such name found..... " << endl;
        }
}

int main() {
    student s[60];
    int n = 0, choice;
    system("cls");
    while(true) {
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Calculate Average Grade" << endl;
        cout << "4. Find Top Scorer" << endl;
        cout << "5. Search for a student" << endl;
        cout << "6. View Subject-wise Performance" << endl;
        cout << "7. Display Students with a Passing Grade" << endl;
        cout << "8. Update Student Information" << endl;
        cout << "9. Delete a Student" << endl;
        cout << "10. Save Student Details to File" << endl;
        cout << "11. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice){
        case 1:
            s[n].add_student();
            n++;
            cout << "Record added successfully...." << endl;
            break;
        case 2:
            if (n > 0) {
                heading();
                for (int i = 0; i < n; i++) {
                    s[i].heading_data();
                }
            } else {
                cout << "Nothing To Display..." << endl;
            }
            break;
        case 3:
            average(s,n);
            break;
        case 4:
            display_TopScorer(s,n);
            break;
        case 5:
            Search_for_a_student(s,n);
            break;
        case 6:
        {
            student students;
            students.subject_wise_performance(s,n);
           }
           break;
        case 7:
            passing_student(s,n);
            break;
        case 8:
            {
            student record;
            record.update_student_record(s,n);
           }
            break;
        case 9:
            delete_record(s,n);
            break;
        case 10:
            {
            student save;
            save.save_to_file(s,n);
            }
        break;
        case 11:
            cout<<"..................... Program is exited ...................."<<endl;
            return false;
        default:
            cout << ".....Invalid Choice....." << endl;
        }
    }
}