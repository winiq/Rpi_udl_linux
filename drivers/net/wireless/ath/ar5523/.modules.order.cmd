cmd_drivers/net/wireless/ath/ar5523/modules.order := {   echo drivers/net/wireless/ath/ar5523/ar5523.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/ath/ar5523/modules.order
