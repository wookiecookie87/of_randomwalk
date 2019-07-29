//
//  walker.hpp
//  drawCircles
//
//  Created by Jung-Wook Park on 27/07/2019.
//

#ifndef walker_hpp
#define walker_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* walker_hpp */

class Walker {
public:
    Walker();
    ~Walker();
    
    int x;
    int y;
    
    void display();
    void step();
    
    ofMesh mesh;
};
