cmd_sound/drivers/mpu401/modules.order := {   echo sound/drivers/mpu401/snd-mpu401-uart.ko;   echo sound/drivers/mpu401/snd-mpu401.ko; :; } | awk '!x[$$0]++' - > sound/drivers/mpu401/modules.order
