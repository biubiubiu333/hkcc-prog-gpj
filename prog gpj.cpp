#include <iostream>
#include <iomanip>
#include<cstring>
#include<stdio.h>
#include<cmath>
#include<ctime>
using namespace std;
class redemption {
public:

    void load(){
        // Load the starting data

        // Gift IDs
        strcpy_s(giftid[0], sizeof(giftid[0]), "A01");
        strcpy_s(giftid[1], sizeof(giftid[1]), "A02");
        strcpy_s(giftid[2], sizeof(giftid[1]), "A03");
        strcpy_s(giftid[3], sizeof(giftid[2]), "B01");
        strcpy_s(giftid[4], sizeof(giftid[3]), "B02");
        strcpy_s(giftid[5], sizeof(giftid[4]), "B03");
        strcpy_s(giftid[6], sizeof(giftid[5]), "B04");
        strcpy_s(giftid[7], sizeof(giftid[6]), "B05");
        strcpy_s(giftid[8], sizeof(giftid[7]), "C01");
        strcpy_s(giftid[9], sizeof(giftid[8]), "C02");
        strcpy_s(giftid[10], sizeof(giftid[9]), "C03");
        strcpy_s(giftid[11], sizeof(giftid[10]), "C04");
        strcpy_s(giftid[12], sizeof(giftid[11]), "D01");
        strcpy_s(giftid[13], sizeof(giftid[12]), "D02");
        strcpy_s(giftid[14], sizeof(giftid[13]), "D03");

        // Descriptions
        strcpy_s(des[0], sizeof(des[0]), "LG Internet TV");
        strcpy_s(des[1], sizeof(des[1]), "Pioneer Hifi Set");
        strcpy_s(des[2], sizeof(des[2]), "Sony DVD Player");
        strcpy_s(des[3], sizeof(des[3]), "Healthy Air Fryer");
        strcpy_s(des[4], sizeof(des[4]), "Tefal Microwave Oven");
        strcpy_s(des[5], sizeof(des[5]), "Famous Coffee Maker");
        strcpy_s(des[6], sizeof(des[6]), "Smart Rice Cooker");
        strcpy_s(des[7], sizeof(des[7]), "TechCook Toaster Oven");
        strcpy_s(des[8], sizeof(des[8]), "Wellcome 50 Coupon");
        strcpy_s(des[9], sizeof(des[9]), "Mannings 50 Coupon");
        strcpy_s(des[10], sizeof(des[10]), "Carol Restaurant 100 Coupon");
        strcpy_s(des[11], sizeof(des[11]), "Shell 200 Coupon");
        strcpy_s(des[12], sizeof(des[12]), "Clever Headset");
        strcpy_s(des[13], sizeof(des[13]), "HP Optic Mouse");
        strcpy_s(des[14], sizeof(des[14]), "Stylish Bluetooth Speaker");

        // Customer IDs
        strcpy_s(customer_ID[0], sizeof(customer_ID[0]), "Tommy2015");
        strcpy_s(customer_ID[1], sizeof(customer_ID[1]), "DavidChan");
        strcpy_s(customer_ID[2], sizeof(customer_ID[2]), "Luna123");
        strcpy_s(customer_ID[3], sizeof(customer_ID[3]), "TigerMan");
        strcpy_s(customer_ID[4], sizeof(customer_ID[4]), "Max5678");
        strcpy_s(customer_ID[5], sizeof(customer_ID[5]), "Neo2000");
        strcpy_s(customer_ID[6], sizeof(customer_ID[6]), "CCTang");
        strcpy_s(customer_ID[7], sizeof(customer_ID[7]), "EchoWong");
        strcpy_s(customer_ID[8], sizeof(customer_ID[8]), "Rubychow");
        strcpy_s(customer_ID[9], sizeof(customer_ID[9]), "Ivy2023");

        // Rank
        strcpy_s(Rank, sizeof(Rank), "BBBBSSSGGG");

        // Prices
        price[0] = 3900;
        price[1] = 2400;
        price[2] = 400;
        price[3] = 1500;
        price[4] = 480;
        price[5] = 1800;
        price[6] = 600;
        price[7] = 450;
        price[8] = 50;
        price[9] = 50;
        price[10] = 100;
        price[11] = 200;
        price[12] = 350;
        price[13] = 250;
        price[14] = 800;

        // Requirements
        require[0] = 19000;
        require[1] = 11500;
        require[2] = 2000;
        require[3] = 7300;
        require[4] = 2400;
        require[5] = 8800;
        require[6] = 2900;
        require[7] = 2250;
        require[8] = 250;
        require[9] = 250;
        require[10] = 500;
        require[11] = 960;
        require[12] = 1750;
        require[13] = 1250;
        require[14] = 3900;

        // Credit Card Limits
        CC[0] = 8500;
        CC[1] = 22800;
        CC[2] = 650;
        CC[3] = 14000;
        CC[4] = 2580;
        CC[5] = 8000;
        CC[6] = 33554;
        CC[7] = 8650;
        CC[8] = 28000;
        CC[9] = 12340;


        //After loading, show the successful message, then display Menu again.
        cout << "\nsuccessful load!\n\n";
        Menu();
    }

