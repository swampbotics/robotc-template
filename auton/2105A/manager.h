task autonomous {
	switch(Competition.IsBlue) {
	case true:
			switch(Competition.Front){
				case true:
					//Auton_Blue_Front();
				break;
				case false:
					//Auton_Blue_Back();
				break;
			}
		break;
	case false:
			switch(Competition.Front){
				case true:
					//Auton_Red_Front();
				break;
				case false:
					//Auton_Red_Back();
				break;
			}
		break;
	}
	allMotorsOff();
	AutonDataDump();
}
