cmd_drivers/watchdog/modules.order := {   echo drivers/watchdog/gpio_wdt.ko; :; } | awk '!x[$$0]++' - > drivers/watchdog/modules.order
