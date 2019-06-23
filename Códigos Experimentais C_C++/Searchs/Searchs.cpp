#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int array[] = {1,4,5,15,20,55,156,259,320,350};                         //array to search for a number
size_t tam = sizeof(array)/sizeof(int);                                 //calculate the size of array
int position = 0, searchedVal;                                          //global int variables
int number = 15;                                                        //number to be founded

void printArray(int array[]){                                           //print array function
    cout << "Array:" << endl;
    for(int cont=0; cont< tam;cont++){
        cout << array[cont] << " - ";
    }
    cout << endl;
}


bool simpleSearch(int array[],int searchedVal,int *pos){                    //simple search function
    for(int cont=0; cont<tam; cont++){                                      //look all positions content inside array
        if(array[cont] == searchedVal){                                     //if number wanted was founded
            *pos = cont;                                                    //save the position
            return true;                                                    //return value
        }
    }
        return false;
}

bool binarySearch(int array[],int searchedVal,int *pos){
    int leftLimit = -1, rightLimit = 10, media;                                  //define limits for binary search
    media = (leftLimit+rightLimit)/2;                                           //calculate point of comparison called media

    if(searchedVal == array[media]){                                            //number was exactly the media position number
        *pos = media;                                                           //save position
        return true;                                                            //return function
    }

    while((media - leftLimit) >= 1){                                            //while media is far from limits by 1 position
        if(searchedVal < array[media]){                                         //number wanted inferior point of comparison content
            rightLimit = media;                                             //adjust right limit
        }
        else if(searchedVal > array[media]){                                    //number wanted superior point of comparison content
            leftLimit = media;                                                //adjust left limit
        }
        else if(searchedVal == array[media]){                                   //number wanted equal point of comparison content
            *pos = media;                                                       //save position
            return true;
        }
        media = (leftLimit+rightLimit)/2;                                       //recalculate point of comparison
    }

    return false;                                                               //the number wasn't found


}


int main(){

    printArray(array);                                              //print array content in terminal screen
    cout << "\nType a number to be searched: ";
    cin >> number;
    if(binarySearch(array, number, &position)){                     //check search function
        cout << "\nNumber was found at position: " << position;     //number was founded
    }else{
        cout << "\nNumber was not found!";                          //number wasn't found
    }
    return 0;
}
