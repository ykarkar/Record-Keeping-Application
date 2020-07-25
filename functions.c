/*
Yash Karkar <karkar@sheridan.desire2learn.com>
----------------------------------------------------------------------
 */  
  
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "functions.h"
  
void listRecords ()
{
   
    const char *input = RECORDS;
    records_data* newNode = getNode();
    int i;
    char *tempor;
    char line[10000];
    int row_count = 0;
    int field_count = 0;
  
    FILE * input_file;
  
    if ((input_file = fopen (input, "r")) == NULL)
    {
        printf ("Could not open input file!\n");       
    }
  else
    {      
        char s[2] = ",";
        
        printf("Sin Number:\tFirstName\tLastName\tAnnualIncome\n ");        
	while (fgets (line, 10000, input_file) != NULL)
	{
            field_count = 0;
            row_count++;
             
            if (row_count == 1) {
            continue;
            }
            tempor = strtok(line, s); 
            
            while (tempor) {           
            printf("%s         ", tempor);
            field_count++;
            switch(field_count)
                 {
                   case 1:
                       newNode->sin = atoi(tempor);
                    break;

                   case 2:
                       strcpy(newNode->fname,tempor);
                    break;

                   case 3:
                       strcpy(newNode->lname,tempor);
                    break;

                   case 4:{
                       double inc;
                       char *eptr;
                       inc = strtod(tempor, &eptr);
                       newNode->income = inc;}
                    break;
            }
            
               tempor = strtok(NULL, ",");
           
        }
        printf("\n");
	  
        }
        
                    if(head == NULL) {
                        head = newNode;
                        } else {
            records_data *temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
                temp->next = newNode;
    
    }
      fclose(input_file);
} 
}


void sortRecords(){
    int sortnumber=0;
    int ordernumber=0;
    printf("Please Select sort by attribute ( 1= SIN, 2=First Name, 3=Last Name, 4=Annual Income) : ");
    scanf("%d",&sortnumber);
    printf("Please Select Order( 1=Ascending, 2=Descending) : ");
    scanf("%d",&ordernumber);
    int num =0;
        
    printf("Loading data from records.csv file.... %d records loaded", num );
    
}

void findRecords(){
    int findnumber=0;
    char fname;     char lnmae;  int socialnum; double inc;
    printf("Please select the attribute (1=SIN, 2=First Name, 3=Last Name, 4=Annual Income): ");
    scanf("%d",&findnumber);
        switch(findnumber)
                 {
                   case 1:      {
                       printf("Please provide the SIN you want to find: ");
                       findbysin();
                       
                   }                  
                       
                    break;

                   case 2:
                    {
                        printf("Please provide the first name you want to find: ");
                       fgets(fname,100,stdin);
                       RMNR(fname);
                       FLUSH;
                   }
                    break;

                   case 3:
                       printf("Please provide the Last name you want to find: ");
                       fgets(lname,100,stdin);
                       RMNR(lname);
                       FLUSH;
                    break;

                   case 4:{
                       printf("Please provide the Annual Income you want to find: ");
                       fgets(inc,100,stdin);
                       RMNR(inc);
                       FLUSH;
                       double income;
                       char *sample;
                       income = strtod(inc, &sample);
                       }
                    break;
            }
    
    
}

        char* findbysin(){
            char* fname;    char* lname;  int socialnum;  double inc;
            
                       fgets(socialnum,100,stdin);
                       RMNR(socialnum);
                       FLUSH;
                       int scin = atoi(socialnum);
                       if(head==NULL){
                       printf("\nThe List is Empty!\n");
                        } else {
                        records_data* temp = head;
                               
                        while(temp != NULL){
                        match = strcmp(temp->sin,scin);
                            if(match==0) {
//                                socialnum = temp->sin;
//                                inc = temp->income;
//                                strcpy(fname,temp->fname);
//                                strcpy(lname,temp->lname);
                            printf("%d\t%s\t%s\t%lf",temp->sin, temp->fname, temp->lname, temp->income);
                            }
                            else{
                                printf("No Records Found!!! ");

                            }
                        temp=temp->next;
                    }
                    }
                       
}


extern records_data* getNode ()
{
  
records_data * nd = (records_data *) malloc (sizeof (records_data));
  
return nd;

}


