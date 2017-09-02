#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,           ,             tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const int upPower = 127;
const int downPower = 64;

task main()
{
	//define variables
	int portDirection[11];
	int portIndex[11];
	int currentPort = 1;

	//set defaults
	portDirection[1]=0;
	portDirection[2]=0;
	portDirection[3]=0;
	portDirection[4]=0;
	portDirection[5]=0;
	portDirection[6]=0;
	portDirection[7]=0;
	portDirection[8]=0;
	portDirection[9]=0;
	portDirection[10]=0;

	//set portIndex
	portIndex[1]=port1;
	portIndex[2]=port2;
	portIndex[3]=port3;
	portIndex[4]=port4;
	portIndex[5]=port5;
	portIndex[6]=port6;
	portIndex[7]=port7;
	portIndex[8]=port8;
	portIndex[9]=port9;
	portIndex[10]=port10;

	while(true){
		if(vexRT[Btn6U]){ //going up
			for(int j = 1; j <= 10; j++){
					motor[portIndex[j]] = portDirection[j]*upPower;
			}
		}else if(vexRT[Btn6D]){ //going down
			for(int j = 1; j <= 10; j++){
					motor[portIndex[j]] = -1*portDirection[j]*downPower;
			}
		}else if(vexRT[Btn7U]){	//set currentPort to positive
			portDirection[currentPort]=1;
			writeDebugStreamLine("Motor at port %d has value %d",currentPort,1);
			while(vexRT[Btn7U]){} //wait until released
		}else if(vexRT[Btn7D]){ //set currentPort to negative
			portDirection[currentPort]=-1;
			writeDebugStreamLine("Motor at port %d has value %d",currentPort,-1);
			while(vexRT[Btn7D]){} //wait until released
		}else if(vexRT[Btn7L]){ //set currentPort to zero
			portDirection[currentPort]=0;
			writeDebugStreamLine("Motor at port %d has value %d",currentPort,0);
			while(vexRT[Btn7L]){} //wait until released
		}else if(vexRT[Ch4]<0){
			currentPort--;
			writeDebugStreamLine("Switching to motor %d with value %d",currentPort,portDirection[currentPort]);
			while(vexRT[Ch4]!=0){} //wait until released
		}else if(vexRT[Ch4]>0){
			currentPort++;
			writeDebugStreamLine("Switching to motor %d with value %d",currentPort,portDirection[currentPort]);
			while(vexRT[Ch4]!=0){} //wait until released
		}else{
			for(int j = 1; j <= 10; j++){
					motor[portIndex[j]] = 0;
			}
		}
	}
}