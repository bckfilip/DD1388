
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#include "hello.h"
#include <cstring>

void hello (const char * name, int count) {

    int i = 0;
    if(count == 0){

    } else {
        cout << "Hello,";
        for (i = 0; i < count; i++){
            cout << " " << name;
        }
        cout << "!" << endl;
    }
}

std::pair<const char *, int> parse_args (int argc, char * argv[]) {  
    
    int size = argc;
    int num;
    
    switch(size){
        case 1 : {
            return std::make_pair("world", 1);
        }
        //Hello, arg!
        case 2 : {
                /*char * str = argv[1];
                for(int i = 0; i < strlen(str); i++){
                    if(isdigit(str[i]) == true){
                        cerr << "error: first arg must be string" << endl;
                        return std::make_pair("", -1);
                    } */
                return std::make_pair(argv[1], 1);
                
        }

        //Hello, arg arg!
        case 3 : {
                /* char * str = argv[1];
                for(int i = 0; i < strlen(str); i++){
                    if(isdigit(str[i]) == true){
                        cerr << "error: first arg must be string" << endl;
                        return std::make_pair("", -1);
                    }
                } */ 
                for(int i = 0; i < strlen(argv[2]); i++){
                    if(!isdigit(argv[2][i])){
                        cerr << "error: second arg must be int" << endl;
                        return std::make_pair("", -1);
                    }
                }
                 num = atoi(argv[2]);
                return std::make_pair(argv[1], num);
        }

        default : {
                cerr << "error: too many arguments!" << endl; 
                return std::make_pair("", -1);
        }
    }
}