cmd_drivers/mtd/devices/modules.order := {   echo drivers/mtd/devices/block2mtd.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/devices/modules.order
