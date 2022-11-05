cmd_drivers/net/phy/modules.order := {   echo drivers/net/phy/ax88796b.ko;   echo drivers/net/phy/realtek.ko; :; } | awk '!x[$$0]++' - > drivers/net/phy/modules.order
