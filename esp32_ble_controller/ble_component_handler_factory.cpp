#include "ble_component_handler_factory.h"

#include "ble_component_handler.h"
#include "ble_switch_handler.h"

namespace esphome {
namespace esp32_ble_controller {

static const char *TAG = "ble_component_handler_factory";

BLEComponentHandlerBase* BLEComponentHandlerFactory::create_component_handler(Nameable* component, const BLECharacteristicInfoForHandler& characteristicInfo) {
  return new BLEComponentHandler<Nameable>(component, characteristicInfo);
}

#ifdef USE_BINARY_SENSOR
BLEComponentHandlerBase* esphome::esp32_ble_controller::BLEComponentHandlerFactory::create_binary_sensor_handler(binary_sensor::BinarySensor* component, const BLECharacteristicInfoForHandler& characteristicInfo) {
  return create_component_handler(component, characteristicInfo);    
}
#endif

#ifdef USE_COVER
#endif

#ifdef USE_FAN
#endif

#ifdef USE_LIGHT
#endif

#ifdef USE_SENSOR
BLEComponentHandlerBase* esphome::esp32_ble_controller::BLEComponentHandlerFactory::create_sensor_handler(sensor::Sensor* component, const BLECharacteristicInfoForHandler& characteristicInfo) {
  return create_component_handler(component, characteristicInfo);    
}
#endif

#ifdef USE_SWITCH
BLEComponentHandlerBase* BLEComponentHandlerFactory::create_switch_handler(switch_::Switch* component, const BLECharacteristicInfoForHandler& characteristicInfo) {
  return new BLESwitchHandler(component, characteristicInfo);
}
#endif

#ifdef USE_TEXT_SENSOR
BLEComponentHandlerBase* esphome::esp32_ble_controller::BLEComponentHandlerFactory::create_text_sensor_handler(text_sensor::TextSensor* component, const BLECharacteristicInfoForHandler& characteristicInfo) {
  return create_component_handler(component, characteristicInfo);    
}
#endif

#ifdef USE_CLIMATE
#endif

} // namespace esp32_ble_controller
} // namespace esphome