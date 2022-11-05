cmd_drivers/usb/roles/modules.order := {   echo drivers/usb/roles/roles.ko; :; } | awk '!x[$$0]++' - > drivers/usb/roles/modules.order
