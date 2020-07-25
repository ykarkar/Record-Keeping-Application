/*
Yash Karkar <karkar@sheridan.desire2learn.com>
----------------------------------------------------------------------
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.h
 * Author: Yash Karkar <karkar@sheridan.desire2learn.com>
 *
 * Created on April 18, 2020, 10:24 a.m.
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#define RMN(str) str[strcspn(str,"\n")]=0
#define FLUSH stdin=freopen(NULL,"r",stdin)
#define RECORDS "records.csv"


typedef struct node{
	int sin;  //sin
	char fname[100]; //firtName
	char lname[100]; //lastName
	double income; //annual Incom
	struct node * next;  //nextIndex
}records_data;

records_data* head;

   void listRecords();
   void sortRecords();
   records_data* getNode();

#endif /* FUNCTIONS_H */

