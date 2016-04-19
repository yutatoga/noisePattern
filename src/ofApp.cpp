#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(ofColor::black);
    image.allocate(ofGetWidth(), ofGetHeight(), OF_IMAGE_GRAYSCALE);
    imageData = image.getPixels();
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i<image.getWidth()*image.getHeight(); i++) {
        imageData[i] = rand()%2 ? 255 : 0;
    }
    image.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    image.draw(0, 0);
    ofSetWindowTitle(ofToString(ofGetFrameRate(), 0));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
