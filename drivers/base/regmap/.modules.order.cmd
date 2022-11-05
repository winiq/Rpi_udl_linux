cmd_drivers/base/regmap/modules.order := {   echo drivers/base/regmap/regmap-spi.ko; :; } | awk '!x[$$0]++' - > drivers/base/regmap/modules.order
