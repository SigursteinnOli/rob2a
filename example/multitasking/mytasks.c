task driveMotors()
{
	while(true){
		motor[rightMotor] = full_power;
		motor[leftMotor]  = full_power;
		writeDebugStream("Doing task driveMotors %d\n", full_power);

	}
}

task clawMotors()
{
	while(true){
		motor[clawMotor] = full_power;
		wait1Msec(200);
		motor[clawMotor] = -full_power;
		wait1Msec(200);
		writeDebugStream("Doing task clawMotors%d\n", full_power);
	}
}
task one(){
	while(true)
	{
		writeDebugStream("Doing ONE :\n", 1);
		writeDebugStream("Doing time %d:\n", time1[T1]);
	}
}
task two(){
	while(true)
	{
		writeDebugStream("Doing two :\n", 2);
		writeDebugStream("Doing time %d:\n", time1[T2]);
	}
}
task three(){
	while(true)
	{
		writeDebugStream("Doing three :\n", 3);
		writeDebugStream("Doing time %d:\n", time1[T3]);
	}
}
task four(){
	while(true)
	{
		writeDebugStream("Doing four :\n", 4);
		writeDebugStream("Doing time %d:\n", time1[T4]);
	}
}
