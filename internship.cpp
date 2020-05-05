#include<iostream>
#include<fstream>
#include<cstring>
   using namespace std;
    int main() { char string[100]; 
	strcpy(string, "learning lad rocks chjfgh ghvhgjgvhj fjhfvhg fvjh");
	 fstream file("shristi.bin",ios::binary | ios::in | ios::out | ios::trunc);
	  if(!file.is_open()) { cout<<" Error while opening the file" ; } 
	  else { int length = strlen(string);
	   for(int counter = 0;counter <= length; counter++)
	   { file.put(string[counter]); } 
	   file.seekg(0); 
	   char ch;
	    while(file.good())
		{ file.get(ch); cout<<ch; }
		 } 
		 return 0; 
		 }
	
