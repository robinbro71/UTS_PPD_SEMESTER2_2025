// UTS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include "Event.h"
#include "App.h"
#include "Konferensi.h"
#include "Workshop.h"
#include "Peserta.h"
#include "Registrasi.h"
#include "Seminar.h"
#include "Sertifikat.h"
using namespace std;

void invalid() {
    printf("Invalid input. Please try again.\n");
    getchar();
    getchar();
}

void loginPage(Event& event, Peserta& peserta) {
    system("cls");

    int select;
    printf("plese select:\n");
    printf("1. Login:\n");
    printf("2. Daftar:\n");
    printf("plese select: ");
    cin >> select;

    if (select == 1) {
        event.login();
    }
    if (select == 2) {
        peserta.tambahPeserta();
    }
    else {
        invalid();
        loginPage(event, peserta);
    }
}

int main()
{
    int select;
    Event event;
    Peserta peserta;
    App app;

    loginPage(event, peserta);
    

    
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
