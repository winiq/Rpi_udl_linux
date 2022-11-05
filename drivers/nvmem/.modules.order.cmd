cmd_drivers/nvmem/modules.order := {   echo drivers/nvmem/nvmem-rmem.ko; :; } | awk '!x[$$0]++' - > drivers/nvmem/modules.order
