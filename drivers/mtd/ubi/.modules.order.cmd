cmd_drivers/mtd/ubi/modules.order := {   echo drivers/mtd/ubi/ubi.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/ubi/modules.order
