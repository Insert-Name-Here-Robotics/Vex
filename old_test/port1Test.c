
const int upPower = 50;
const int downPower = 10;
task main(){
	while(true){
		if(vexRT[Btn5U]){
			motor[port1]=upPower;
			motor[port2]=upPower;
			motor[port9]=upPower;
			motor[port10]=upPower;
		}else if(vexRT[Btn5D]){
			motor[port1]=-1*downPower;
			motor[port2]=-1*downPower;
			motor[port9]=-1*downPower;
			motor[port10]=-1*downPower;
		}else{
			motor[port1]=0;
			motor[port2]=0;
			motor[port9]=0;
			motor[port10]=0;
		}
	}
}
