#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(24);
	
	vagRounded.loadFont("vag.ttf", 32);
	
	keyboard.setup( this, OFXSK_LAYOUT_KEYBOARD_FULL );
	
	sprintf(eventString, "framerate: %f", ofGetFrameRate());
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

	keyboard.draw(100, 350);
	
	float w = vagRounded.stringWidth(eventString);
	float h = vagRounded.stringHeight(eventString);
	
	ofSetColor(0xffffff);
	vagRounded.drawString(eventString, 98,198);
	
	ofSetColor(255,122,220);
	vagRounded.drawString(eventString, 100,200);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {
	
	sprintf(eventString, "keyPressed = %c (ASCII %i)", key, key);
}

//--------------------------------------------------------------
void testApp::keyReleased(int key) {
	
	sprintf(eventString, "keyReleased = %c (ASCII %i)", key, key);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

