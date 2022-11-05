cmd_drivers/media/test-drivers/vivid/modules.order := {   echo drivers/media/test-drivers/vivid/vivid.ko; :; } | awk '!x[$$0]++' - > drivers/media/test-drivers/vivid/modules.order
