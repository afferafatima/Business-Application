#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
using namespace std;
//..........User name and password.......
const int arraysize = 5;     // Constant for users that verification
string users[arraysize];     // username
string Passwords[arraysize]; // password
int count = 2;
/*CATEGORIES*/
int categories_idx = 7;
string categories[15] = {"MobilePhones", "MobileCovers", "Adopter", "DataCables", "USB's", "HeadPhones", "Powerbank"};
/*MOBILES*/
int mobiles_idx = 5;
string categories_Mobiles[10] = {"Iphone", "Samsung", "Huawei", "Oppo", "Vivo"};
int stock_Mobiles[10] = {5, 3, 3, 10, 12};
int price_Mobiles[10] = {2000000, 80000, 50000, 40000, 35000};
/*COVERS*/
int covers_idx = 5;
string categories_Covers[10] = {"IphoneCovers", "SamsungCovers", "HuaweiCovers", "OppoCovers", "VivoCovers"};
int stock_Covers[10] = {5, 3, 7, 6, 12};
int price_Covers[10] = {1000, 800, 500, 400, 350};
/*ADOPTERS*/
int adopters_idx = 4;
string categories_Adopters[10] = {"33WattAdopter", "20WattAdopter", "12WattAdopter", "5WattAdopter"};
int stock_Adopters[10] = {10, 8, 5, 4};
int price_Adopters[10] = {2500, 3, 1500, 1000};
/*CABLES*/
int cables_idx = 3;
string categories_Cables[10] = {"Micro_USB_DataCable", "Type_C_DataCable", "LightningDataCable"};
int stock_Cables[10] = {10, 8, 5};
int price_Cables[10] = {1000, 800, 1500};
/*USB'S*/
int USB_idx = 3;
string categories_USB[10] = {"128_GB_USB", "64_GB_USB", "32_GB_USB"};
int stock_USB[10] = {10, 8, 5};
int price_USB[10] = {1500, 1000, 500};
/*HEADPHONES*/
int headphone_idx = 3;
string categories_Headphones[10] = {"Airpods_Pro", "Wireless_headphones", "Earphones"};
int stock_Headphones[10] = {10, 8, 5};
int price_Headphones[10] = {25000, 10000, 1000};
/*POWERBANK*/
int powerbank_idx = 3;
string categories_Powerbank[10] = {"10000_MAH_powerbank", "6000_MAH_powerbank", "50000_MAH_Mpowerbank"};
int stock_Powerbank[10] = {10, 8, 5};
int price_Powerbank[10] = {8000, 5000, 3000};
/////////////////////////////////////////////////////////
int bill = 0;
/*FEEDBACK VARIABLES*/
int feedback_idx = 0;
string feedbackName[10];
string feedbackNumber[10];
string feedbackComment[10];
//
/*CART VARIABLES*/
string cartItem[100];
int cartItemPrice[100];
int cart_idx = 0;
// Customer;s Budget
string C_Name;
int C_Budget;
int budget_idx = 0;
// Attendance
string attendance = " ";
int attendance_update = 0;

void topHeader();
void mainHeader();
void clearScreen();
string mainMenu();       // Menu that shows users
bool O_identityCheck();  // it checks owner identity
string ownersMenu();     // owners menu
void O_changePassword(); // change password for employee
bool password_Check(string password);
void addEmployees();  // owner add employees
void viewEmployees(); // owner view employees
// void removeEmployees();
bool E_identityCheck(); // checks employees identity
bool checkEmployees(string username, string password);
string employeesMenu();
void E_changePassword();
void StockMobiles();
void StockHeadphone();
void StockPowerbank();
void StockUSB();
void StockCables();
void StockAdopters();
void StockCovers();
void productCategories();
void editStock();
void addStock();
void removeStock();
string customersMenu();
void O_feedback();
void C_feedback();
void restock_items();
void customersBudget();
string customerCategoriesMenu();
void addtoCart(string option);
void searchItems();
void viewCart();
void calculatebill();
void billStatus();
void viewBill();
void updateAttendance();
void employeesPay();

