cmd_drivers/firmware/efi/modules.order := {   echo drivers/firmware/efi/efibc.ko;   echo drivers/firmware/efi/capsule-loader.ko; :; } | awk '!x[$$0]++' - > drivers/firmware/efi/modules.order
