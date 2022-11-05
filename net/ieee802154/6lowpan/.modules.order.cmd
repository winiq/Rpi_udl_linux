cmd_net/ieee802154/6lowpan/modules.order := {   echo net/ieee802154/6lowpan/ieee802154_6lowpan.ko; :; } | awk '!x[$$0]++' - > net/ieee802154/6lowpan/modules.order
