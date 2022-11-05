cmd_drivers/usb/image/modules.order := {   echo drivers/usb/image/mdc800.ko;   echo drivers/usb/image/microtek.ko; :; } | awk '!x[$$0]++' - > drivers/usb/image/modules.order
