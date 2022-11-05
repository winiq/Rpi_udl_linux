cmd_drivers/iio/common/ms_sensors/modules.order := {   echo drivers/iio/common/ms_sensors/ms_sensors_i2c.ko; :; } | awk '!x[$$0]++' - > drivers/iio/common/ms_sensors/modules.order
