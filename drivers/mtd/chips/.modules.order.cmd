cmd_drivers/mtd/chips/modules.order := {   echo drivers/mtd/chips/chipreg.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/chips/modules.order
