cmd_drivers/leds/trigger/modules.order := {   echo drivers/leds/trigger/ledtrig-transient.ko;   echo drivers/leds/trigger/ledtrig-camera.ko;   echo drivers/leds/trigger/ledtrig-netdev.ko;   echo drivers/leds/trigger/ledtrig-pattern.ko; :; } | awk '!x[$$0]++' - > drivers/leds/trigger/modules.order