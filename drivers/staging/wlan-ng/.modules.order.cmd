cmd_drivers/staging/wlan-ng/modules.order := {   echo drivers/staging/wlan-ng/prism2_usb.ko; :; } | awk '!x[$$0]++' - > drivers/staging/wlan-ng/modules.order
