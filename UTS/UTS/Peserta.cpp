#include "Peserta.h"
#include <fstream>

void Peserta::tambahPeserta(){
	system("cls");
	string nama;
	string institusi;
	string email;

	cin.ignore();

	printf("Nama: ");
	getline(cin, nama);
	printf("\n");
	printf("Institusi: ");
	getline(cin, institusi);
	printf("\n");
	printf("Email: ");
	getline(cin, email);
	printf("\n");

	fstream myFile;
	myFile.open("peserta.txt", ios::app);  //write out = mengganti || app = menambahkan
	if (myFile.is_open()) {
		myFile << "Nama: " << nama << endl;
		myFile << "Institusi: " << institusi << endl;
		myFile << "Email: " << email << endl;
		myFile << "---"<< endl;
		myFile.close();
	}
}