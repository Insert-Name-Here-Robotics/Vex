#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main(){
while(true){
	if(vexRT[Btn7U]){
		motor[port1]=127;
	}else if(vexRT[Btn7D]){
		motor[port1]=-127;
	}else{
		motor[port1]=0;
	}
}
}
