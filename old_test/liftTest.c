#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const int UP_POWER = 42;
const int DOWN_POWER = 8;
const int STATIONARY_POWER = 16;
const int ZERO_POWER = 0;

task main(){
while(true){
	if(vexRT[Btn7U]){ //Going up
		motor[port2]=UP_POWER; //Clockwise
		motor[port3]=UP_POWER;
		motor[port8]=UP_POWER*-1; //Anti-clockwise
		motor[port9]=UP_POWER*-1;
	}else if(vexRT[Btn7D]){ //Going down by putting less power going up
		motor[port2]=DOWN_POWER; //Clockwise
		motor[port3]=DOWN_POWER;
		motor[port8]=DOWN_POWER*-1; //Anti-clockwise
		motor[port9]=DOWN_POWER*-1;
	}else if(vexRT[Btn7L]){ //Going down fast
		motor[port2]=ZERO_POWER; //Anti-clockwise
		motor[port3]=ZERO_POWER;
		motor[port8]=ZERO_POWER; //Clockwise
		motor[port9]=ZERO_POWER;
	}else{ //Stopping
		motor[port2]=STATIONARY_POWER; //No motion
		motor[port3]=STATIONARY_POWER;
		motor[port8]=-STATIONARY_POWER;
		motor[port9]=-STATIONARY_POWER;
	}
}
}