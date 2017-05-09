
double pid(double input){
	double dt = 0.001//time step in s
	float dGain = 0.5; //differential gain co-efficient
	float iGain = 0.5; //integral gain co-efficient
	float pGain = 0.5; //proportional gain co-efficient
	double errOld; //recent error signal input
	double errNew; //error signal input from dt ago
	double diff; //differential
	double integ; //integral
	double prop; //proportional
	double PID;

	errNew=input;
	sleep1(0, 001);//this must equal dt

while(true){
	errOld=errNew;
	errNew=input;
	diff = ((errNew-errOld)/dt)*dGain; //change in err over time step * gain
	integ = ((errNew+errOld)/2)*dt*iGain; //average err * time step * gain
	sleep1(0, 001);//this must equal dt
	prop = errNew*pGain;
	PID = prop+diff+integ;
	return PID;
}
}


}