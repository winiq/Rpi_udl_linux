cmd_drivers/iio/health/modules.order := {   echo drivers/iio/health/max30102.ko; :; } | awk '!x[$$0]++' - > drivers/iio/health/modules.order
