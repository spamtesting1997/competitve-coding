#include <iostream>



using namespace std;


int main(){


    int n,n1;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> n1;
        arr[i] = n1;
    }


    int cont = 0;
    int i = 0;
    while (i < n){
        if(arr[i+2] == 0){
            cont ++;
            i+=2;
        }
        else if(arr[i+1] == 0){
            cont++;
            i++;
        }
        else i++;
        
    }
    
    cout << cont << endl;

    return 0;
}