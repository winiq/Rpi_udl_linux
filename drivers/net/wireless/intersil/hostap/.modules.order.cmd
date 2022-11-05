cmd_drivers/net/wireless/intersil/hostap/modules.order := {   echo drivers/net/wireless/intersil/hostap/hostap.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/intersil/hostap/modules.order
