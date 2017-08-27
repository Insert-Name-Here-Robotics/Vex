#pragma config(Motor,  port1,           driveLeft,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port5,           arm,           tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          driveRight,    tmotorVex393_HBridge, openLoop)

task main(){
	//*
	while (true) {
		motor[port1] = vexRT[Ch3] + vexRT[Ch1];
		motor[port10] = vexRT[Ch3] - vexRT[Ch1];
		if (vexRT[Btn6U]) {
			motor[arm] = 127;
		}
		else if (vexRT[Btn6D]) {
			motor[arm] = -127;
		}
		else {
			motor[arm] = 0;
		}

		if (vexRT[Btn5U]) {
			motor[claw] = 127;
		}
		else if (vexRT[Btn5D]) {
			motor[claw] = -127;
		}
		else {
			motor[claw] = 0;
		}

		if (vexRT[Btn7L]){
			motor[port1]=64;
			motor[port10]=-64;
			sleep(2*1000);
			motor[port1]=0;
			motor[port10]=0;
			motor[arm]=64;
			sleep(1*1000);
			motor[arm]=0;
			motor[claw]=64;
			sleep(1*1000);
			motor[claw]=0;
		}
		if (vexRT[Btn8R]){
			motor[port1]=-64;
			motor[port10]=64;
			sleep(2*1000);
			motor[port1]=0;
			motor[port10]=0;
			motor[arm]=-64;
			sleep(1*1000);
			motor[arm]=0;
			motor[claw]=64;
			sleep(1*1000);
			motor[claw]=0;
		}
	}
	/*/
	while(true){
		motor[driveLeft] = 127;
		motor[driveRight] = 127;
	}
	sleep(10*1000);
	//*/
}
