#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

    // esercizio 0

    int arr[10] = {20, 50, -10, -40, 80, -30, 70, 55, 75, 5};

    sort(arr, arr + 10);
    int multipli = 0;
    bool Nega = true;

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 10 == 0)
            multipli++;

        if (arr[i] < 0)
            Nega = false;
    }

    cout << "Multipli di 10:" << multipli << endl;

    if (Nega)
        cout << "Si negativi" << endl;
    else
        cout << "No niggativi" << endl;

    // ---------------------------------------------------------------
    // ESERCIZIO 1

    vector<int> v = {15, -3, 22, -8, 7, 0, 14, -1, 9, 30};

    for (int x : v) {
        if (x < 0) {
            cout << "val nigativo: " << x << endl;
            break;
        }
    }

    for (int i = 0; i < v.size(); ) {
        if (v[i] < 0)
            v.erase(v.begin() + i);
        else
            i++;
    }

    cout << "final: \n ";
    for (int x : v)
        cout << x << "\n ";

    // ESERCIZIO 2

    vector<int> v2 = {5, 18, 21, 40, 7, 9, 60, 11, 3, 100, 8, 2};


    for (int x : v2) {
        if (x > 50) {
            cout << "val >50:" << x << endl;
            break;
        }
    }

    for (int i = 0; i < v2.size(); ) {
        if (v2[i] % 2 != 0)
            v2.erase(v2.begin() + i);
        else
            i++;
    }

    cout << "final: \n ";
    for (int x : v2)
        cout << x << "\n ";


    // ESERCIZIO 3

    vector<int> v3 = {-5, -10, 20, 25, -30, 40, 0, -1, 60, 7};

    bool Negativi = false;
    bool PrimoTrenta = true;

    for (int x : v3) {
        if (x > 0)
            Negativi = true;

        if (x > 30 && PrimoTrenta) {
            cout << "primo val >30:" << x << endl;
            PrimoTrenta = false;
        }
    }

    if (!Negativi)
        cout << "Ci sono solo negativi";
    else
        cout << "Ci sono positivi";

    for (int i = 0; i < v3.size(); ) {
        if (v3[i] < 0)
            v3.erase(v3.begin() + i);
        else
            i++;
    }

    sort(v3.begin(), v3.end());

    cout << "final: \n ";
    for (int x : v3)
        cout << x << "\n ";
}