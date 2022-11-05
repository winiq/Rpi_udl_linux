cmd_drivers/media/test-drivers/vimc/modules.order := {   echo drivers/media/test-drivers/vimc/vimc.ko; :; } | awk '!x[$$0]++' - > drivers/media/test-drivers/vimc/modules.order