    void displayData() {
        // Display the loaded data using setw to format the output
        for (int i = 0; i < 15; i++) {
            cout << setw(5) << giftid[i];
            cout << setw(25) << des[i];
            cout << setw(10) << price[i];
            cout << setw(10) << require[i] << endl;
        }

        for (int i = 0; i < 10; i++) {
            cout << setw(15) << customer_ID[i];
            cout << setw(10) << Rank[i];
            cout << setw(15) << CC[i] << endl;
        }
    }

    void record() {

        int pos = 0;

        int d[100] = { 1 };
        char e[100] = { 1 };
        //use e[f] to extrieve all the customers first letter.
        for (int f = 0; f < a; f++) {
            e[f] = customer_ID[f][0];


        }
        cout << endl;
        for (int j = 0; j < a; j++) {
            for (int k = 0; k <= a - 1; k++) {

                if (e[k] > large) {
                    large = e[k];
                    pos = k;
                }
                //continuely find the largest letter and record the position into d[j] in order.

            }
            d[j] = pos;

            e[pos] = '!';//make the largest letter to a small number in ASCii .

            large = '+';



        }
        //show data in alphabet order.
        for (int j = 0; j <= a - 1; j++) {
            cout << customer_ID[d[j]];
            cout << "  " << "\t";
            cout << Rank[d[j]] << "\t" << CC[d[j]];
            cout << endl;
        }
        cout << endl;
        for (int j = 0; j < 15; j++) {
            cout << giftid[j] << "\t";
            cout << des[j];
            cout << "\t" << price[j] << "\t" << require[j];
            cout << endl;
        }
        cout << endl;
        Menu();

    }
    void edit_costomer() {
        char user[51];
        cout << "Please input your ID:";
        cin >> user;
        int same = 0;//check the same letter the inputID have compared to all customers'name
        int len = strlen(user);
        int pos;
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < len; j++) {
                if (user[j] == customer_ID[i][j]) {
                    same++;
                }
            }
            if (same == len)//same == len mean old customer
            {
                pos = i;
                break;
            }
            else { same = 0; }//same == len mean new customer
        }
        if (same == 0)
        {
            cout << "would you want to add this new account into system? 'y'or'n'";
            char check;
            cin >> check;
            if (check == 'y') {
                a = a + 1;
                int k, b, c;
                cout << "To add your account, please input the date that the you became a member(in the format DD / MM / YYYY)\n";
                //check whether day,month,year fit to the range
                do {
                    cout << "DD\n";
                    cin >> k;
                    if (!cin.fail() && k > 0 && k <= 30) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Please try again." << endl;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin.clear();
                    }
                } while (1);
                do {
                    cout << "MM";
                    cin >> b;
                    if (!cin.fail() && b > 0 && b <= 12) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Please try again." << endl;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin.clear();
                    }
                } while (1);
                do {
                    cout << "YYYY";
                    cin >> c;
                    if (!cin.fail() && c > 1970 && c <= 2024) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Please try again." << endl;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin.clear();
                    }
                } while (1);
                //((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60) is time pass from 1970/1/1.
                //time(0) is current time pass from 1970/1/1
                if (time(0)-((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60) >= 365 * 24 * 60 * 60) {
                    Rank[a - 1] = 'G';
                }
                if (time(0)-((k - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60 ) < 365 * 24 * 60 * 60 && ((a - 1) * 24 * 60 * 60 + (b - 1) * 30 * 24 * 60 * 60 + (c - 1970) * 365 * 24 * 60 * 60 - time(0)) >= 6 * 30 * 24 * 60 * 60) {
                    Rank[a - 1] = 'S';
                }
                else {
                    Rank[a - 1] = 'B';
                }

                cout << "Please enter points balance value:\n";
                int v;

                cin >> v;
                CC[a - 1] = v;

                strcpy_s(customer_ID[a - 1], sizeof(customer_ID[9]), user);
                cout << "Successful add!\n";
                Menu();
            }
            if (check == 'n') { Menu(); }
        }
            else 
        {
            cout << "would you want to delect this new account from system? 'y'or'n'";
            char check2;
            cin >> check2;
            if (check2 == 'y') 
            {
                cout << "successful delect!\n";
                a = a - 1;
                //delect position customer with‘ ’and swap the last customer to the position.
                for (int i = 0; i <= 30; i++) {
                    customer_ID[pos][i] = ' ';
                    customer_ID[pos][i] = customer_ID[a][i];
                    customer_ID[a][i] = ' ';
                }
                Rank[pos] = Rank[a];
                Rank[a] = ' ';
                price[pos] = price[a];
                price[a] = 0;
                Menu();
            }
            if (check2 == 'n') { Menu(); }
            }
       
    }
    void custome_log() {//this function is to check whether the input customerID is correct
        cout << "please input your CustomerID:";
        char user[51];
        cin >> user;
        int same = 0;
        int len = strlen(user);//check whether the input customerID is correct

        for (int i = 1; i <= 3; i++)//3 attempt times
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < len; j++) {
                    if (user[j] == customer_ID[i][j]) {
                        same++;
                    }
                }
                if (same == len)
                {
                    pos = i;
                    break;
                }
                else { same = 0; }
            }
            if (same == 0) {
                cout << "Error, please input again!";
                if (i == 3) { Menu(); }
            }
            else {
                strcpy_s(customerName, user);
                break;
            }
        }
        cout << "successful login!\n";
    }
    void custome_view() {//R4
        cout << endl;

        cout << "Action for Customer ID: " << customerName << "\n";
        cout << "*****Customer View Menu *****\n";
        cout << "[1] Earn CC Points\n";
        cout << "[2] Redeem Gifts\n";
        cout << "[3] Modify CC Points Balance\n";
        cout << "[4] Return to Main Menu\n";
        cout << "************************** \n";
        cout << "Option(1 - 4) :";
        int b;
        cin >> b;
        switch (b) {
        case 1:earn(); break;
        case 2:redeem(); break;
        case 3: modify(); break;
        case 4:return_(); break;
        default:break;
        }

    }
    void earn() {
        float a;
        cout << " Please input the amount of money spent for converting to CC points.\n";
        cin >> a;
        int b = floor(a);
        His_E_S[pos][0][0] = His_E_S[pos][0][0] + 1;
        His_E_S[pos][0][His_E_S[pos][0][0]] = a;
        His_E_O[pos][0][0] = His_E_O[pos][0][0] + 1;
        His_E_O[pos][0][His_E_O[pos][0][0]] = CC[pos];//record history
        CC[pos] = CC[pos] + (a - b % 250) / 250;
        His_E_M[pos][0][0] = His_E_M[pos][0][0] + 1;
        His_E_M[pos][0][His_E_M[pos][0][0]] = (a - b % 250) / 250;//count into CCpoints notice:int b = floor(a)
        cout << "Your CCpoints wallet is richer!";
        cout << endl;
        custome_view();

    }
    void redeem() {
        float b;
        char extra = ' ';
        if (Rank[pos] == 'G') {
            b = 0.9;
        }
        else if (Rank[pos] == 'S') {
            b = 0.95;
        }
        else {
            b = 1;
        }
        cout << "choose a category of your gift.(A/B/C/D):";
        char f;
        int a[15] = { 0 };
        int d[15] = { 0 };
        int large = 0;
        int site;

        cin >> f;
        switch (f)//choose a category of your gift.(A/B/C/D):
        {
        case 'A':

            for (int j = 0; j < 3; j++) {
                a[j] = require[j];
            }
            for (int j = 0; j < 3; j++) {
                for (int i = 0; i < 3; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 0; j < 3; j++) {
                cout << giftid[d[j]] << "\t";
                for (int i = 0; i < 80; i++) {
                    cout << des[j][i];
                }
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t" << price[d[j]] << "\t" << require[d[j]] * b << extra;
                cout << endl;
            }
            cout << endl;//show A category
            choose();
            cout << endl;
            break;

        case 'B':
            for (int j = 3; j < 8; j++)
            {
                a[j] = require[j];
            }
            for (int j = 3; j < 8; j++) {
                for (int i = 3; i < 8; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 3; j < 8; j++) {
                for (int i = 0; i < 3; i++) { cout << giftid[d[j]][i] << "\t"; }
                for (int i = 0; i < 80; i++) {
                    cout << des[j][i];
                }
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t" << price[d[j]] << "\t" << require[d[j]] * b << extra;
                cout << endl;
            }
            cout << endl;//show B category
            choose();
            cout << endl;
            break;
        case 'C':
            for (int j = 8; j < 12; j++) {
                a[j] = require[j];
            }
            for (int j = 8; j < 12; j++) {
                for (int i = 8; i < 12; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 8; j < 12; j++) {
                cout << giftid[d[j]] << "\t";
                for (int i = 0; i < 80; i++) {
                    cout << des[j][i];
                }
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t" << price[d[j]] << "\t" << require[d[j]] * b << "\t" << extra;
                cout << endl;
            }
            cout << endl;//show C category
            choose();
            cout << endl;
            break;
        case 'D':

            for (int j = 12; j < 15; j++) {
                a[j] = require[j];
            }
            for (int j = 12; j < 15; j++) {
                for (int i = 12; i < 15; i++) {
                    if (a[i] > large) {
                        large = a[i];
                        d[j] = i;
                        site = i;
                    }
                }
                large = 0;
                a[site] = 0;
            }

            for (int j = 12; j < 15; j++) {
                cout << giftid[d[j]] << "\t";
                for (int i = 0; i < 80; i++) {
                    cout << des[j][i];
                }
                if (require[d[j]] * b > CC[pos]) {
                    extra = '*';
                }
                cout << "\t" << price[d[j]] << "\t" << require[d[j]] * b << extra;
                cout << endl;
            }
            cout << endl;//show D category
            cout << endl;
            choose();
            cout << endl;
            break;

        default:cout << "error";
            break;
        }
    }

    void choose() {//select the gift for redemption
        cout << "input gift ID:\n";
        float b;
        int extra = 0;
        if (Rank[pos] == 'G') {
            b = 0.9;
        }
        else if (Rank[pos] == 'S') {
            b = 0.95;
        }
        else {
            b = 1;
        }
        int same = 0;
        char user[3];
        int pos_g = 0;
        cin >> user;
        for (int i = 1; i <= 3; i++)//3 attempt times
        {
            for (int i = 0; i < 15; i++)
            {
                for (int j = 0; j < 3; j++) {
                    if (user[j] == giftid[i][j]) {
                        same++;
                    }
                }
                if (same == 3)
                {
                    pos_g = i;
                    break;
                }
                else { same = 0; }
            }
            if (same == 0) {
                cout << "Error, please input again!";
                if (i == 3) { Menu(); }
            }
            else {
                break;
            }
        }//check which gift user want to choose
        His_Rem[pos_g][0][0] = His_Rem[pos_g][0][0] + 1;
        His_Rem[pos_g][0][His_Rem[pos_g][0][0]] = pos_g;//record into history

        cout << "Please input the amount of CC points used for redemption";
        int k;

        for (int i = 1; i <= 3; i++) {
            cin >> k;
            if (cin.fail() || k > CC[pos] || k < 0) {
                cout << "error\n";
                if (i == 3) { Menu(); }
            }
            else { break; }
        }
        int use_CCpoint;
        if (k < require[pos_g]) {
            extra = price[pos_g] - round(require[pos_g] * b) * 0.2;
            His_Rem_E[pos_g][0][0] = His_Rem_E[pos_g][0][0] + 1;
            His_Rem_E[pos_g][0][His_Rem[pos_g][0][0]] = extra;
        }
        else {
            use_CCpoint = require[pos_g];
        }
        cout << "Are you comfirm that using " << k << "CC point and " << extra << "extra money for this gift? Notice: input \"Y\" or \"N\"";
        char u;
        bool valid = false;

        do {
            cout << "Please enter 'Y' or 'N': ";
            cin >> u;

            if (u == 'Y' || u == 'N') {
                valid = true;
            }
            else {
                cout << "Invalid input. Please try again." << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.clear();
            }
        } while (!valid);

        His_Rem_E[pos_g][0][0] = His_Rem_E[pos_g][0][0] + 1;
        His_Rem_E[pos_g][0][His_Rem[pos_g][0][0]] = CC[pos];
        CC[pos] = CC[pos] - use_CCpoint;
        His_Rem_F[pos_g][0][0] = His_Rem_E[pos_g][0][0] + 1;
        His_Rem_F[pos_g][0][His_Rem[pos_g][0][0]] = CC[pos];
        custome_view();
    }
    void modify() {//R4
        cout << "\nPlease input of a new CC Points Balance value:";
        int a;
        cin >> a;
        int b;
        if (a > CC[pos]) {
            b = 1;
        }
        else if (a < CC[pos]) {
            b = -1;
        }
        if (a == CC[pos]) {
            b = 0;
        }


        His_Mo_T[pos][0][0] = His_Mo_T[pos][0][0] + 1;
        His_Mo_T[pos][0][His_Mo_T[pos][0][0]] = b;
        His_Mo_O[pos][0][0] = His_Mo_O[pos][0][0] + 1;
        His_Mo_O[pos][0][His_Mo_O[pos][0][0]] = CC[pos];

        CC[pos] = a;
        His_Mo_F[pos][0][0] = His_Mo_F[pos][0][0] + 1;
        His_Mo_F[pos][0][His_Mo_F[pos][0][0]] = CC[pos];
        custome_view();
    }

    void return_() {
        Menu();
    }

    void history() {
        cout << endl;
        cout << "please input your CustomerID:";
        char user[51];
        cin >> user;
        int same = 0;
        int len = strlen(user);
        cout << endl;
        for (int i = 1; i <= 3; i++)
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < len; j++) {
                    if (user[j] == customer_ID[i][j]) {
                        same++;
                    }
                }
                if (same == len)
                {
                    pos_h = i;
                    break;
                }
                else { same = 0; }
            }
            if (same == 0) {
                cout << "Error, please input again!";
                if (i == 3) { Menu(); }
            }
            else {
                break;
            }
        }
        //check customerID
        //show history
        cout << "Earn CC points:\n";
        cout << "Spent" << "\t" << "Original" << "\t" << "Final\n";
        if (His_E_S[pos_h][0][0] == 0) {
            cout << "Don't have any operation yet\n";
        }
        //earn history
        for (int i = 1; i <= His_E_S[pos_h][0][0]; i++) {
            cout << His_E_S[pos_h][0][i] << "\t";
            cout << His_E_O[pos_h][0][i] << "\t";
            cout << His_E_M[pos_h][0][i] << endl;
        }

        cout << "Redeem gift:\n";
        cout << "Gift ID" << "\t" << "Discription" << "\t" << "Original" << "\t" << "Final" << "\t" << "Extra money\n";
        if (His_Rem_O[pos_h][0][0] == 0) {
            cout << "Don't have any operation yet\n";
        }
        //redeem history
        for (int i = 1; i <= His_Rem_O[pos_h][0][0]; i++) {
            for (int j = 0; i <= 2; i++) {
                cout << giftid[His_Rem[pos_h][0][i]][j] << "\t";
            }
            for (int j = 1; i <= 30; i++) {
                cout << des[His_Rem[pos_h][0][i]][j] << "\t";
            }
            cout << His_Rem_O[pos_h][0][i] << "\t";
            cout << His_Rem_F[pos_h][0][i] << "\t";
            cout << His_Rem_E[pos_h][0][i] << endl;
        }
        cout << "Modify:" << "( 1 is increase , -1 is decrease and 0 is same )\n";
        cout << "Type" << "\t" << "Original" << "\t" << "Final\n";
        if (His_Mo_T[pos_h][0][0] == 0) {
            cout << "Don't have any operation yet\n";
        }
        //modify's history
        for (int i = 1; i <= His_Mo_T[pos_h][0][0]; i++) {
            cout << His_Mo_T[pos_h][0][i] << "\t";
            cout << His_Mo_O[pos_h][0][i] << "\t";
            cout << His_Mo_F[pos_h][0][i] << endl;
        }

        Menu();
    }

    void edit() {
        char u;
        bool valid = false;

        do {
            cout << "Please enter 'Y' or 'N': ";
            cin >> u;

            if (u == 'Y') {
                cout << "we come from G14\n";
                cout << "name" << "\t" << "Id\n";
                cout << "Zhan zhixiang" << "\t" << "23081406A";
            }
            if (u == 'N') {
                Menu();
            }
            else {
                cout << "Invalid input. Please try again." << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin.clear();
            }
        } while (!valid);//check if is a valid input


    }
    void Menu() {
        cout << "It is our priviledge to invite you to engage in the Gigt Redemption activity!! For the sake of prompting comsumption. \nOur enterprise launched this redemption system. Each of your purchase will take account to CCpoints, which could be used to redeem delicated presents！\nThe detailed information is as fellow. Notice:You should initialize the starting data first. \n";
        cout << "*** Main Menu *** \n [1] Load Starting Data\n [2] Show Records\n [3] Edit Customers\n [4] Enter Customer View\n [5] Show Transaction History \n [6] Credits and Exit \n* *************** \nOption(1 - 6) :";
        int b;
        cin >> b;
        switch (b) {
        case 1:load(); break;
        case 2: record(); break;
        case 3:edit_costomer(); break;
        case 4: custome_log();
            custome_view(); break;
        case 5:history(); break;
        case 6:edit(); break;
        default:break;
        }
    }
