cmd_drivers/media/cec/usb/rainshadow/modules.order := {   echo drivers/media/cec/usb/rainshadow/rainshadow-cec.ko; :; } | awk '!x[$$0]++' - > drivers/media/cec/usb/rainshadow/modules.order
