cmd_drivers/usb/dwc2/modules.order := {   echo drivers/usb/dwc2/dwc2.ko; :; } | awk '!x[$$0]++' - > drivers/usb/dwc2/modules.order
