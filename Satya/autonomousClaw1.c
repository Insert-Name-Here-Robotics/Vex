#pragma config(Motor,  port1,           driveLeft,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port5,           arm,           tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          driveRight,    tmotorVex393_HBridge, openLoop)

const long autonomousTime = 15;

task main(){
	//autonomous
	int startTime = nSysTime;
	while(nSysTime - startTime < autonomousTime * 1000){
		motor[driveLeft] = 20;
		motor[driveRight] = 20;
	}
	motor[driveLeft] = 0;
	motor[driveRight] = 0;
}
