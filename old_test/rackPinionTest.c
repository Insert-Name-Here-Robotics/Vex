#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const int RACK_PINION_POWER = 32;

task main(){
	while(true){
		if(vexRT[Btn5U]){
				motor[port2]=-1*RACK_PINION_POWER;
				motor[port9]=RACK_PINION_POWER;
		}else if(vexRT[Btn5D]){
				motor[port2]=RACK_PINION_POWER;
				motor[port9]=-1*RACK_PINION_POWER;
		}else{
				motor[port2]=0;
				motor[port9]=0;
		}
	}
}
