cmd_drivers/block/drbd/modules.order := {   echo drivers/block/drbd/drbd.ko; :; } | awk '!x[$$0]++' - > drivers/block/drbd/modules.order
