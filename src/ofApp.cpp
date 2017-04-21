#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(255,255,255);
    
    ofSetColor(0,0,0,100);
    ofSetLineWidth(1);
    for (int i = 1; i <= 22; i++){
        ofDrawLine(0, 768/22*i, 1024, 768/22*i);
        
    }
    for (int i = 1; i <= 29; i++){
        ofDrawLine(1024/29*i, 0, 1024/29*i, 768);
    }
    ofSetColor(0,0,0,140);
    ofSetLineWidth(2);
    ofDrawLine(x_line,0,x_line,ofGetWidth() );
    ofDrawLine(0,y_line,ofGetWidth(),y_line);
    ofSetColor(ofColor::fromHsb(x_line/4,255, y_line, 255));
    ofDrawLine(ofGetWidth()/2,ofGetHeight()/2,x_line,y_line);
    ofNoFill();
    ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2,ofDist(ofGetWidth()/2, ofGetHeight()/2, x_line, y_line));
    ofFill();
    ofDrawCircle(ofGetWidth()/2,ofGetHeight()/2,ofDist(ofGetWidth()/2, ofGetHeight()/2, x_line, y_line)/2);
    //ofDrawEllipse(ofGetWidth()/2,ofGetHeight()/2,ofGetWidth()/2-x_line,ofGetHeight()/2-y_line);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    x_line=x;
    y_line=y;
    
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
