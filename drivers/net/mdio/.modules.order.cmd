cmd_drivers/net/mdio/modules.order := {   echo drivers/net/mdio/mdio-bitbang.ko; :; } | awk '!x[$$0]++' - > drivers/net/mdio/modules.order