private:
    char giftid[15][4];
    char des[15][101];
    int require[15];
    char  customer_ID[100][51];
    char Rank[11];
    int  CC[10];
    int price[15];
    int pos = 0;
    int pos_h = 0;
    int His_E_S[100][1][100] = { 0 };//3D array, you should take time to make sense
    int His_E_M[100][1][100] = { 0 };
    int His_E_O[100][1][100] = { 0 };
    int His_Rem[100][1][100] = { 0 };
    int His_Rem_E[100][1][100] = { 0 };
    int His_Rem_O[100][1][100] = { 0 };
    int His_Rem_F[100][1][100] = { 0 };
    int His_Mo_T[100][1][100] = { 0 };
    int His_Mo_O[100][1][100] = { 0 };
    int His_Mo_F[100][1][100] = { 0 };
    char customerName[51] = ""; //global variable
    int a = 10;
    char large = '+';
};
int main()
{
  
    

    redemption sys;
    cout << "It is our priviledge to invite you to engage in the Gigt Redemption activity!! For the sake of prompting comsumption. \nOur enterprise launched this redemption system. Each of your purchase will take account to CCpoints, which could be used to redeem delicated presents锛乗nThe detailed information is as fellow. Notice:You should initialize the starting data first. \n";
    cout << "*** Main Menu *** \n [1] Load Starting Data\n [2] Show Records\n [3] Edit Customers\n [4] Enter Customer View\n[5] Show Transaction History \n[6] Credits and Exit \n* *************** \nOption(1 - 6) :";
    int c;//showMainMenu();
    cin >> c;
    while (true) {
        if (c == 1)break;
        else {
            cout << "Erro! Please load the starting data first!";
            cin >> c;
        }
    }//check untill user cin 1 to load the data

    sys.load();
    system("pause");
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6
