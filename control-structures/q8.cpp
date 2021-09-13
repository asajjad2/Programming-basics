//Areeb Sajjad - 20I0904 - Assignment 2
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int option_query, option_stream,option_subject,degree,alumni_kind;
    double percentage1, percentage2,min_marks_overall,min_marks_degree,obtained1,obtained2,total1,total2,add_math_obtained, add_math_total, add_math_percentage;
    char alumni;
    cout << "Do you want to enquire about:\n 1.eligibility of admission\n 2.scholarships\n";
    cin >> option_query;
    if (option_query == 1 || option_query == 2)
    {
        if(option_query==1)
        {
            cout << "Which educational system do you belong to:\n 1. O/A level\n 2.Matric/FSC\n";
            cin >> option_stream;
            if(option_stream==1)
            {
                cout << "Please enter Olevel total and obtained marks respectively.\n";
                cin >> total1;
                cin >> obtained1;
                percentage1 = obtained1/total1;
                cout << "Please enter Alevel total and obtained marks respectively.\n";
                cin >> total2;
                cin >> obtained2;
                percentage2 = obtained2/total2;
            }
            else if(option_stream==2)
            {
                cout << "Please enter Matric total and obtained marks respectively.\n";
                cin >> total1;
                cin >> obtained1;
                percentage1 = obtained1/total1;
                cout << "Please enter FSC total and obtained marks respectively.\n";
                cin >> total2;
                cin >> obtained2;
                percentage2 = obtained2/total2;
            }
            else
            {
                cout << "Incorrect option\n";
            }
            if(((percentage1*15)+(percentage2*35))> 24.9)
            {
                cout << "Do you belong to Pre-medical or Pre-engineering?\n 1.Pre-Medical\n 2.Pre-engineering\n";
                cin >> option_subject;
                if (option_subject == 1)
                {
                    cout << "What were you obtained and total marks in add-math exam?\n";
                    cin >> add_math_obtained;
                    cin >> add_math_total;
                    add_math_percentage = add_math_obtained/add_math_total;
                    if (add_math_percentage*100>=50)
                    {
                        cout << "You are eligible for admission.\n";
                        min_marks_overall = ((75-(15*percentage1)-(35*percentage2))*5);
                        cout << "The minimum marks you require to get admitted to our university are " << min_marks_overall << endl;
                        cout << "You are eligible for admission.\n";
                    	cout << "ID" << setw(15) << "Degree" << setw(30) << "Merit\n";
                    	cout << "1" << setw(25) << "BS Software Eng" << setw(19) << "79%\n";
                    	cout << "2" << setw(29) <<"BS Computer Science" << setw(15) << "80%\n";
                    	cout << "3" << setw(36) << "BS Artificial intelligence" << setw(8) << "75%\n";
                    	cout << "4" << setw(26) << "BS Data Sciences" << setw(18) << "76%\n";
                    	cout << "5" << setw(27) << "BS Cyber Security" << setw(17) << "77%\n";
                    	cout << "6" << setw(35) << "BS Electrical Engineering" << setw(9) << "76%\n";
                        cout << "Which degree are you interested in? Please enter the corresponding ID.\n";
                        cin >> degree;
                        if(degree==1)
                        {
                            min_marks_degree= ((79-(15*percentage1)-(35*percentage2))*5);
                            cout << "To get admiited into BS Software Eng, you need atleast " << min_marks_degree << " in the university admission test.\n";
                        }
                        else if(degree==2)
                        {
                            min_marks_degree= ((80-(15*percentage1)-(35*percentage2))*5);
                            cout << "To get admiited into BS Computer Science, you need atleast " << min_marks_degree << " in the university admission test.\n";
                        }
                        else if(degree==3)
                        {
                            min_marks_degree= ((75-(15*percentage1)-(35*percentage2))*5);
                            cout << "To get admiited into BS Artificial intelligence, you need atleast " << min_marks_degree << " in the university admission test.\n";
                        }
                        else if(degree==4)
                        {
                            min_marks_degree= ((76-(15*percentage1)-(35*percentage2))*5);
                            cout << "To get admiited into BS Data Sciences, you need atleast " << min_marks_degree << " in the university admission test.\n";
                        }
                        else if(degree==5)
                        {
                            min_marks_degree= ((77-(15*percentage1)-(35*percentage2))*5);
                            cout << "To get admiited into BS Cyber Security, you need atleast " << min_marks_degree << " in the university admission test.\n";
                        }
                        else if(degree==6)
                        {
                            min_marks_degree= ((76-(15*percentage1)-(35*percentage2))*5);
                            cout << "To get admiited into BS Electrical Engineering, you need atleast " << min_marks_degree << " in the university admission test.\n";
                        }
                        else
                        {
                            cout << "Incorrect option\n";
                        }
                    }
                    else
                    {
                        cout << "You are not eligible for admission.\n";
                    }
                }
                if (option_subject == 2)
                {
                    cout << "You are eligible for admission.\n";
                    min_marks_overall = ((75-(15*percentage1)-(35*percentage2))*5);
                    cout << "The minimum marks you require to get admitted to our university are " << min_marks_overall << endl;
                    cout << "You are eligible for admission.\n";
                    cout << "ID" << setw(15) << "Degree" << setw(30) << "Merit\n";
                    cout << "1" << setw(25) << "BS Software Eng" << setw(19) << "79%\n";
                    cout << "2" << setw(29) <<"BS Computer Science" << setw(15) << "80%\n";
                    cout << "3" << setw(36) << "BS Artificial intelligence" << setw(8) << "75%\n";
                    cout << "4" << setw(26) << "BS Data Sciences" << setw(18) << "76%\n";
                    cout << "5" << setw(27) << "BS Cyber Security" << setw(17) << "77%\n";
                    cout << "6" << setw(35) << "BS Electrical Engineering" << setw(9) << "76%\n";
                    cout << "Which degree are you interested in? Please enter the corresponding ID.\n";
                    cin >> degree;
                    if(degree==1)
                    {
                        min_marks_degree= ((79-(15*percentage1)-(35*percentage2))*5);
                        cout << "To get admiited into BS Software Eng, you need atleast " << min_marks_degree << " in the university admission test.\n";
                    }
                    else if(degree==2)
                    {
                        min_marks_degree= ((80-(15*percentage1)-(35*percentage2))*5);
                        cout << "To get admiited into BS Computer Science, you need atleast " << min_marks_degree << " in the university admission test.\n";
                    }
                    else if(degree==3)
                    {
                        min_marks_degree= ((75-(15*percentage1)-(35*percentage2))*5);
                        cout << "To get admiited into BS Artificial intelligence, you need atleast " << min_marks_degree << " in the university admission test.\n";
                    }
                    else if(degree==4)
                    {
                        min_marks_degree= ((76-(15*percentage1)-(35*percentage2))*5);
                        cout << "To get admiited into BS Data Sciences, you need atleast " << min_marks_degree << " in the university admission test.\n";
                    }
                    else if(degree==5)
                    {
                        min_marks_degree= ((77-(15*percentage1)-(35*percentage2))*5);
                        cout << "To get admiited into BS Cyber Security, you need atleast " << min_marks_degree << " in the university admission test.\n";
                    }
                    else if(degree==6)
                    {
                        min_marks_degree= ((76-(15*percentage1)-(35*percentage2))*5);
                        cout << "To get admiited into BS Electrical Engineering, you need atleast " << min_marks_degree << " in the university admission test.\n";
                    }
                    else
                    {
                        cout << "Incorrect option\n";
                    }
                }
                else
                {
                    cout << "Incorrect option\n";
                }
            }
            else
            {
                cout << "You are not eligible for admission.\n";
            }
        }
        if (option_query==2)
        {
            cout << "Which educational system do you belong to?\n 1.O/Alevel\n 2.Matric/FSC\n";
            cin >> option_stream;
            cout << "Is any of your family-member a FAST-NUCES alumni?\n Y for Yes, N for No\n";
            cin >> alumni;
            if (option_stream==1)
            {
                cout << "Please enter Olevel total and obtained marks respectively.\n";
                cin >> total1;
                cin >> obtained1;
                percentage1 = obtained1/total1;
                cout << "Please enter Alevel total and obtained marks respectively.\n";
                cin >> total2;
                cin >> obtained2;
                percentage2 = obtained2/total2;
            }
            else if (option_stream==2)
            {
                cout << "Please enter Matric total and obtained marks respectively.\n";
                cin >> total1;
                cin >> obtained1;
                percentage1 = obtained1/total1;
                cout << "Please enter FSC total and obtained marks respectively.\n";
                cin >> total2;
                cin >> obtained2;
                percentage2 = obtained2/total2;
            }
            else
                cout << "Incorrect option.\n";
            if (alumni = 'Y')
            {
                cout << "Is the alumni your sibling/parent or your relative?\n Press\n 1. for sibling/parent\n 2. for relative\n";
                cin >> alumni_kind;
                if (alumni_kind==1)
                    cout << "You are eligible for 20% Alumni-Scholarship.\n";
                else if (alumni_kind==2)
                    cout << "You are eligible for 10% Alumni-Scholarship.\n";
                else
                {
                    cout << "Incorrect option.\n";
                }
            }
            if(percentage2>=90)
                cout << "You are eligible for 30% scholarship based on your FSC/Alevel marks.\n";
            else if(percentage2>=90)
                cout << "You are eligible for 10% scholarship based on your Matric/Olevel marks.\n";
            else
            {
                cout << "You are not eligible for any merit-based scholarships available right now.\n";
            }
            cout << "NOTE: if you are eligible for more than 1 scholarship, you will recieve the greater one from among those.\n";
        }

    }
    else
    {
        cout << "Incorrect option\n";
    }


    return 0;
}
