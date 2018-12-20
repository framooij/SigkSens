


#define WINDLASS_OUTPUT_CHANNEL1_PIN 26 //WROVER pin 11, ESP32 IO26
#define WINDLASS_OUTPUT_CHANNEL2_PIN 14 //WROVER pin 13, ESP32 IO14
#define WINDLASS_STATE_CHANNEL1_PIN 25 //WROVER pin 10, ESP32 IO25
#define WINDLASS_STATE_CHANNEL2_PIN 27 //WROVER pin 13, ESP32 IO27
#define WINDLASS_COUNT_PIN 13 //WROVER pin 16, ESP32 IO13


#define WINDLASS_IDLE_TIME_MS 250 // ms to wait before allowing the windlass to start again after stopping
#define WINDLASS_WATCHDOG_MS 500 // maximum ms to allow windlass to run without getting another "on" before stopping 

