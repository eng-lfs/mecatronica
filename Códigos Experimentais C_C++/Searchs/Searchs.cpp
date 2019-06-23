#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int array[] = {1,4,5,15,20,55,156,259,320,350};
size_t tam = sizeof(array)/sizeof(int);
int position = 0, searchedVal;
int number = 15;

void printArray(int array[]){
    //size_t tam = sizeof(arr)/sizeof(int);
    cout << "Array:" << endl;
    for(int cont=0; cont< tam;cont++){
        cout << array[cont] << " - ";
    }
    cout << endl;
}


bool simpleSearch(int array[],int searchedVal,int *pos){
    for(int cont=0; cont<tam; cont++){
        if(array[cont] == searchedVal){
            *pos = cont;
            return true;
        }
    }
        return false;
}

bool binarySearch(int array[],int searchedVal,int *pos){
    int leftLimit = 0, rightLimit = 10, media;
    media = (leftLimit+rightLimit)/2;

    if(searchedVal == array[media]){
        *pos = media;
        return true;
    }

    while((media - leftLimit) != 1){
        if(searchedVal < array[media]){
            rightLimit = media - 1;
        }
        else if(searchedVal > array[media]){
            leftLimit = media+1;
        }
        else if(searchedVal == array[media]){
            *pos = media;
            return true;
        }
        media = (leftLimit+rightLimit)/2;
    }

    return false;


}


int main(){

    printArray(array);

    if(binarySearch(array, number, &position)){
        cout << "\nNumber was found at position: " << position;
    }else{
        cout << "\nNumber was not found!";
    }
    return 0;
}
