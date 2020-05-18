#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
    int array;
cout<< "Masukkan panjang array: ";cin>>array;
    int arr_sorting[array], a, k,j, i, t;

cout<< "\nMasukkan " << array << " Data yang akandiurutkan : "<<endl;
    for (i = 0; i< array; i++)
    {
cout<<"Data ke- "<<i+1<<": ";
cin>>arr_sorting[i];
    }
cout<< "\nDataanda  :";
    for (i = 0; i< array; i++) {
cout<< " "<<arr_sorting[i];
    }

    for (i = array/2; i>0; i=i/2) {
        for (j = i; j < array; j++) {
            for (k = j - i; k >= 0; k = k - i) {
                if (arr_sorting[k + i] >= arr_sorting[k])
                    break;
                else {

                    t = arr_sorting[k];
arr_sorting[k] = arr_sorting[k + i];
arr_sorting[k + i] = t;
                }
            }

        }

    }

cout<< "\n\nData yang telah diurutkan Secara ascending :\n";
    for (i = 0; i< array; i++) {
cout<< " "<<arr_sorting[i];
    }

    return 0;
}
