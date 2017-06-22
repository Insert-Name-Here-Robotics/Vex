
task main()
{
while(!vexRT[Btn7U]){}
motor[port2]=127;
sleep(1000);
motor[port2]=-127;
sleep(1000);
motor[port2]=0;
}
