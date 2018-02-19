//
//  Ball.cpp
//  OOP-tester
//
//  Created by Miki Bin on 2/19/18.
//

#include "Ball.h"

Ball::Ball(){
    
}

void Ball:: setup(){

    
    position.set(ofRandom(0, ofGetWidth()),0);
    
    velocity.set(0,0);

    dim = 20;
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255)); // one way of defining digital color is by addressing its 3 components individually (Red, Green, Blue) in a value from 0-255, in this example we're setting each to a random value
}

void Ball::applyForce(ofVec2f _force){
    ofVec2f acc = _force/1;
    acceleration += acc;

}

void Ball::update(){
    velocity += acceleration;
    position += velocity;
        acceleration *= 0;
    
    
}

void Ball::display(){
    ofSetColor(color);
    ofDrawCircle(position.x, position.y, dim);
}

void Ball::checkEdges(){
//    
//    ofVec2f mousePos.set(int ofGetMouseX(), int ofGetMouseY());
    
}

