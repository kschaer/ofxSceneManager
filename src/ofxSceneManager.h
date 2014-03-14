//
//  ofxSceneManager.h
//  ofxSceneManager
//
//  Created by Koki Nomura on 2014/03/12.
//
//

#ifndef __KokiNomura__ofxSceneManager__
#define __KokiNomura__ofxSceneManager__

#include "ofxScene.h"

class ofxSceneManager {
public:
    ofxSceneManager();
    void run();
    
    void update();
    void draw();

    void changeScene();

    void addScene(ofPtr<ofxScene> pScene);
    void addScene(ofPtr<ofxScene> pScene, float fadeInSec, float fadeOutSec);
    void addScene(ofPtr<ofxScene> pScene, float fadeInSec, float drawingSec, float fadeOutSec);

    void setExitByTime(bool b);
    void setSceneDuration(float fadeInSec, float fadeOutSec);
    void setSceneDuration(float fadeInSec, float drawingSec, float fadeOutSec);    

private:
    int _sceneIndex = 0;
    ofPtr<ofxScene> _currentScene;
    vector<ofPtr<ofxScene> > _scenes;

    ofFbo _fbo;

    void _initScene(int sceneIndex);
};

#endif /* defined(__KokiNomura__ofxSceneManager__) */