# Zephyr Training Environment

Welcome to the Zephyr RTOS training! This repository includes a ready-to-use
development environment based on Zephyr 4.3.0, which you can set up in one of
three ways:

## Virtual Environment

```bash
source ~/zephyrproject/.venv/bin/activate
```

```bash
west init -l

west update
```

```bash

export ZEPHYR_BASE=~/zephyrproject/zephyr

west build --board doit_esp32_devkit_v1/esp32/procpu app -p

west flash
```

---
## For Virtual Machine

Alow esp32 device

```bash
sudo fuser -k /dev/ttyUSB0
sudo chmod 666 /dev/ttyUSB0
```

---
## Results

![Results](first_flash.png)

---

## Manual Zephyr Setup

Follow the following guide:
- [Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html#).

Make sure to select appropriate OS and to perform all steps till
[Build the Blinky Sample](https://docs.zephyrproject.org/latest/develop/getting_started/index.html#build-the-blinky-sample).