main()
{
    users[0] = "Afeera";
    Passwords[0] = "affera123";
    users[1] = "Laiba";
    Passwords[1] = "laiba123";
    while (true)
    {
        clearScreen();
        string option = mainMenu();
        if (option == "1")
        {

            clearScreen();
            bool check = O_identityCheck();

            if (check == true)
            {
                while (option true)
                {
                    clearScreen();
                    string option = ownersMenu();
                    if (option == "1")
                    {
                        clearScreen();
                        O_changePassword();
                    }
                    else if (option == "2")
                    {
                        clearScreen();
                        addEmployees();
                    }
                    else if (option == "3")
                    {
                        clearScreen();
                        viewEmployees();
                    }
                    else if (option == "4")
                    {
                        clearScreen();
                        restock_items();
                    }
                    else if (option == "5")
                    {
                        clearScreen();
                        productCategories();
                    }
                    else if (option == "6")
                    {
                        clearScreen();
                        employeesPay();
                    }
                    else if (option == "7")
                    {
                        clearScreen();
                        O_feedback();
                    }
                    else if (option == "8")
                    {
                        break;
                    }
                }
            }
        }
        else if (option == "2")
        {
            clearScreen();
            bool check = E_identityCheck();
            if (check == true)
            {
                while (option != "9")
                {
                    clearScreen();
                    string option = employeesMenu();
                    if (option == "1")
                    {
                        clearScreen();
                        E_changePassword();
                    }
                    if (option == "2")
                    {
                        clearScreen();
                        productCategories();
                    }
                    if (option == "3")
                    {
                        clearScreen();
                        editStock();
                    }
                    if (option == "4")
                    {
                        clearScreen();
                        addStock();
                    }
                    if (option == "5")
                    {
                        clearScreen();
                        removeStock();
                    }
                    if (option == "5")
                    {
                        clearScreen();
                        viewCart();
                    }
                    if (option == "7")
                    {
                        clearScreen();
                        updateAttendance();
                    }
                    if (option == "8")
                    {
                        clearScreen();
                        employeesPay();
                    }
                    if (option == "9")
                    {
                        break;
                    }
                }
            }
        }
        else if (option == "3")
        {
            while (true)
            {
                clearScreen();
                string option = customersMenu();
                if (option == "1")
                {
                    clearScreen();
                    customersBudget();
                }
                if (option == "2")
                {

                    clearScreen();
                    string option = customerCategoriesMenu();
                    addtoCart(option);
                    calculatebill();

                    cout << " Press any key to go back... ";
                    getch();
                }
                if (option == "3")
                {
                    clearScreen();
                    searchItems();
                }
                if (option == "4")
                {
                    clearScreen();
                    viewCart();
                }
                if (option == "5")
                {
                    clearScreen();
                    viewBill();
                }
                if (option == "6")
                {
                    clearScreen();
                    billStatus();
                }
                else if (option == "7")
                {
                    clearScreen();
                    C_feedback();
                }
                else if (option == "8")
                {
                    break;
                }
            }
        }
        else
        {
            break;
        }
    }
}
void mainHeader()
{
    cout << "\t\t@@@  @@@  @@@@  @@@@@  @@@@ @@     @@@@@@      @@@@@@ @@   @@  @@@@  @@@@@@         " << endl;
    cout << "\t\t@@ @@ @@ @@  @@ @@  @@  @@  @@     @@         @@      @@   @@ @@  @@ @@   @@        " << endl;
    cout << "\t\t@@ @  @@ @@  @@ @@@@@   @@  @@     @@@@@       @@@@@  @@@@@@@ @@  @@ @@@@@@         " << endl;
    cout << "\t\t@@    @@ @@  @@ @@  @@  @@  @@     @@              @@ @@   @@ @@  @@ @@             " << endl;
    cout << "\t\t@@    @@  @@@@  @@@@@  @@@@ @@@@@@ @@@@@@     @@@@@@  @@   @@  @@@@  @@             " << endl;
    cout << endl;
}
void topHeader()
{

    cout << "\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << "\t\t@@                                                                         @@" << endl;
    cout << "\t\t@@                       MOBILE SHOP MANAGEMENT SYSTEM                     @@" << endl;
    cout << "\t\t@@                                                                         @@" << endl;
    cout << "\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    cout << endl;
}
void clearScreen()
{
    system("cls");
    cout << "\33[32m";
    mainHeader();
    cout << "\33[32m";
    topHeader();
    Sleep(90);
    cout << "\33[37m";
}
string mainMenu()
{
    cout << "\t\t\t\t\t\tMAIN MENU " << endl
         << endl;
    string choice;
    cout << " Choose one of the following : " << endl;
    cout << endl;
    cout << " 1. Owner " << endl;
    cout << " 2. Employee" << endl;
    cout << " 3. Customer " << endl;
    cout << endl;
    cout << " Enter your choice : ";
    cin >> choice;
    return choice;
}
string ownersMenu()
{
    Sleep(90);

    cout << "\t\t\t\t\tOWNER'S MENU " << endl;
    string choice;
    cout << "Choose one of the following : " << endl;
    cout << endl;
    cout << " 1. Change Password " << endl;
    cout << " 2. Add Employees" << endl;
    cout << " 3. View Employees" << endl;
    cout << " 4. Restock Items" << endl;
    cout << " 5. Stock  details  " << endl;
    cout << " 6. Pay of Employees" << endl;
    cout << " 7. View Feedbacks" << endl;
    cout << " 8. Exit" << endl;
    cout << endl;
    cout << " Enter your choice : ";
    cin >> choice;
    return choice;
}
bool O_identityCheck()
{
    string username;
    string Password;

    cout << "\t\t\t\t\tPROVE YOUR IDENTITY " << endl
         << endl;
    cout << " Enter Username : ";
    cin >> username;
    cout << " Enter Password : ";
    cin >> Password;
    cout << endl;

    if (username == users[0] && Password == Passwords[0])
    {
        Sleep(90);
        cout << " Access Granted!!!" << endl;
        cout << endl;
        cout << " Press any key to continue!!!" << endl;
        getch();
        return true;
    }
    Sleep(90);
    cout << " Incorrect Password !!!" << endl;
    cout << endl;
    cout << " Press any key to continue!!!" << endl;
    getch();
    return false;
}
void O_changePassword()
{
    cout << "\t\t\t\t\tCHANGE PASSWORD " << endl
         << endl;
    string Password;
    cout << " Enter your Password : ";
    cin >> Password;
    if (Password == Passwords[0])
    {
        cout << " Password Matched!!!" << endl;
        cout << " Enter New Password : ";
        cin >> Password;
        bool valid = password_Check(Password);
        if (valid)
        {
            Passwords[0] = Password;
            cout << " Password Changed Successfully!!!" << endl;
        }
        else

        {
            cout << " Invalid Input!!!" << endl;
        }
    }
    else
    {
        cout << " Incorrect Password!!!" << endl;
    }
    cout << " Press any Key to go back!!!";
    getch();
}
bool password_Check(string Password)
{
    bool flag = false;
    int length = Password.length();
    int i = 0;
    while (i < length)
    {

        if ((Password[i] > 64 && Password[i] < 91) || (Password[i] > 96 && Password[i] < 123) || (Password[i] > 47 && Password[i] < 58))
        {
            i++;
        }
        else
        {
            return flag;
        }
    }
    if (i == length)
    {
        for (int i = 0; i < count; i++)
        {
            if (Password == Passwords[i])
            {
                return flag;
            }
        }
        flag = true;
    }
    return flag;
}
void addEmployees()
{
    string password;
    cout << "\t\t\t\t\tADD EMPLOYEE       " << endl
         << endl;
    cout << " Enter the username for Employee : ";
    cin >> users[count];
    cout << " Enter Password for Employee : ";
    cin >> password;
    bool check = password_Check(password);
    if (check == true)
    {
        Passwords[count] = password;
        count++;
        cout << " New Employee added Successfully!!!" << endl;
        cout << endl;
    }
    else
    {
        cout << " Invalid Password " << endl;
    }
    cout << " press any key to continue!!! ";
    getch();
}
void viewEmployees()
{
    cout << "\t\t\t\t\tEMPLOYEE'S LIST       " << endl
         << endl;
    cout << " Total Employees : " << count - 1 << endl;
    cout << endl;
    cout << " Employee's list is as follow : " << endl;
    for (int idx = 1; idx < count; idx++)
    {
        cout << " Employee " << idx << " :    " << users[idx] << endl;
    }
    cout << endl;
    cout << " Press any key to continue ...";
    getch();
}
bool E_identityCheck() // E symbolizes Employee
{
    bool flag;
    string username;
    string Password;
    cout << "\t\t\t\t\tPROVE YOUR IDENTITY " << endl
         << endl;
    cout << " Enter Username : ";
    cin >> username;
    cout << " Enter Password : ";
    cin >> Password;
    cout << endl;
    bool Check = checkEmployees(username, Password);
    if (Check == true)
    {
        flag = true;
        cout << " Access Granted!!!" << endl;
        cout << endl;
    }
    else
    {
        flag = false;
        cout << " Incorrect Password !!!"
             << endl;
    }

    Sleep(90);

    cout << " Press any key to continue!!!";
    getch();
    return flag;
}
void E_changePassword()
{
    bool flag = false;
    string username;
    string Password;
    cout << " Enter your username : ";
    cin >> username;
    cout << " Enter your Password : ";
    cin >> Password;
    bool check = checkEmployees(username, Password);

    if (check == true)
    {
        cout << " Password Matched!!!" << endl;
        cout << " Enter New Password : ";
        cin >> Password;
        bool valid = password_Check(Password);
        if (valid)
        {
            cout << " Password Changed Successfully!!!" << endl;
        }
        else if (!valid)
        {
            cout << " Invalid Input!!!" << endl;
        }
    }
    else
    {
        cout << " Incorrect Username or Password!!!" << endl;
    }
    cout << " Press any key to continue!!!";
    getch();
}
bool checkEmployees(string username, string password)
{
    bool flag = false;
    for (int idx = 0; idx < count; idx++)
    {
        if (username == users[idx] && password == Passwords[idx])
        {

            flag = true;
        }
    }

    return flag;
}
string employeesMenu()
{
    string choice;
    cout << "\t\t\t\tEMPLOYEES'S MENU " << endl;
    cout << "Choose one of the following : " << endl;
    cout << endl;
    cout << " 1. Change Password " << endl;
    cout << " 2. View Categories " << endl;
    cout << " 3. Edit Stock " << endl;
    cout << " 4. Add Subcategory " << endl;
    cout << " 5. Remove Stock " << endl;
    cout << " 6. View Daily Sale " << endl;
    cout << " 7. Update Attendance " << endl;
    cout << " 8. Pay    " << endl;
    cout << " 9. Exit   " << endl;
    cout << endl;
    cout << " Enter your choice : ";
    cin >> choice;
    return choice;
}
void productCategories()
{
a:
    clearScreen();
    cout << "\t\t\t\t\t PRODUCT CATEGORIES MENU " << endl;
    cout << endl;
    for (int idx = 0; idx < categories_idx; idx++)
    {
        cout << idx + 1 << ". " << categories[idx] << endl;
    }

    cout << "8. Exit" << endl;
    string option;
    cout << " Enter serial number if you want to view items in that category : ";
    cin >> option;
    if (option[0] > 48 && option[0] < 56)
    {
        if (option == "1")
        {
            clearScreen();
            StockMobiles();
        }
        else if (option == "2")
        {
            clearScreen();
            StockCovers();
        }
        else if (option == "3")
        {
            clearScreen();
            StockAdopters();
        }
        else if (option == "4")
        {
            clearScreen();
            StockCables();
        }
        else if (option == "5")
        {
            clearScreen();
            StockUSB();
        }
        else if (option == "6")
        {
            clearScreen();
            StockHeadphone();
        }
        else if (option == "7")
        {
            clearScreen();
            StockHeadphone();
        }
        string option;
        cout << endl;
        cout << " Press 1 to view Categories again or any other key to go to main Menu : ";
        cin >> option;
        if (option == "1")
        {
            goto a;
        }
    }
    cout << endl;
    cout << "Press any key to continue!!!";
    getch();
}
void StockMobiles()
{
    cout << "\t\t\t\t\t\tMOBILE PHONES " << endl
         << endl;
    cout << "ITEM\t\tSTOCK\t\tPRICE" << endl;
    for (int j = 0; j < mobiles_idx; j++)
    {
        cout << categories_Mobiles[j] << "\t\t " << stock_Mobiles[j] << "\t\t" << price_Mobiles[j] << "Rs." << endl;
    }
}
void StockCovers()
{
    cout << "\t\t\t\t\t\tMOBILE COVERS" << endl
         << endl;
    cout << "ITEM\t\t\tSTOCK\t\tPRICE" << endl;
    for (int j = 0; j < covers_idx; j++)
    {
        cout << categories_Covers[j] << "\t\t" << stock_Covers[j] << "\t\t" << price_Covers[j] << "Rs." << endl;
    }
}
void StockAdopters()
{
    cout << "\t\t\t\t\t\tADOPTERS " << endl
         << endl;
    cout << "ITEM\t\t\tSTOCK\t\tPRICE" << endl;
    for (int j = 0; j < adopters_idx; j++)
    {
        cout << categories_Adopters[j] << "\t\t" << stock_Adopters[j] << "\t\t" << price_Adopters[j] << "Rs." << endl;
    }
}
void StockCables()
{
    cout << "\t\t\t\t\t\tDATA CABLES " << endl
         << endl;
    cout << "ITEM\t\t\tSTOCK\t\tPRICE" << endl;
    for (int j = 0; j < cables_idx; j++)
    {
        cout << categories_Cables[j] << "\t\t" << stock_Cables[j] << "\t\t" << price_Cables[j] << "Rs." << endl;
    }
}
void StockUSB()
{
    cout << "\t\t\t\t\t\tUSB'S " << endl
         << endl;
    cout << "ITEM\t\t\tSTOCK\t\tPRICE" << endl;
    for (int j = 0; j < USB_idx; j++)
    {
        cout << categories_USB[j] << "\t\t" << stock_USB[j] << "\t\t" << price_USB[j] << "Rs." << endl;
    }
}
void StockHeadphone()
{
    cout << "\t\t\t\t\t\tHEADPHONES" << endl
         << endl;
    cout << "ITEM\t\t\tSTOCK\t\tPRICE" << endl;
    for (int j = 0; j < headphone_idx; j++)
    {
        cout << categories_Headphones[j] << "\t\t" << stock_Headphones[j] << "\t\t" << price_Headphones[j] << "Rs." << endl;
    }
}
void StockPowerbank()
{
    cout << "\t\t\t\t\t\tPOWERBANK" << endl;
    cout << "ITEM\t\t\tSTOCK\t\tPRICE" << endl;
    for (int j = 0; j < powerbank_idx; j++)
    {
        cout << categories_Powerbank[j] << "\t\t" << stock_Powerbank[j] << "\t\t" << price_Powerbank[j] << "Rs." << endl;
    }
}
void editStock()
{
    int i = -10;
    int j;
    string category;
    string item;
    cout << " Enter category of item you want to change the stock of : ";
    cin >> category;
    for (int idx = 0; idx < categories_idx; idx++)
    {
        if (category == categories[idx])
        {
            i = idx;
        }
    }
    if (i != -10)
    {
        cout << " Enter name of Item ";
        cin >> item;

        if (i == 0)
        {
            for (int idx = 0; idx < mobiles_idx; idx++)
            {

                if (item == categories_Mobiles[idx])
                {
                    j = idx;
                    break;
                }
            }
            cout << " Enter New Stock : ";
            cin >> stock_Mobiles[j];
            cout << " Enter new Price : ";
            cin >> price_Mobiles[j];
        }

        else if (i == 1)
        {
            for (int idx = 0; idx < covers_idx; idx++)
            {

                if (item == categories_Covers[idx])
                {
                    j = idx;
                    break;
                }
            }
            cout << " Enter New Stock : ";
            cin >> stock_Covers[j];
            cout << " Enter new Price : ";
            cin >> price_Covers[j];
        }
        else if (i == 2)
        {
            for (int idx = 0; idx < adopters_idx; idx++)
            {

                if (item == categories_Adopters[idx])
                {

                    j = idx;
                    break;
                }
            }
            cout << " Enter New Stock : ";
            cin >> stock_Adopters[j];
            cout << " Enter new Price : ";
            cin >> price_Adopters[j];
        }
        else if (i == 3)
        {
            for (int idx = 0; idx < cables_idx; idx++)
            {

                if (item == categories_Cables[idx])
                {

                    j = idx;
                    break;
                }
            }
            cout << " Enter New Stock : ";
            cin >> stock_Cables[j];
            cout << " Enter new Price : ";
            cin >> price_Cables[j];
        }
        else if (i == 4)
        {
            for (int idx = 0; idx < USB_idx; idx++)
            {

                if (item == categories_USB[idx])
                {

                    j = idx;
                    break;
                }
            }
            cout << " Enter New Stock : ";
            cin >> stock_USB[j];
            cout << " Enter new Price : ";
            cin >> price_USB[j];
        }
        else if (i == 5)
        {
            for (int idx = 0; idx < headphone_idx; idx++)
            {

                if (item == categories_Headphones[idx])
                {

                    j = idx;
                    break;
                }
            }
            cout << " Enter New Stock : ";
            cin >> stock_Headphones[j];
            cout << " Enter new Price : ";
            cin >> price_Headphones[j];
        }
        else if (i == 6)
        {
            for (int idx = 0; idx < powerbank_idx; idx++)
            {

                if (item == categories_Powerbank[idx])
                {

                    j = idx;
                    break;
                }
            }
            cout << " Enter New Stock : ";
            cin >> stock_Powerbank[j];
            cout << " Enter new Price : ";
            cin >> price_Powerbank[j];
        }
    }
    cout << endl;
    cout << " Updated Successfully !!!" << endl;
    cout << endl;
    cout << "Enter any key to go back...";
    getch();
}
void addStock()
{
    int i = -10;
    string category;
    string item;
    cout << " Enter category of item you want to add the stock of : ";
    cin >> category;
    for (int idx = 0; idx < categories_idx; idx++)
    {
        if (category == categories[idx])
        {
            i = idx;
        }
    }
    if (i != -10)
    {
        if (i == 0)
        {
            cout << " Enter Name : ";
            cin >> categories_Mobiles[mobiles_idx];
            cout << " Enter Stock : ";
            cin >> stock_Mobiles[mobiles_idx];
            cout << " Enter  Price : ";
            cin >> price_Mobiles[mobiles_idx];
            mobiles_idx++;
        }
        else if (i == 1)
        {
            cout << " Enter Name : ";
            cin >> categories_Covers[covers_idx];
            cout << " Enter Stock : ";
            cin >> stock_Covers[covers_idx];
            cout << " Enter  Price : ";
            cin >> price_Covers[covers_idx];
            covers_idx++;
        }
        else if (i == 2)

        {
            cout << " Enter Name : ";
            cin >> categories_Adopters[adopters_idx];
            cout << " Enter Stock : ";
            cin >> stock_Adopters[adopters_idx];
            cout << " Enter  Price : ";
            cin >> price_Adopters[adopters_idx];
            adopters_idx++;
        }
        else if (i == 3)
        {
            cout << " Enter Name : ";
            cin >> categories_Cables[cables_idx];
            cout << " Enter Stock : ";
            cin >> stock_Cables[cables_idx];
            cout << " Enter  Price : ";
            cin >> price_Cables[cables_idx];
            adopters_idx++;
        }
        else if (i == 4)
        {
            cout << " Enter Name : ";
            cin >> categories_USB[USB_idx];
            cout << " Enter Stock : ";
            cin >> stock_USB[USB_idx];
            cout << " Enter  Price : ";
            cin >> price_USB[USB_idx];
            USB_idx++;
        }
        else if (i == 5)
        {
            cout << " Enter Name : ";
            cin >> categories_Headphones[headphone_idx];
            cout << " Enter Stock : ";
            cin >> stock_Headphones[headphone_idx];
            cout << " Enter  Price : ";
            cin >> price_Headphones[headphone_idx];
            headphone_idx++;
        }
        else if (i == 6)
        {
            cout << " Enter Name : ";
            cin >> categories_Powerbank[powerbank_idx];
            cout << " Enter Stock : ";
            cin >> stock_Powerbank[powerbank_idx];
            cout << " Enter  Price : ";
            cin >> price_Powerbank[powerbank_idx];
            powerbank_idx++;
        }
        cout << " Updated Successfully " << endl;
    }
    else
    {
        cout << " invalid Input " << endl;
    }
    cout << endl;
    cout << " Press any key to continue!!!";
    getch();
}
void removeStock()
{
    int i = -10;
    int j;
    string category;
    string item;
    cout << " Enter category of item you want to Remove the stock of : ";
    cin >> category;
    for (int idx = 0; idx < categories_idx; idx++)
    {
        if (category == categories[idx])
        {
            i = idx;
        }
    }
    if (i != -10)
    {
        string name;
        if (i == 0)
        {
            cout << " Enter Name : ";
            cin >> name;
            for (int j = 0; j < mobiles_idx; j++)
            {
                if (name == categories_Mobiles[j])
                {
                    mobiles_idx--;
                    cout << mobiles_idx << endl;
                    categories_Mobiles[j] = categories_Mobiles[mobiles_idx];
                    stock_Mobiles[j] = stock_Mobiles[mobiles_idx];
                    price_Mobiles[j] = price_Mobiles[mobiles_idx];
                    break;
                }
            }
        }
        else if (i == 1)
        {
            cout << " Enter Name : ";
            cin >> name;
            for (int j = 0; j < covers_idx; j++)
            {
                if (name == categories_Covers[j])
                {
                    covers_idx--;
                    categories_Covers[j] = categories_Covers[mobiles_idx];
                    stock_Covers[j] = stock_Covers[mobiles_idx];
                    price_Covers[j] = price_Covers[mobiles_idx];
                    break;
                }
            }
        }
        else if (i == 2)
        {
            cout << " Enter Name : ";
            cin >> name;
            for (int j = 0; j < adopters_idx; j++)
            {
                if (name == categories_Adopters[j])
                {
                    adopters_idx--;
                    categories_Adopters[j] = categories_Adopters[adopters_idx];
                    stock_Adopters[j] = stock_Adopters[adopters_idx];
                    price_Adopters[j] = price_Adopters[adopters_idx];
                    break;
                }
            }
        }
        else if (i == 3)
        {
            cout << " Enter Name : ";
            cin >> name;
            for (int j = 0; j < cables_idx; j++)
            {
                if (name == categories_Cables[j])
                {
                    cables_idx--;
                    categories_Cables[j] = categories_Cables[cables_idx];
                    stock_Cables[j] = stock_Cables[cables_idx];
                    price_Cables[j] = price_Cables[cables_idx];
                    break;
                }
            }
        }
        else if (i == 4)
        {
            cout << " Enter Name : ";
            cin >> name;
            for (int j = 0; j < USB_idx; j++)
            {
                if (name == categories_USB[j])
                {
                    USB_idx--;
                    categories_USB[j] = categories_USB[cables_idx];
                    stock_USB[j] = stock_USB[cables_idx];
                    price_USB[j] = price_USB[cables_idx];
                    break;
                }
            }
        }
        else if (i == 5)
        {
            cout << " Enter Name : ";
            cin >> name;
            for (int j = 0; j < headphone_idx; j++)
            {
                if (name == categories_Headphones[j])
                {
                    headphone_idx--;
                    categories_Headphones[j] = categories_Headphones[headphone_idx];
                    stock_Headphones[j] = stock_Headphones[headphone_idx];
                    price_Headphones[j] = price_Headphones[headphone_idx];
                    break;
                }
            }
        }
        else if (i == 6)
        {
            cout << " Enter Name : ";
            cin >> name;
            for (int j = 0; j < powerbank_idx; j++)
            {
                if (name == categories_Powerbank[j])
                {
                    powerbank_idx--;
                    categories_Powerbank[j] = categories_Powerbank[powerbank_idx];
                    stock_Powerbank[j] = stock_Powerbank[powerbank_idx];
                    price_Powerbank[j] = price_Powerbank[powerbank_idx];
                    break;
                }
            }
        }
        cout << " Updated Successfully!!!" << endl;
    }
    else
    {
        cout << " Invaid Input!!!" << endl;
    }
    cout << " Press amy key to continue...";
    getch();
}
string customersMenu()

