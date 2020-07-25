
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

//#define RECORDS "records.csv"
//const char *input_file = RECORDS;

//NODE
//typedef struct node{
//	int sin;  //sin
//	char fname[100]; //firtName
//	char lname[100]; //lastName
//	double income; //annual Incom
//	struct node * next;  //nextIndex
//}records_data;


int main(){
	int back=1;  //for while loop
	int action = 0; //for action, use chose
        char* selectop;
	printf("WELCOME TO FINAL PROJECT\n");
        printf("File to load records from : records.csv\n");
	//records_data *head;

	//readFromFile(); //will read contacts from the file and print it

	while(back){
	printf("Please Select:\n");
	printf("1. List records\n");
	printf("2. Sort Records\n");
	printf("3. Find Records\n");
	printf("4. Add Records\n");
	printf("Delete Records\n");
	printf("Please Select Operation: ");	
        scanf("%d",&action);//getchar(); 
		if(action == 1 ){
                    listRecords();
                    back=0;
                 
		}
		else if(action == 2 ){
                    sortRecords();  
		}
		else if(action == 3 ){
                    //findRecords();
		}
		else if(action == 4 ){
                    //addRecords();
		}
		else if(action == 5 ){
                    //deleteRecords();
		}
		else{
		printf("Incorrect Input! Please try again."); 
		}
        
	}
}




    
