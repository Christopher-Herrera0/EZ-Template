#include "main.h"
#include "EZ-Template/api.hpp"

int distance_value = 0;

void intertial_check(){
    /*
    auto check_motors = [&](std::vector<pros::Motor>& motors) {
        for (auto& m : motors) {
            if (m.get_actual_velocity() > 1){
                printf("[IC]: Robot in motion");
                break;
            } else {
                continue;
            }
        }
    }
    if (chassis.imu == nullptr || !chassis.imu->is_installed()) {
        printf("[IC]: IMU on port %d not responding\n", chassis.imu != nullptr ? chassis.imu->get_port() : -1);
    }
    */
}

void distance_sensor(){
    while (true){
        
        pros::delay(ez::util::DELAY_TIME);
    }
}