#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define BUFLEN 100
#define MINE   250

int grid[BUFLEN][BUFLEN];
int width;
int height;

bool setupSize(int w, int h) {
    if (w <= 0 || w > 100){
        return false
    }
    else if (h <= 0 || h > 100) {
        return false;
    }
    else {
        width  = w;
        height = h;
        return true;
    }
}

bool placeMine(int x, int y) {
    if (x < 0 || x >= width){
        return false; 
    }
    
    else if (y < 0 || y >= height) {
        return false;
    }
    else {
        grid[y][x] = MINE;
        return true;
    }
}

void uncover(int x, int y) {
    
}

void flag(int x, int y) {
    
}

void displayGrid() {
    
}

bool readSetupCommand() {
    char command;
    int  i;
    int  arg1, arg2;
    
    scanf("%c %d %d", &command, &arg1, &arg2);
    if (command != 'g') {
        return false;
    }
    
    if (setupSize(arg1, arg2) == false) {
        return false;
    }
    printf("%c %d %d\n", command, arg1, arg2);
    
    return true;
}

bool readMinePlacingCommand() {
    char command;
    int  i;
    int  arg1, arg2;
    
    for (i=0; i<10; i++) {
        scanf("%c %d %d", &command, &arg1, &arg2);a
        printf("%c %d %d\n", command, arg1, arg2);
        if ( command != 'b' ) {
            return false;
        }
        
        if ( placeMine(arg1, arg2) == false) {
            return false;
        }
    }
    return true;
}

int main(void) {
    readSetupCommand();
    readMinePlacingCommand();
	return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define BUFLEN 100
#define MINE   250

int grid[BUFLEN][BUFLEN];
int width;
int height;

bool setupSize(int w, int h) {
    if (w <= 0 || w > 100){
        return false;
    }
    else if (h <= 0 || h > 100) {
        return false;
    }
    else {
        width  = w;
        height = h;
        return true;
    }
}

bool placeMine(int x, int y) {
    if (x < 0 || x >= width){
        return false; 
    }
    
    else if (y < 0 || y >= height) {
        return false;
    }
    else {
        grid[y][x] = MINE;
        return true;
    }
}

void uncover(int x, int y) {
    
}

void flag(int x, int y) {
    
}

void displayGrid() {
    
}


bool readCommand() {
    char command;
    int  i;
    int  arg1, arg2;
    
    // 1. Read and setup size
    scanf("%c %d %d", &command, &arg1, &arg2);
    if (command != 'g') {
        return false;
    }
    
    if (setupSize(arg1, arg2) == false) {
        return false;
    }
    printf("%c %d %d\n", command, arg1, arg2);
    
    // 2. Place mines
    for (i=0; i<10; i++) {
        scanf("%c %d %d", &command, &arg1, &arg2);
        printf("%c %d %d\n", command, arg1, arg2);
        if ( command != 'b' ) {
            return false;
        }
        
        if ( placeMine(arg1, arg2) == false) {
            return false;
        }
        
    }
    
    return true;
}

int main(void) {
    readCommand();
	return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define BUFLEN 100
#define MINE   250

int grid[BUFLEN][BUFLEN];
int width;
int height;

bool setupSize(int h, int w) {
    if (w <= 0 || w > 100){
        return false;
    }
    else if (h <= 0 || h > 100) {
        return false;
    }
    else {
        width  = w;
        height = h;
        return true;
    }
}

bool placeMine(int x, int y) {
    if (x >= width || x < 0){
        return false; 
    }
    
    else if (y < 0 || y >= height) {
        return false;
    }
    else {
        grid[y][x] = MINE;
        return true;
    }
}

void uncover(int x, int y) {
    
}

void flag(int x, int y) {
    
}

void displayGrid() {
    
}


bool readCommand() {
    char command;
    int  i;
    int  arg1, arg2;
    
    // 1. Read and setup size
    scanf("%c %d %d", &command, &arg1, &arg2);
    if (command != 'g') {
        return false;
    }
    
    if (setupSize(arg1, arg2) == false) {
        return false;
    }
    printf("%c %d %d\n", command, arg1, arg2);
    
    // 2. Place mines
    for (i=0; i<10; i++) {
        scanf("%c %d %d", &command, &arg1, &arg2);
        if ( command != 'b' ) {
            return false;
        }
        
        if ( placeMine(arg1, arg2) == false) {
            return false;
        }
        printf("%c %d %d\n", command, arg1, arg2);
    }
    
    return true;
}

int main(void) {
    readCommand();
	return 0;
}



