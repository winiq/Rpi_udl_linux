cmd_drivers/media/test-drivers/vicodec/modules.order := {   echo drivers/media/test-drivers/vicodec/vicodec.ko; :; } | awk '!x[$$0]++' - > drivers/media/test-drivers/vicodec/modules.order
