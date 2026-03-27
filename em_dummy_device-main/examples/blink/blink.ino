/**
 * @~Chinese
 * @file blink.ino
 * @brief 示例：LED闪烁。
 * @example blink.ino
 * LED闪烁，每隔1秒切换一次状态。
 */
/**
 * @~English
 * @file blink.ino
 * @brief Example: LED blink.
 * @example blink.ino
 * LED blink, toggle state every 1 second.
 */

#include "led.h"

namespace {

constexpr uint8_t k_led_pin = 13;

LED g_led(k_led_pin);

constexpr uint16_t kBlinkDelay = 1000;

}  // namespace

void setup() {
  // LED在构造时已初始化，此处无需额外操作
}

void loop() {
  g_led.on();
  delay(kBlinkDelay);
  g_led.off();
  delay(kBlinkDelay);
}