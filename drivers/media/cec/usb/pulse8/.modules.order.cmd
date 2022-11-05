cmd_drivers/media/cec/usb/pulse8/modules.order := {   echo drivers/media/cec/usb/pulse8/pulse8-cec.ko; :; } | awk '!x[$$0]++' - > drivers/media/cec/usb/pulse8/modules.order
