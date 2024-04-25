#include <iostream>
using namespace std;

struct Node {
    int noMhs;
    string name;
    Node* next;
};

Node* START = NULL;

void addnode() {
    int nim;
    string nama;
    Node* nodeBaru = new Node();
    cout << "masukkan NIM: ";
    cin >> nim;
    cout << "masukkan Nama: ";
    cin >> nama;
    nodeBaru->noMhs = nim;
    nodeBaru->name = nama;

    if (START == NULL || nim <= START->noMhs) {
        if (START != NULL && nim == START->noMhs)
        {
            cout << "NIM sudah ada" <<endl;
            return;
        }

        nodeBaru->next = START;
        START = nodeBaru;
        return;
    }