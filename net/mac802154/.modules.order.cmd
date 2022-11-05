cmd_net/mac802154/modules.order := {   echo net/mac802154/mac802154.ko; :; } | awk '!x[$$0]++' - > net/mac802154/modules.order
