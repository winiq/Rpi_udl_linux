cmd_drivers/mtd/spi-nor/modules.order := {   echo drivers/mtd/spi-nor/spi-nor.ko;   cat drivers/mtd/spi-nor/controllers/modules.order; :; } | awk '!x[$$0]++' - > drivers/mtd/spi-nor/modules.order
