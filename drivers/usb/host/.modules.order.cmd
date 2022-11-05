cmd_drivers/usb/host/modules.order := {   cat drivers/usb/host/dwc_otg/modules.order;   cat drivers/usb/host/dwc_common_port/modules.order; :; } | awk '!x[$$0]++' - > drivers/usb/host/modules.order
