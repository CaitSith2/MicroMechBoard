//  ButtonDeltaDetector.h
//  Created by Will Yager on 7/3/13.
//  Copyright (c) 2013 Will Yager. All rights reserved.
//  Detects changes in button state

#ifndef __keyboard2__ButtonDeltaDetector__
#define __keyboard2__ButtonDeltaDetector__

#include "Types.h"

class ButtonDeltaDetector {
private:
	bool known_states[64];
public:
    ButtonDeltaDetector(){
        for (uint8_t i=0; i<64; i++) {
            this->known_states[i] = 0;
        }
    }
	ButtonsDelta update(const ButtonsState& debounced_states);
};

#endif /* defined(__keyboard2__ButtonDeltaDetector__) */
