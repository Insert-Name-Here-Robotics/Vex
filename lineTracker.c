#pragma config(Sensor, in3,    LineLeft,       sensorLineFollower)
#pragma config(Sensor, in4,    LineMiddle,     sensorLineFollower)
#pragma config(Sensor, in5,    LineRight,      sensorLineFollower)
#pragma config(Sensor, dgtl1,  SONARin,        sensorSONAR_cm)
#pragma config(Motor,  port1,           motorLeft,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port5,           arm,           tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          motorRight,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const int Threshold = 2850;
const bool toggleClaw = true; //true = open, false = close

task main() {
	motor[port6]=(toggleClaw?1:-1)*127;
	sleep(3*1000);
	motor[port6]=0;
	while(true){
		if(vexRT[Btn7U]){
			while(!vexRT[Btn7D]){
				if(SensorValue[LineMiddle]>Threshold){
					motor[port1]=-44;
					motor[port10]=65;
				}
				else{
					motor[port1]=65;
					motor[port10]=-44;
				}
			}
			motor[port1]=0;
			motor[port10]=0;
		}else{
			writeDebugStreamLine("%d",SensorValue[LineMiddle]);
			if(SensorValue[LineMiddle]>Threshold){
				writeDebugStreamLine("Green");
			}else{
				writeDebugStreamLine("Blue");
			}
		}
	}
}
