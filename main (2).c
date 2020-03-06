#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    create_connect();
create_drive_direct(100, 100);
msleep(1000);
    create_drive_direct(100,0);
    msleep(3000);
    create_drive_direct(-100, -100);
msleep(1000);
    enable_servos();
    set_servo_position(0,2047);
    msleep(500);
    
       create_drive_direct(100,0);
    msleep(600);
    
    create_drive_direct(100, 100);
msleep(1900);
    
    set_servo_position(1,0);
    msleep(1000);
    
        create_drive_direct(-100, -100);
msleep(4000);
    
            create_drive_direct(0,100);
msleep(1000);
    
     set_servo_position(1,910);
    msleep(1000);
    
           create_drive_direct(-100, -100);
msleep(2000);
    
    
    
create_stop();
create_disconnect();
    return 0;
}
