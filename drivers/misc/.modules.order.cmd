cmd_drivers/misc/modules.order := {   cat drivers/misc/eeprom/modules.order;   cat drivers/misc/cb710/modules.order;   cat drivers/misc/ti-st/modules.order;   cat drivers/misc/lis3lv02d/modules.order;   cat drivers/misc/cardreader/modules.order;   echo drivers/misc/bcm2835_smi.ko;   cat drivers/misc/altera-stapl/modules.order; :; } | awk '!x[$$0]++' - > drivers/misc/modules.order