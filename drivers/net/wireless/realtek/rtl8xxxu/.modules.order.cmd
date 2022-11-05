cmd_drivers/net/wireless/realtek/rtl8xxxu/modules.order := {   echo drivers/net/wireless/realtek/rtl8xxxu/rtl8xxxu.ko; :; } | awk '!x[$$0]++' - > drivers/net/wireless/realtek/rtl8xxxu/modules.order
