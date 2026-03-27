#ifndef LED_H
#define LED_H

#include <Arduino.h>

/**
 * @file led.h
 * @brief led control class for Arduino
 */

class LED{
 public:
     /**
      * @~Chinese
      * @brief 构造函数 - 初始化LED引脚
      * @param pin LED引脚编号
      * @param initialState 初始状态（true=高电平，false=低电平）
      *
      * @~English
      * @brief Constructor - Initialize LED pin
      * @param pin Pin number for the LED
      * @param initialState Initial state (true=HIGH, false=LOW)
      */
     LED(byte pin, bool initialState = false);

     /**
      * @~Chinese
      * @brief 析构函数 - 断开LED引脚连接
      * @details 将引脚恢复为输入模式，并设置为低电平
      *
      * @~English
      * @brief Destructor - Detach LED pin connection
      * @details Restores pin to input mode and sets to LOW
      */
     ~LED();

     /**
      * @~Chinese
      * @brief 打开LED
      * @details 将引脚设置为高电平
      *
      * @~English
      * @brief Turn on the LED
      * @details Sets pin to HIGH
      */
     void on();

     /**
      * @~Chinese
      * @brief 关闭LED
      * @details 将引脚设置为低电平
      *
      * @~English
      * @brief Turn off the LED
      * @details Sets pin to LOW
      */
     void off();

     /**
      * @~Chinese
      * @brief 切换LED状态
      * @details 如果当前为开则关闭，如果当前为关则打开
      *
      * @~English
      * @brief Toggle LED state
      * @details If currently on, turn off; if currently off, turn on
      */
     void toggle();

     /**
      * @~Chinese
      * @brief 获取LED当前状态
      * @return true=高电平，false=低电平
      *
      * @~English
      * @brief Get current LED state
      * @return true=HIGH, false=LOW
      */
     bool getState();

     /**
      * @~Chinese
      * @brief 设置LED亮度（PWM）
      * @param value 亮度值（0-255）
      * @details 仅支持PWM引脚
      *
      * @~English
      * @brief Set LED brightness (PWM)
      * @param value Brightness value (0-255)
      * @details Only works on PWM-capable pins
      */
     void setBrightness(byte value);

 private:
     byte pin;

     /**
      * @~Chinese
      * @brief 断开引脚连接
      * @details 将引脚恢复到上电状态（输入模式，低电平）
      *
      * @~English
      * @brief Detach pin connection
      * @details Restores pin to power-on state (input mode, LOW)
      */
     void detach();
};

#endif // LED_H
