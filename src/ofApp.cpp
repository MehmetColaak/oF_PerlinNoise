#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);

    gui.setup();
    gui.add(noiseScale.setup("Noise Scale", 0.01, 0.001, 0.1));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    /*for(float x = 1; x < 5000; x++)
    {
        float a = ofNoise(x * 0.05) * ofGetHeight();
        float b = ofNoise(x * 0.01) * ofGetWidth();
        
        ofVec2f randomVector2(a, b); 
        
        ofSetColor(255);
        ofDrawCircle(randomVector2, 1);
    }*/

    int gridSize = 100;
    float spacing = ofGetWidth() / float(gridSize);

    for(int rowIndex = 0; rowIndex < gridSize; rowIndex++) {
        for(int columnIndex = 0; columnIndex < gridSize; columnIndex++) {
            float noiseValue = ofNoise(rowIndex * noiseScale * 0.2, columnIndex * noiseScale * 0.2); 

            ofVec2f position(rowIndex * spacing, columnIndex * spacing);

            ofSetColor(noiseValue * 255);
            ofDrawCircle(position, 2); 
        }
    }

    gui.draw();
}

//--------------------------------------------------------------
void ofApp::exit(){

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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
