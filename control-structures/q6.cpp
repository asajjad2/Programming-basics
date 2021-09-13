//Areeb Sajjad - 20I0904 - Assignment 2
#include <iostream>
using namespace std;
int main()
{
    int scenesafe, patientstable, hazardelimination, patient_movement;
    cout << "Is the scene safe?\n enter 1 for yes or 0 for no\n";
    cin >> scenesafe;
    switch (scenesafe)
    {
        case 1:

            cout << "***assessing the patient*** \n ***conducting primary survey*** \n ***providing critical intervention***\n";
            cout << "Is the patient stable now?\n enter 1 for yes or 0 for no\n";
            cin >> patientstable;
            switch (patientstable)
            {
                case 1:
                    cout << "***Taking patient history***\n***checking all vitals***\n***reassessing patient’s condition***\n";
                    cout << "***Beginning transport***\n ***Pulling insurance details***\n ***treating*** \n ***handing patient over to higher level of care***\n";
                    break;
                case 0:
                    cout << "***take patient history***\n***Pulling insurance details***\n***transport***\n";
                    cout << "***checking vitals***\n***reassessing patient’s condition***\n***treating***\n";
                    cout << "***handing patient over to higher level of care***";
                    break;
                default:
                    cout<< "Invalid input\n";
                    break;
            }

            break;
        case 0:

            cout << "Eliminating hazards\n";
            cout << "Is the hazard eliminated?\n enter 1 for yes or 0 for no\n";
            cin >> hazardelimination;
            switch (hazardelimination)
            {
                case 1:
                    {
                    cout << "***assessing the patient*** \n ***conducting primary survey*** \n ***providing critical intervention***\n";
                    cout << "Is the patient stable now?\n enter 1 for yes or 0 for no\n";
                    cin >> patientstable;
                    switch (patientstable)
                    {
                        case 1:
                            cout << "***Taking patient history***\n***checking all vitals***\n***reassessing patient’s condition***\n";
                            cout << "***Beginning transport***\n ***Pulling insurance details***\n ***treating*** \n ***handing patient over to higher level of care***\n";
                            break;
                        case 0:
                            cout << "***take patient history***\n***Pulling insurance details***\n***transport***\n";
                            cout << "***checking vitals***\n***reassessing patient’s condition***\n***treating***\n";
                            cout << "***handing patient over to higher level of care***";
                            break;
                        default:
                            cout<< "Invalid input\n";
                            break;
                    }
                    }
                    break;
                case 0:
                    {
                    cout << "Remove patient from hazards\n";
                    cout << "Has the patient been removed safely?\n enter 1 for yes or 0 for no\n";
                    cin >>  patient_movement;
                    switch(patient_movement)
                    {
                        case 1:
                            cout << "***assessing the patient*** \n ***conducting primary survey*** \n ***providing critical intervention***\n";
                            cout << "Is the patient stable now?\n enter 1 for yes or 0 for no\n";
                            cin >> patientstable;
                            switch (patientstable)
                            {
                                case 1:
                                    cout << "***Taking patient history***\n***checking all vitals***\n***reassessing patient’s condition***\n";
                                    cout << "***Beginning transport***\n ***Pulling insurance details***\n ***treating*** \n ***handing patient over to higher level of care***\n";
                                    break;
                                case 0:
                                    cout << "***take patient history***\n***Pulling insurance details***\n***transport***\n";
                                    cout << "***checking vitals***\n***reassessing patient’s condition***\n***treating***\n";
                                    cout << "***handing patient over to higher level of care***";
                                    break;
                                default:
                                    cout<< "Invalid input\n";
                                    break;
                            }
                            break;
                        case 0:
                            cout << "call for and await backup to make the scene safe.\n";
                            cout << "***assessing the patient*** \n ***conducting primary survey*** \n ***providing critical intervention***\n";
                            cout << "Is the patient stable now?\n enter 1 for yes or 0 for no\n";
                            cin >> patientstable;
                            switch (patientstable)
                            {
                                case 1:
                                    cout << "***Taking patient history***\n***checking all vitals***\n***reassessing patient’s condition***\n";
                                    cout << "***Beginning transport***\n ***Pulling insurance details***\n ***treating*** \n ***handing patient over to higher level of care***\n";
                                    break;
                                case 0:
                                    cout << "***take patient history***\n***Pulling insurance details***\n***transport***\n";
                                    cout << "***checking vitals***\n***reassessing patient’s condition***\n***treating***\n";
                                    cout << "***handing patient over to higher level of care***";
                                    break;
                                default:
                                    cout<< "Invalid input\n";
                                    break;
                            }
                            break;
                        default:
                            cout << "Invalid input\n";
                            break;
                        }
                        }
                    break;
                default:
                    cout << "Invalid input\n";
                    break;
            }
            break;
        default:
            cout<< "Invalid input\n";
            break;

    }
    return 0;
}
