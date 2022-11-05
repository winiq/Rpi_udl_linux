cmd_drivers/usb/mon/modules.order := {   echo drivers/usb/mon/usbmon.ko; :; } | awk '!x[$$0]++' - > drivers/usb/mon/modules.order
