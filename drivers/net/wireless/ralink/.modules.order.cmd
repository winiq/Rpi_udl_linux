cmd_drivers/net/wireless/ralink/modules.order := {   cat drivers/net/wireless/ralink/rt2x00/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/wireless/ralink/modules.order
