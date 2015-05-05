/*
struct T_V_remote{
	int  on;
	int  volume_up;
	int  volume_down;
	int  mute;
};

struct Fan{
	int  on;
	int  speed;
	int  timer; 
};
*/
//functions for the tv
void tv_remote_on_off();
void tv_remote_volume_up();
void tv_remote_volume_down();
void tv_remote_mute();

//functions for the fan
void fan_on_off();
void fan_speed();
void fan_timer();

