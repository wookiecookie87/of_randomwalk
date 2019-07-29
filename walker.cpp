//
//  walker.cpp
//  drawCircles
//
//  Created by Jung-Wook Park on 27/07/2019.
//

#include "walker.hpp"


Walker::Walker() {
    x = ofGetWidth()/2;
    y = ofGetHeight()/2;
}

Walker::~Walker() {
    
}


void Walker::display(){
    ofSetColor(0);
    ofDrawCircle(x, y, 10);
    //mesh.addVertex(ofPoint(x, y));
}

void Walker::step(){
    int choice = (int)ofRandom(4);
    
    if(choice == 0){
        x++;
    }else if(choice == 1) {
        x--;
    }else if(choice == 2) {
        y++;
    }else {
        y--;
    }
}