{

    string choice;
    cout << "Choose one of the following : " << endl;
    cout << endl;
    cout << " 1. Enter Budget " << endl;
    cout << " 2. Add items in Cart " << endl;
    cout << " 3. Search Items according to Budget " << endl;
    cout << " 4. View cart " << endl;
    cout << " 5. Caculate Bill " << endl;
    cout << " 6. View Wallet" << endl;
    cout << " 7. Give Feedback " << endl;
    cout << " 8. Exit " << endl;
    cout << endl;
    cout << " Enter your choice : ";
    cin >> choice;
    return choice;
}
void C_feedback()
{
    while (true)
    {
        string option;
        cout << " Enter Your Name : ";
        getline(cin.ignore(), feedbackName[feedback_idx]);
        cout << " Enter Your Phone Number : ";

        getline(cin, feedbackNumber[feedback_idx]);
        cout << " Enter your Experience : ";

        getline(cin, feedbackComment[feedback_idx]);
        cout << endl;
        feedback_idx++;
        cout << " Response added successfully!!!" << endl;
        cout << endl;
        cout << " Enter '1' to add another Response or any other key to go back : ";
        cin >> option;
        if (option == "1")
        {
            continue;
        }
        else
        {
            break;
        }
    }
}
void O_feedback()
{
    for (int idx = 0; idx < feedback_idx; idx++)
    {
        cout << idx + 1 << ". " << endl;
        cout << "   " << feedbackName[idx] << "(" << feedbackNumber[idx] << ")"
             << " : " << endl;
        cout << "     " << feedbackComment[idx] << endl;
        cout << endl;
        getch();
    }
    cout << endl;
    cout << " press any key to continue... ";
    getch();
}
void restock_items()
{
    cout << "\t\t\t\t\tRESTOCK ITEMS" << endl
         << endl;
    int count = 0;
    for (int idx = 0; idx < categories_idx; idx++)
    {

        if (idx == 0)
        {
            for (int i = 0; i < mobiles_idx; i++)
            {
                if (stock_Mobiles[i] == 0)
                {
                    cout << categories_Mobiles[i] << endl;
                    count++;
                }
            }
        }
        if (idx == 1)
        {
            for (int i = 0; i < covers_idx; i++)
            {
                if (stock_Covers[i] == 0)
                {
                    cout << categories_Covers[i] << endl;
                    count++;
                }
            }
        }
        if (idx == 2)
        {
            for (int i = 0; i < adopters_idx; i++)
            {
                if (stock_Adopters[i] == 0)
                {
                    cout << categories_Adopters[i] << endl;
                    count++;
                }
            }
        }
        if (idx == 3)
        {
            for (int i = 0; i < cables_idx; i++)
            {
                if (stock_Cables[i] == 0)
                {
                    cout << categories_Cables[i] << endl;
                    count++;
                }
            }
        }
        if (idx == 4)
        {
            for (int i = 0; i < USB_idx; i++)
            {
                if (stock_USB[i] == 0)
                {
                    cout << categories_USB[i] << endl;
                    count++;
                }
            }
        }
        if (idx == 5)
        {
            for (int i = 0; i < headphone_idx; i++)
            {
                if (stock_Headphones[i] == 0)
                {
                    cout << categories_Headphones[i] << endl;
                    count++;
                }
            }
        }
        if (idx == 6)
        {
            for (int i = 0; i < powerbank_idx; i++)
            {
                if (stock_Powerbank[i] == 0)
                {
                    cout << categories_Powerbank[i] << endl;
                    count++;
                }
            }
        }
    }
    if (count == 0)
    {
        cout << " No need to restock any item..." << endl
             << endl;
    }
    cout << " Press any key to go back!!!";
    getch();
}
void customersBudget()
{
    cout << "\t\t\t\t\t ENTER BUDGET " << endl
         << endl;
    cout << " Enter Your Name : ";
    cin >> C_Name;
    cout << " Enter money you have in Rupees : ";
    cin >> C_Budget;
    cout << endl;
    cout << " UPDATED SUCCESSFULLY!!!" << endl;
    cout << endl;
    cout << " Press any key to continue...";
    getch();
}
string customerCategoriesMenu()
{
    string choice;
    for (int idx = 0; idx < categories_idx; idx++)
    {
        cout << idx + 1 << ". " << categories[idx] << endl;
    }
    cout << " Enter your Choice :";
    cin >> choice;

    return choice;
}
void addtoCart(string option)
{
    if (option == "1")
    {
        int cart; // temporary variable to add item in cart
        cout << " MOBILES " << endl;
        cout << "Option\t\tName\t\tPrice" << endl;
        for (int idx = 0; idx < mobiles_idx; idx++)
        {
            cout << idx + 1 << "\t\t" << categories_Mobiles[idx] << "\t\t" << price_Mobiles[idx] << endl;
        }
        cout << " Enter Option : ";
        cin >> cart;
        cart = cart - 1;
        cartItem[cart_idx] = categories_Mobiles[cart];
        cartItemPrice[cart_idx] = price_Mobiles[cart];
        cart_idx++;
        stock_Mobiles[cart]--;
    }
    else if (option == "2")
    {
        int cart; // temporary variable to add item in cart
        cout << " MOBILE COVERS" << endl;
        cout << "Option\t\tName\t\tPrice" << endl;
        for (int idx = 0; idx < covers_idx; idx++)
        {
            cout << idx + 1 << "\t\t" << categories_Covers[idx] << "\t\t" << price_Covers[idx] << endl;
        }
        cout << " Enter Option : ";
        cin >> cart;
        if (cart <= covers_idx + 1)
        {
            cart = cart - 1;
            cartItem[cart_idx] = categories_Covers[cart];
            cartItemPrice[cart_idx] = price_Covers[cart];
            cart_idx++;
            stock_Covers[cart]--;
        }
    }
    else if (option == "3")
    {
        int cart; // temporary variable to add item in cart
        cout << " ADOPTER" << endl;
        cout << "Option\t\tName\t\tPrice" << endl;
        for (int idx = 0; idx < adopters_idx; idx++)
        {
            cout << idx + 1 << "\t\t" << categories_Adopters[idx] << "\t\t" << price_Adopters[idx] << endl;
        }
        cout << " Enter Option : ";
        cin >> cart;
        if (cart <= adopters_idx + 1)
        {
            cart = cart - 1;
            cartItem[cart_idx] = categories_Adopters[cart];
            cartItemPrice[cart_idx] = price_Adopters[cart];
            cart_idx++;
            stock_Adopters[cart]--;
        }
    }
    else if (option == "4")
    {
        int cart; // temporary variable to add item in cart
        cout << " DATA CABLES" << endl;
        cout
            << "Option\t\tName\t\tPrice" << endl;
        for (int idx = 0; idx < cables_idx; idx++)
        {
            cout << idx + 1 << "\t\t" << categories_Cables[idx] << "\t\t" << price_Cables[idx] << endl;
        }
        cout << " Enter Option : ";
        cin >> cart;
        if (cart <= adopters_idx + 1)
        {
            cart = cart - 1;
            cartItem[cart_idx] = categories_Cables[cart];
            cartItemPrice[cart_idx] = price_Cables[cart];
            cart_idx++;
            stock_Cables[cart]--;
        }
    }
    else if (option == "5")
    {
        int cart; // temporary variable to add item in cart
        cout << " USB's" << endl;
        cout
            << "Option\t\tName\t\tPrice" << endl;
        for (int idx = 0; idx < USB_idx; idx++)
        {
            cout << idx + 1 << "\t\t" << categories_USB[idx] << "\t\t" << price_USB[idx] << endl;
        }
        cout << " Enter Option to add in your cart: ";
        cin >> cart;
        if (cart <= adopters_idx + 1)
        {
            cart = cart - 1;
            cartItem[cart_idx] = categories_Cables[cart];
            cartItemPrice[cart_idx] = price_Cables[cart];
            cart_idx++;
            stock_Cables[cart]--;
        }
    }
    else if (option == "6")
    {
        int cart; // temporary variable to add item in cart
        cout << " HEADPHONES " << endl;
        cout
            << "Option\t\tName\t\tPrice" << endl;
        for (int idx = 0; idx < headphone_idx; idx++)
        {
            cout << idx + 1 << "\t\t" << categories_Headphones[idx] << "\t\t" << price_Headphones[idx] << endl;
        }
        cout << " Enter Option to add in your cart: ";
        cin >> cart;
        if (cart <= headphone_idx + 1)
        {
            cart = cart - 1;
            cartItem[cart_idx] = categories_Headphones[cart];
            cartItemPrice[cart_idx] = price_Headphones[cart];
            cart_idx++;
            stock_Headphones[cart]--;
        }
    }
    else if (option == "7")
    {
        int cart; // temporary variable to add item in cart
        cout << " HEADPHONES " << endl;
        cout
            << "Option\t\tName\t\tPrice" << endl;
        for (int idx = 0; idx < powerbank_idx; idx++)
        {
            cout << idx + 1 << "\t\t" << categories_Powerbank[idx] << "\t\t" << price_Powerbank[idx] << endl;
        }
        cout << " Enter Option to add in your cart: ";
        cin >> cart;
        if (cart <= powerbank_idx + 1)
        {
            cart = cart - 1;
            cartItem[cart_idx] = categories_Powerbank[cart];
            cartItemPrice[cart_idx] = price_Powerbank[cart];
            cart_idx++;
            stock_Powerbank[cart]--;
        }
    }
    else
    {
        cout << " Invalid Input!!!";
        getch();
    }
}
void searchItems()
{
    int count = 1;
    cout << "\nMobile Phones" << endl;
    for (int idx = 0; idx < mobiles_idx; idx++)
    {
        if (price_Mobiles[idx] < C_Budget)
        {
            cout << count << ".\t" << categories_Mobiles[idx] << "\t" << price_Mobiles[idx] << endl;
            count++;
        }
    }
    cout << " You are all Caught Up for Mobile Phones...";
    cout << "\n Press any key to continue...";
    getch();
    cout << "\nMobile Covers" << endl;
    for (int idx = 0; idx < covers_idx; idx++)
    {
        if (price_Covers[idx] < C_Budget)
        {
            cout << count << ".\t" << categories_Covers[idx] << "\t" << price_Covers[idx] << endl;
            count++;
        }
    }
    cout << " You are all Caught Up for Mobile Covers...";
    cout << " \n Press any key to continue...";
    getch();
    cout << "\nAdopters" << endl;
    for (int idx = 0; idx < adopters_idx; idx++)
    {
        if (price_Adopters[idx] < C_Budget)
        {
            cout << count << ".\t" << categories_Adopters[idx] << "\t" << price_Adopters[idx] << endl;
            count++;
        }
    }
    cout << " You are all Caught Up for Adopters...";
    cout << " \n Press any key to continue...";
    getch();
    cout << "\n Data Cables" << endl;
    for (int idx = 0; idx < cables_idx; idx++)
    {
        if (price_Cables[idx] < C_Budget)
        {
            cout << count << ".\t" << categories_Cables[idx] << "\t" << price_Cables[idx] << endl;
            count++;
        }
    }
    cout << " You are all Caught Up for Adopters...";
    cout << " \n Press any key to continue...";
    getch();
    cout << "\n USB's" << endl;
    for (int idx = 0; idx < USB_idx; idx++)
    {
        if (price_USB[idx] < C_Budget)
        {
            cout << count << ".\t" << categories_USB[idx] << "\t" << price_USB[idx] << endl;
            count++;
        }
    }
    cout << " You are all Caught Up for USB's...";
    cout << " \n Press any key to continue...";
    getch();
    cout << "\n Headphones's" << endl;
    for (int idx = 0; idx < headphone_idx; idx++)
    {
        if (price_Headphones[idx] < C_Budget)
        {
            cout << count << ".\t" << categories_Headphones[idx] << "\t" << price_Headphones[idx] << endl;
            count++;
        }
    }
    cout << " You are all Caught Up for Headphones...";
    cout << " \n Press any key to continue...";
    getch();
    cout << "\n Powerbank" << endl;
    for (int idx = 0; idx < powerbank_idx; idx++)
    {
        if (price_Powerbank[idx] < C_Budget)
        {
            cout << count << ".\t" << categories_Powerbank[idx] << "\t" << price_Powerbank[idx] << endl;
            count++;
        }
    }
    cout << " You are all Caught Up for Powerbank...";
    cout << " \n Press any key to go back....";
    getch();
}
void viewCart()
{
    cout << "Serial No."
         << "\t\t Item"
         << "\t\t Price" << endl;
    for (int idx = 0; idx < cart_idx; idx++)
    {
        cout << idx + 1 << ".\t\t" << cartItem[idx] << "\t\t" << cartItemPrice[idx] << endl;
    }
    getch();
}
void viewBill()
{

    viewBill();
    cout
        << " Total Bill is " << bill << "Rs. ";
    getch();
}
void calculatebill()
{
    for (int idx = 0; idx < cart_idx; idx++)
    {
        bill = bill + cartItemPrice[idx];
    }
}
void billStatus()
{
    if (bill < C_Budget)
    {
        cout << C_Budget - bill << "Rs. Left in your Left " << endl;
        cout << " You Still have capacity to buy items. ";
    }
    else if (bill == C_Budget)
    {
        cout << " 0 Rs. Left in your cart." << endl;
    }
    else if (bill > C_Budget)
    {
        cout << bill - C_Budget << "Rs. Needed to Buy items." << endl;
        cout << " You need to remove some items from your cart. " << endl;
    }
    else
    {
        cout << " You have no item in your cart.";
    }
    cout << endl;
    cout << " Enter any key to go back...";
    getch();
}
void updateAttendance()
{
    cout << "Press 'p' to mark attendance for today ";
    cin >> attendance;
    if (attendance == "p")
    {
        cout << " Updated!!!";
        attendance_update++;
    }
    else
    {
        cout << " Update Failed!!!";
    }
    cout << endl;
    getch();
}
void employeesPay()
{
    cout << " Total Days employee worked : " << attendance_update << " Days " << endl;
    cout << " Total Pay : " << attendance_update * 2000 << endl;
    cout << endl
         << " Press any Key to Continue...";
    getch();
}
