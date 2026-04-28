#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

// get the GPIO specification for the LED from the device tree
static const struct gpio_dt_spec heart_led = GPIO_DT_SPEC_GET(DT_ALIAS(app_led), gpios);

int main(void)
{
    if (!gpio_is_ready_dt(&heart_led)) {
        return -1;
    }

    gpio_pin_configure_dt(&heart_led, GPIO_OUTPUT_ACTIVE);

    while (1) {
        gpio_pin_toggle_dt(&heart_led);
        
        // Use the configured heartbeat period from Kconfig
        k_msleep(CONFIG_APP_HEARTBEAT_PERIOD_MS);
    }
    return 0;
}