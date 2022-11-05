cmd_drivers/mmc/host/modules.order := {   echo drivers/mmc/host/mmc_spi.ko;   echo drivers/mmc/host/of_mmc_spi.ko; :; } | awk '!x[$$0]++' - > drivers/mmc/host/modules.order
