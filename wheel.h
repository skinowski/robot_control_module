/*
 * wheel.h
 *
 *  Created on: Dec 18, 2014
 *      Author: tceylan
 */

#ifndef WHEEL_H_
#define WHEEL_H_

#include "motorDriver.h"

namespace robo {

class Wheel
{
public:
    Wheel(MotorDriver *driver);
    ~Wheel();
    int initialize(int id);
    void shutdown();

    int set_speed(int speed);

private:
    // no copy
    Wheel(const Wheel &);
    Wheel& operator=(const Wheel &);

    uint8_t get_dc_speed(int speed);
    uint8_t get_cmd(int speed);

private:
    MotorDriver         *m_driver;
    DCMotor             m_motor;
};

} // namespace robo

#endif /* WHEEL_H_ */
