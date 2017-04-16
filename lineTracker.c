#pragma config(Sensor, in3,    LineLeft,       sensorLineFollower)
#pragma config(Sensor, in4,    LineMiddle,     sensorLineFollower)
#pragma config(Sensor, in5,    LineRight,      sensorLineFollower)
#pragma config(Sensor, dgtl1,  SONARin,        sensorSONAR_cm)
#pragma config(Motor,  port1,           driveLeft,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port5,           arm,           tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          driveRight,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	while(true){
		if(vexRT[Btn7U]){
			while(true){
				if(SensorValue[LineMiddle]>2000){
					motor[driveLeft]=80;
					motor[driveRight]=127;
				}
				else{
					motor[driveLeft]=127;
					motor[driveRight]=80;
				}
			}
		}
	}
}