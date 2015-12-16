#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>

#include "Neuron.h"
#include "NeuralNet.h"
#include "Backpropagation.h"
#include "QLearn.h"
#include "Robot.h"
#include "WireFitRobot.h"
#include "WireFitQLearn.h"
#include "Tasks/FloatToEmitter.h"
#include "Tasks/DriveToEmitter.h"
#include "Tasks/FlashingLights.h"
#include "Tasks/LineFollow.h"
#include "Tasks/StayStill.h"

int main() {
    srand(time(NULL));  

	StayStill *still = new StayStill(3, 0.4, 3);
	WireFitRobot robot(still);
	robot.runTrials(50, 100);

	delete still;

	//Robot robot(new FloatToEmitter());
	//robot.run(100, 3000);
	
	while (true) {

	}

} 