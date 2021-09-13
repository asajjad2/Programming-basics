//Areeb Sajjad - 20I0904 - Assignment 2

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;
int main()
{
    int ctgmenu,ctgfood,ctgburger,ctgroll,ctgPfood,bill,discount;//ctg for category
    char orderagain;
    cout << "************welcome to our menu***************\n";
    cout << "Press 0 to select TAKEAWAY\n";
    cout << "Press 1 to select DINE IN\n";
    cout << "press 2 to select DELIVERY\n";
    cout << "which category do you want to choose:\n";
    cin >> ctgmenu;
    switch (ctgmenu)
    {
        case 0:
            cout << "***********welcome to takeaway menu***************\n ";
            cout << "_____PRESS 0 FOR BURGER_____\n";
            cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
            cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
            cout << "which category do you want to choose:\n";
            cin >> ctgfood;
            switch (ctgfood)
            {
                case 0:
                    cout << "Select burger type:\n";
                    cout << "1) Mack___________699\n";
                    cout << "2) Zinger___________599\n";
                    cout << "3) Hot___________449\n";
                    cout << "4) Patty Burger___________699\n";
                    cin >> ctgburger;
                    switch (ctgburger)
                    {
                        case 1:
                            bill = 699;
                            break;
                        case 2:
                            bill = 599;
                            break;
                        case 3:
                            bill = 449;
                            break;
                        case 4:
                            bill = 699;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                case 1:
                    cout << "Select paratha roll type:\n";
                    cout << "1) platter___________299\n";
                    cout << "2) cheese___________349\n";
                    cout << "3) crispy___________399\n";
                    cout << "4) double trouble___________699\n";
                    cin >> ctgroll;
                    switch (ctgroll)
                    {
                        case 1:
                            bill = 299;
                            break;
                        case 2:
                            bill = 349;
                            break;
                        case 3:
                            bill = 399;
                            break;
                        case 4:
                            bill = 699;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                case 2:
                    cout << "Select Pakistani food type:\n";
                    cout << "1) Haleem___________199\n";
                    cout << "2) Nihaari___________199\n";
                    cout << "3) Daal___________149\n";
                    cout << "4) Ghosht___________249\n";
                    cin >> ctgPfood;
                    switch (ctgPfood)
                    {
                        case 1:
                            bill = 199;
                            break;
                        case 2:
                            bill = 199;
                            break;
                        case 3:
                            bill = 149;
                            break;
                        case 4:
                            bill = 249;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                default:
                    bill = 0;
                    cout << "Sorry that is not an option\n";
                    break;
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to takeaway menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to takeaway menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to takeaway menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to takeaway menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;

                }
            }
            break;
        case 1:
            cout << "***********welcome to DINE IN menu***************\n ";
            cout << "_____PRESS 0 FOR BURGER_____\n";
            cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
            cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
            cout << "which category do you want to choose:\n";
            cin >> ctgfood;
            switch (ctgfood)
            {
                case 0:
                    cout << "Select burger type:\n";
                    cout << "1) Mack___________699\n";
                    cout << "2) Zinger___________599\n";
                    cout << "3) Hot___________449\n";
                    cout << "4) Patty Burger___________699\n";
                    cin >> ctgburger;
                    switch (ctgburger)
                    {
                        case 1:
                            bill = 699;
                            break;
                        case 2:
                            bill = 599;
                            break;
                        case 3:
                            bill = 449;
                            break;
                        case 4:
                            bill = 699;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                case 1:
                    cout << "Select paratha roll type:\n";
                    cout << "1) platter___________299\n";
                    cout << "2) cheese___________349\n";
                    cout << "3) crispy___________399\n";
                    cout << "4) double trouble___________699\n";
                    cin >> ctgroll;
                    switch (ctgroll)
                    {
                        case 1:
                            bill = 299;
                            break;
                        case 2:
                            bill = 349;
                            break;
                        case 3:
                            bill = 399;
                            break;
                        case 4:
                            bill = 699;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                case 2:
                    cout << "Select Pakistani food type:\n";
                    cout << "1) Haleem___________199\n";
                    cout << "2) Nihaari___________199\n";
                    cout << "3) Daal___________149\n";
                    cout << "4) Ghosht___________249\n";
                    cin >> ctgPfood;
                    switch (ctgPfood)
                    {
                        case 1:
                            bill = 199;
                            break;
                        case 2:
                            bill = 199;
                            break;
                        case 3:
                            bill = 149;
                            break;
                        case 4:
                            bill = 249;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                default:
                    bill = 0;
                    cout << "Sorry that is not an option\n";
                    break;
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DINE IN menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DINE IN menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DINE IN menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DINE IN menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;

                }

            }
            break;
        case 2:
            cout << "***********welcome to DELIVERY menu***************\n ";
            cout << "_____PRESS 0 FOR BURGER_____\n";
            cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
            cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
            cout << "which category do you want to choose:\n";
            cin >> ctgfood;
            switch (ctgfood)
            {
                case 0:
                    cout << "Select burger type:\n";
                    cout << "1) Mack___________699\n";
                    cout << "2) Zinger___________599\n";
                    cout << "3) Hot___________449\n";
                    cout << "4) Patty Burger___________699\n";
                    cin >> ctgburger;
                    switch (ctgburger)
                    {
                        case 1:
                            bill = 699;
                            break;
                        case 2:
                            bill = 599;
                            break;
                        case 3:
                            bill = 449;
                            break;
                        case 4:
                            bill = 699;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                case 1:
                    cout << "Select paratha roll type:\n";
                    cout << "1) platter___________299\n";
                    cout << "2) cheese___________349\n";
                    cout << "3) crispy___________399\n";
                    cout << "4) double trouble___________699\n";
                    cin >> ctgroll;
                    switch (ctgroll)
                    {
                        case 1:
                            bill = 299;
                            break;
                        case 2:
                            bill = 349;
                            break;
                        case 3:
                            bill = 399;
                            break;
                        case 4:
                            bill = 699;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                case 2:
                    cout << "Select Pakistani food type:\n";
                    cout << "1) Haleem___________199\n";
                    cout << "2) Nihaari___________199\n";
                    cout << "3) Daal___________149\n";
                    cout << "4) Ghosht___________249\n";
                    cin >> ctgPfood;
                    switch (ctgPfood)
                    {
                        case 1:
                            bill = 199;
                            break;
                        case 2:
                            bill = 199;
                            break;
                        case 3:
                            bill = 149;
                            break;
                        case 4:
                            bill = 249;
                            break;
                        default:
                            bill = 0;
                            cout << "Sorry that is not an option\n";
                            break;
                    }
                    break;
                default:
                    bill = 0;
                    cout << "Sorry that is not an option\n";
                    break;
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DELIVERY menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DELIVERY menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DELIVERY menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;
                }
            }
            cout << "Would you like to add more items to your order?\n reply with Y or N\n";
            cin >> orderagain;
            if (orderagain == 'Y')
            {
                cout << "***********welcome to DELIVERY menu***************\n ";
                cout << "_____PRESS 0 FOR BURGER_____\n";
                cout << "_____PRESS 1 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 2 FOR PAKISTANI FOOD _____\n";
                cout << "which category do you want to choose:\n";
                cin >> ctgfood;
                switch (ctgfood)
                {
                    case 0:
                        cout << "Select burger type:\n";
                        cout << "1) Mack___________699\n";
                        cout << "2) Zinger___________599\n";
                        cout << "3) Hot___________449\n";
                        cout << "4) Patty Burger___________699\n";
                        cin >> ctgburger;
                        switch (ctgburger)
                        {
                            case 1:
                                bill += 699;
                                break;
                            case 2:
                                bill += 599;
                                break;
                            case 3:
                                bill += 449;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 1:
                        cout << "Select paratha roll type:\n";
                        cout << "1) platter___________299\n";
                        cout << "2) cheese___________349\n";
                        cout << "3) crispy___________399\n";
                        cout << "4) double trouble___________699\n";
                        cin >> ctgroll;
                        switch (ctgroll)
                        {
                            case 1:
                                bill += 299;
                                break;
                            case 2:
                                bill += 349;
                                break;
                            case 3:
                                bill += 399;
                                break;
                            case 4:
                                bill += 699;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    case 2:
                        cout << "Select Pakistani food type:\n";
                        cout << "1) Haleem___________199\n";
                        cout << "2) Nihaari___________199\n";
                        cout << "3) Daal___________149\n";
                        cout << "4) Ghosht___________249\n";
                        cin >> ctgPfood;
                        switch (ctgPfood)
                        {
                            case 1:
                                bill += 199;
                                break;
                            case 2:
                                bill += 199;
                                break;
                            case 3:
                                bill += 149;
                                break;
                            case 4:
                                bill += 249;
                                break;
                            default:
                                bill += 0;
                                cout << "Sorry that is not an option\n";
                                break;
                        }
                        break;
                    default:
                        bill += 0;
                        cout << "Sorry that is not an option\n";
                        break;

                }
            }
            break;
        default:
            exit(0);
            break;
    }
    if (bill<=1000 && bill>=0)
        discount = 0.05*bill;
    else if (bill<=1500 && bill>1000)
        discount = 0.1*bill;
    else if (bill<=2000 && bill>1500)
        discount = 0.15*bill;
    else if (bill<=2500 && bill>2000)
        discount = 0.2*bill;
    else if (bill<=3000 && bill>2500)
        discount = 0.3*bill;
    else
        discount = 0.5*bill;
    cout << "Your bill is " << bill << "$ and your discount is " << discount << "$\n";
    cout << "Your discounted bill is " << bill-discount << "$\n";
    return 0;
}
