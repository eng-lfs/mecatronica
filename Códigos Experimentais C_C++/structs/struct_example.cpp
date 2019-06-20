#include <stdlib.h>
#include <stdio.h>

struct Student{
    int id;
    float firstNote;
    float secNote;
    float average;
};

int main(){
    system("cls");                  //clear the screen terminal

    Student Lucas;                  //creating the object

    Lucas.id = 0;                   //passing student's id
    Lucas.firstNote = 8.5;          //passing student's first note
    Lucas.secNote = 9.4;            //passing student's second note

    Lucas.average = (Lucas.firstNote + Lucas.secNote)/2.0;      //average math

    printf("Your First Note was: %.2f", Lucas.firstNote);       //print first note
    printf("\nYour Second Note was: %.2f", Lucas.secNote);      //print second note

    if(Lucas.average >= 6.0){                                   //condition for approve or not the student
        printf("\nCongrats you are approved!");                 //student approved
    }else{
        printf("\nBad news, you failed on the exam!");          //student repproved
    }

    printf("\nYour average was: %.2f\n", Lucas.average);        //print average note

    system("pause");                                            //hangs the screen terminal
    return 0;
}
