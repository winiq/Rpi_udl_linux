cmd_drivers/net/wireless/broadcom/b43/modules.order := {   echo drivers/net/wireless/broadcom/b43/b43.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/broadcom/b43/modules.order
