#ifndef BASE_FUNCTIONS
#define BASE_FUNCTIONS

#define D(x) Serial.print(x)
#define DL(x) {Serial.println(x);}
#define DF(...) Serial.printf(__VA_ARGS__);

#define LED 5

void blink(int amount=3, int duration=100);

#define WIFI_TIMEOUT 5e3
extern char nodename[20];
int connect_to_wifi();

#endif
