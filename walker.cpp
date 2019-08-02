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
    ofDrawCircle(x, y, 1);
    
    ofNoFill();
    ofBeginShape();
    for(ofPoint& log : this->pointLogs){
        ofVertex(log);
    }
    ofEndShape();
    
    //mesh.addVertex(ofPoint(x, y));
}

void Walker::step(){
    //int choice = (int)ofRandom(4);
    float r = ofRandom(1);
    
    if(r < 0.4 ){
        x+=2;
    }else if( r < 0.6) {
        x-=2;
    }else if( r < 0.8) {
        y+=2;
    }else {
        y-=2;
    }
//    int stepX = (int)ofRandom(3) - 1;
//    int stepY = (int)ofRandom(3) - 1;
//
//    x += stepX * 3;
//    y += stepY * 6;
    
    ofPoint location = ofPoint(x, y);
    this->pointLogs.push_front(location);
}

