#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	sqr1.set(10, 15, 1000, 100);
	sqr2.set(310, 130, 700, 400);
	sqr3.set(10, 130, 280, 625);
	sqr4.set(310, 545, 700, 210);
	btn1.set(10, 130, 280, 62.5);
	btn2.set(10, 255, 280, 62.5);
	btn3.set(10, 380, 280, 62.5);
	btn4.set(10, 505, 280, 62.5);
	btn5.set(10, 630, 280, 62.5);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(0, 0, 0);
	ofSetColor(0, 160, 160);
	ofDrawRectangle(sqr1);
	ofSetColor(255, 255, 255);
	ofDrawRectangle(sqr2);
	ofSetColor(0, 160, 160);
	ofDrawRectangle(sqr3);
	ofSetColor(200, 255, 255);
	ofDrawRectangle(sqr4);
	ofSetColor(150, 255, 255);
	ofDrawRectangle(btn1);
	ofDrawRectangle(btn2);
	ofDrawRectangle(btn3);
	ofDrawRectangle(btn4);
	ofDrawRectangle(btn5);
	ofSetColor(0, 0, 0);
	ofDrawBitmapString("TWITTER API", 500, 70);
	ofDrawBitmapString("TOTAL", 50, 165);
	ofDrawBitmapString("COUNT MONEY", 50, 227.5);
	ofDrawBitmapString("COUNT POLITICS", 50, 290);
	ofDrawBitmapString("DISPLAY PARIS TWEETS", 50, 352.5);
	ofDrawBitmapString("DISPLAY DREAKWORKS TWEETS", 50, 415);
	ofDrawBitmapString("DISPLAY UBER TWEETS", 50, 477.5);
	ofDrawBitmapString("DISPLAY TRUMP TWEETS", 50, 540);
	ofDrawBitmapString("DISPLAY OBAMA TWEETS", 50, 602.5);
	ofDrawBitmapString("DISPLAY NEWS TWEETS", 50, 665);
	ofDrawBitmapString("SEARCH TWEETS", 50, 727.5);
	ofDrawBitmapString("TWEET DISPLAY", 600, 330);
	ofDrawBitmapString("COUNT DISPLAY", 600, 650);



}

