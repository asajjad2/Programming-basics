#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main()
{
    int bun_type,cheese_type,burger_body,add_ons,sauce;
    float bill=0;
    char decesion_cheese,decesion_addons,decesion_sauce;
    cout << "\t\t\t\tYour Creation In 5 Simple Steps\n";
    cout << "| " << "1. Choose Your Bun" << " | " << "2. Make It Cheesy" << " | " << "3. Turn Up The Taste";
    cout << " | " << "4. Fresh'N It Up" << " | " <<"5. Get Saucy" << " |" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(18) << "TOASTED BRIOCHE" << setw(3) << "|" << setw(13) << "CHEDDER" << setw(7) << "|" << setw(17) << "BASHER BACON" << setw(6) <<"|";
    cout << setw(15) << "WHOLE LEAF" << setw(4) << "|" << setw(11) << "KETCHUP" << setw(4) << "|" <<endl;
    cout << "|" << setw(15) << "-STYLED BUN" << setw (6) << "|" << setw(12) << "-CHEESE" << setw(8) << "|" << setw(17) << "CRISPY BACON" << setw(6) << "|";
    cout << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(16) << "BAKER'S BUN" << setw(5) << "|" << setw(16) << "SWISS CHEESE" << setw(4) <<"|" << setw(13) << "EGG" << setw(10) << "|" << setw(12) << "TOMATO" << setw(7) << "|" << setw(12) << "CHILLI JAM" << setw(3) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(15) << "NO BUN -" << setw(6) << "|" << setw(16) << "COLBY JACK-" << setw(4) << "|" << setw(17) << "113g AGNUS-" << setw(6) << "|" << setw(17) << "CARAMALISED GRI-" << setw(2)<<"|";
    cout << setw(9) << "BBQ" << setw(6) << "|"<< endl;
    cout <<"|" << setw(16) << "LETTUCE WRAP" << setw(5) << "|" << setw(13) << "CHEESE" << setw(7) << "|" << setw(16) << "BEEF PATTY" << setw(7) << "|" << setw(15) << "LLED ONIONS" << setw(4) << "|" << setw(15) << "|"<< endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(22) << "| "<< setw(14) << "McDONALD's" << setw(5) << "|" << setw(15) << "GUACAMOLE" <<setw(8) << "|"<< setw(9)<< setw(16) << "SLICE BEETROOT" << setw(3) << "|" << setw(12) << "MAYONNAISE" << setw(3) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(13) << "-CHEESE" << setw(7) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" <<setw(21)<< "|" << setw(17) << "SHAVED PARMESAN" << setw(3) << "|" << setw(19) << "TORTILLA STRIPS" << setw(4) << "|" << setw(14) << "RED ONION" << setw(5) << "|" << setw(4) << "BIG MAC SPEC-" << setw(2) << "|"<<endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(12) << "IAL SAUCE" << setw(3) << "|"<<endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(16) << "GRILLED-" << setw(7) << "|" << setw(16) << "LONG SLICED-" << setw(3) << "|"<< setw(10) << "AIOLI" << setw(5) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(16) << "MUSHROOMS" << setw(7) << "|"<< setw(13) << "PICKLE" << setw(6) << "|" <<setw(15) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(16) << "GRILLED-" << setw(7) << "|" << setw(14) << "JALAPENOS" << setw(5) << "|" << setw(12) << "HERB AIOLI" << setw(3) << "|"<<endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(16) << "PINEAPPLE" << setw(7) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(15) << "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(11) <<"CHIPOTLE" << setw(4)<< "|" << endl;
    cout << "|" << setw(21) << "|" << setw(20) << "|" << setw(23) << "|" << setw(19) << "|" << setw(9) << "MAYO" << setw(6) << "|" << endl;
    cout << "\n\n";
    cout << "Please input the corresponding number of Bun type you want to choose\n";
    cin >> bun_type;
    switch (bun_type)
    {
        case 1:
            bill+=.72;
            break;
        case 2:
            bill+=.72;
            break;
        case 3:
            bill+=.72;
            break;
        default:
            cout << "You have to choose a bun-type, please try again.\n";
            exit(0);
            break;
    }
    cout << "Please input the corresponding number of Cheese-type you want to choose\n";
    cin >> cheese_type;
    switch (cheese_type)
    {
        case 0:
            break;
        case 1:
            bill+=0.5;
            break;
        case 2:
            bill+=0.5;
            break;
        case 3:
            bill+=0.5;
            break;
        case 4:
            bill+=0.5;
            break;
        case 5:
            bill+=0.5;
            break;
        default:
            cout << "Invalid Input\n";
            break;
    }
    cout << "Would you like to add another cheese?\n Y for yes and N for no\n";
    cin >> decesion_cheese;
    switch (decesion_cheese)
    {
        case 'Y':
            cout << "Please input the corresponding number of Cheese-type you want to choose\n";
            cin >> cheese_type;
            switch (cheese_type)
            {
            case 0:
                break;
            case 1:
                bill+=0.5;
                break;
            case 2:
                bill+=0.5;
                break;
            case 3:
                bill+=0.5;
                break;
            case 4:
                bill+=0.5;
                break;
            case 5:
                bill+=0.5;
                break;
            default:
                bill+=0;
                break;
            }
            break;
        case 'N':
            bill+=0;
            break;
        default :
            cout << "Invalid input\n";
    }
    cout << "Please input the corresponding number of the item you want to choose from 'Turn Up The Taste'\n";
    cin >> burger_body;
    switch (burger_body)
    {
        case 1:
            bill+=1.2;
            break;
        case 2:
            bill+=1.2;
            break;
        case 3:
            bill+=1.2;
            break;
        case 4:
            bill+=1.2;
            break;
        case 5:
            bill+=1.2;
            break;
        case 6:
            bill+=1.2;
            break;
        case 7:
            bill+=1.2;
            break;
        case 8:
            bill+=1.2;
            break;
        default:
            cout << "You have to choose one of the items from this list, please try again.\n";
            exit(0);
    }
    cout << "Please input the corresponding number of add-on you want to choose\n";
    cin >> add_ons;
    switch(add_ons)
    {
        case 0:
            bill+=0;
            break;
        case 1:
            bill+=0.2;
            break;
        case 2:
            bill+=0.2;
            break;
        case 3:
            bill+=0.2;
            break;
        case 4:
            bill+=0.2;
            break;
        case 5:
            bill+=0.2;
            break;
        case 6:
            bill+=0.2;
            break;
        case 7:
            bill+=0.2;
            break;
        default:
            cout << "Invalid input\n";
            break;
    }
    cout << "Would you like to add more add-ons?\n Y for yes and N for no\n";
    cin >> decesion_addons;
    switch (decesion_addons)
    {
        case 'Y':
            cout << "Please input the corresponding number of add-on you want to choose\n";
            cin >> add_ons;
            switch(add_ons)
            {
                case 0:
                    bill+=0;
                    break;
                case 1:
                    bill+=0.2;
                    break;
                case 2:
                    bill+=0.2;
                    break;
                case 3:
                    bill+=0.2;
                    break;
                case 4:
                    bill+=0.2;
                    break;
                case 5:
                    bill+=0.2;
                    break;
                case 6:
                    bill+=0.2;
                    break;
                case 7:
                    bill+=0.2;
                    break;
                default:
                    cout << "Invalid input\n";
                    break;
            }
            break;
        case 'N':
            bill+=0;
            break;
        default:
            bill+=0;
            break;
    }
    cout << "Would you like to add more add-ons?\n Y for yes and N for no\n";
    cin >> decesion_addons;
    switch (decesion_addons)
    {
        case 'Y':
            cout << "Please input the corresponding number of add-on you want to choose\n";
            cin >> add_ons;
            switch(add_ons)
            {
                case 0:
                    bill+=0;
                    break;
                case 1:
                    bill+=0.2;
                    break;
                case 2:
                    bill+=0.2;
                    break;
                case 3:
                    bill+=0.2;
                    break;
                case 4:
                    bill+=0.2;
                    break;
                case 5:
                    bill+=0.2;
                    break;
                case 6:
                    bill+=0.2;
                    break;
                case 7:
                    bill+=0.2;
                    break;
                default:
                    cout << "Invalid input\n";
                    break;
            }
            break;
        case 'N':
            bill+=0;
            break;
        default:
            bill+=0;
            break;
    }
    cout << "Please input the corresponding number of the sauce you want to choose from the menu\n";
    cin >> sauce;
    switch (sauce)
    {
        case 0:
            bill+=0;
            break;
        case 1:
            bill+=0.3;
            break;
        case 2:
            bill+=0.3;
            break;
        case 3:
            bill+=0.3;
            break;
        case 4:
            bill+=0.3;
            break;
        case 5:
            bill+=0.3;
            break;
        case 6:
            bill+=0.3;
            break;
        case 7:
            bill+=0.3;
            break;
        case 8:
            bill+=0.3;
            break;
        default:
            cout << "Invalid Input.\n";
    }
    cout << "Would you like to add more sauces?\n Y for yes and N for no\n";
    cin >> decesion_sauce;
    switch (decesion_sauce)
    {
        case 'Y':
            cout << "Please input the corresponding number of the sauce you want to choose from the menu\n";
            cin >> sauce;
            switch (sauce)
            {
                case 0:
                    bill+=0;
                    break;
                case 1:
                    bill+=0.3;
                    break;
                case 2:
                    bill+=0.3;
                    break;
                case 3:
                    bill+=0.3;
                    break;
                case 4:
                    bill+=0.3;
                    break;
                case 5:
                    bill+=0.3;
                    break;
                case 6:
                    bill+=0.3;
                    break;
                case 7:
                    bill+=0.3;
                    break;
                case 8:
                    bill+=0.3;
                    break;
                default:
                    cout << "Invalid Input.\n";
            }
            break;
        case 'N':
            bill+=0;
            break;
        default:
            cout << "Invalid Input\n";
            break;
    }
    cout << "Would you like to add more sauces?\n Y for yes and N for no\n";
    cin >> decesion_sauce;
    switch (decesion_sauce)
    {
        case 'Y':
            cout << "Please input the corresponding number of the sauce you want to choose from the menu\n";
            cin >> sauce;
            switch (sauce)
            {
                case 0:
                    bill+=0;
                    break;
                case 1:
                    bill+=0.3;
                    break;
                case 2:
                    bill+=0.3;
                    break;
                case 3:
                    bill+=0.3;
                    break;
                case 4:
                    bill+=0.3;
                    break;
                case 5:
                    bill+=0.3;
                    break;
                case 6:
                    bill+=0.3;
                    break;
                case 7:
                    bill+=0.3;
                    break;
                case 8:
                    bill+=0.3;
                    break;
                default:
                    cout << "Invalid Input.\n";
            }
            break;
        case 'N':
            bill+=0;
            break;
        default:
            cout << "Invalid Input\n";
            break;
    }
    cout << "Your total bill is " << bill << " dollars.\n";
    return 0;
}
