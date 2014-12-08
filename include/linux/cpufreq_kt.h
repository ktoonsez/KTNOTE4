#include <linux/cpufreq.h>
#include <linux/cpu.h>

extern bool ktoonservative_is_active;
extern bool call_in_progress;

extern unsigned int vfreq_lock;

extern struct cpufreq_policy trmlpolicy[10];
extern unsigned int kt_freq_control[10];

//GPU
extern unsigned int cur_gpu_step;
extern unsigned int cur_max_pwrlevel;

extern void ktoonservative_screen_is_on(bool state);
extern void ktoonservative_boostpulse(bool boost_for_button);

extern unsigned int isenable_oc;
extern unsigned int isBooted;

extern void set_screen_on_off_mhz(bool onoff);

extern void send_cable_state(unsigned int state);
extern void send_cable_state_kt(unsigned int state);
extern unsigned int is_charging;

extern void set_bluetooth_state(unsigned int val);
extern void set_bluetooth_state_kt(bool val);
