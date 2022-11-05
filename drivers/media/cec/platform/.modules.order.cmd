cmd_drivers/media/cec/platform/modules.order := {   cat drivers/media/cec/platform/cec-gpio/modules.order; :; } | awk '!x[$$0]++' - > drivers/media/cec/platform/modules.order
