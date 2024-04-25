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
    Node* nodebaru = new Node();
    cout << "masukkan NIM: ";
    cin >> nim;
    cout << "masukkan Nama: ";
    cin >> nama;
    
}