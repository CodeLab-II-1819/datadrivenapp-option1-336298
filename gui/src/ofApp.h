#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofRectangle sqr1, sqr2, sqr3, sqr4;
		ofRectangle btn1, btn2, btn3, btn4, btn5;

};
